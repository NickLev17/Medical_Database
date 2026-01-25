#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydelegate.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QDebug>
#include <QSqlQueryModel>
#include <QInputDialog>
#include <QAction>
#include <QMenuBar>
#include <QSqlRelation>
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QRegExp>
#include <QItemSelectionModel>
#include <QTableView>
#include <QHBoxLayout>
#include <QLabel>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->setCurrentIndex(0);
    widgetInitialisation(false);

    QObject::connect(ui->menu_connect_db,&QAction::triggered,this,&MainWindow::connectionDatabase);
    QObject::connect(ui->pbn_AddDoctors,&QPushButton::clicked,this,&MainWindow::addDoctor);
    QObject::connect(ui->pbn_AddPatients,&QPushButton::clicked,this,&MainWindow::addPatient);
    QObject::connect(ui->pbn_AddResearchs,&QPushButton::clicked,this,&MainWindow::addResearch);

    QObject::connect(ui->comboBox_patients,&QComboBox::currentTextChanged,this,&MainWindow::handleFound);
    QObject::connect(ui->comboBox_doctors,&QComboBox::currentTextChanged,this,&MainWindow::handleFound);
    QObject::connect(ui->comboBox_research,&QComboBox::currentTextChanged,this,&MainWindow::handleFound);

    QObject::connect(ui->lineEdit_patients,&QLineEdit::textEdited,this,&MainWindow::handleFound);
    QObject::connect(ui->lineEdit_doctors,&QLineEdit::textEdited,this,&MainWindow::handleFound);
    QObject::connect(ui->lineEdit_research,&QLineEdit::textEdited,this,&MainWindow::handleFound);

    QObject::connect(ui->tabWidget,&QTabWidget::currentChanged,[this](){ui->statusbar->clearMessage();});

    QObject::connect(ui->pbn_SortAscendingResearch,&QPushButton::clicked,[this](){
        setSotrColumn(m_model_research,Qt::SortOrder::AscendingOrder,ui->comboBox_research);
    });
    QObject::connect(ui->pbn_SortDescendingResearch,&QPushButton::clicked,[this](){
        setSotrColumn(m_model_research,Qt::SortOrder::DescendingOrder,ui->comboBox_research);
    });

    QObject::connect(ui->pbn_SortAscendingPatients,&QPushButton::clicked,[this](){
        setSotrColumn(m_model_patients,Qt::SortOrder::AscendingOrder,ui->comboBox_patients);
    });
    QObject::connect(ui->pbn_SortDescendingPatients,&QPushButton::clicked,[this](){
        setSotrColumn(m_model_patients,Qt::SortOrder::DescendingOrder,ui->comboBox_patients);
    });

    QObject::connect(ui->pbn_SortAscendingDoctors,&QPushButton::clicked,[this](){
        setSotrColumn(m_model_doctors,Qt::SortOrder::AscendingOrder,ui->comboBox_doctors);
    });
    QObject::connect(ui->pbn_SortDescendingDoctors,&QPushButton::clicked,[this](){
        setSotrColumn(m_model_doctors,Qt::SortOrder::DescendingOrder,ui->comboBox_doctors);
    });

    QObject::connect(ui->pbn_DisableSortResearch,&QPushButton::clicked,[this](){
        disableSortColumn(m_model_research);
    });

    QObject::connect(ui->pbn_DisableSortDoctors,&QPushButton::clicked,[this](){
        disableSortColumn(m_model_doctors);
    });

    QObject::connect(ui->pbn_DisableSortPatients,&QPushButton::clicked,[this](){
        disableSortColumn(m_model_patients);
    });

    QObject::connect(ui->pbn_RemoveRowResearch,&QPushButton::clicked,[this](){
        removeRowInTable(m_model_research,m_view_research);
    });

    QObject::connect(ui->pbn_RemoveRowPatients,&QPushButton::clicked,[this](){
        removeRowInTable(m_model_patients,m_view_patients);
    });

    QObject::connect(ui->pbn_RemoveRowDoctors,&QPushButton::clicked,[this](){
        removeRowInTable(m_model_doctors,m_view_doctors);
    });

    cardioWindow=new QWidget();
    layout = new QHBoxLayout(cardioWindow);
    label = new QLabel(cardioWindow);
}

MainWindow::~MainWindow()
{
    disconnectDatabase();
    delete cardioWindow;
    cardioWindow=nullptr;
    delete ui;
}

bool MainWindow::checkDriver() const
{
    if(!QSqlDatabase::isDriverAvailable(driverName))
    {
        qDebug()<<driverName<<" Draver is not available";

        qDebug()<<"Available drivers - "<<QSqlDatabase::drivers();
    }
    return true;
}

void MainWindow::connectionDatabase(bool connect)
{
    if(connect)
    {
        if(checkDriver())
        {
            m_db=QSqlDatabase::addDatabase(driverName);

            m_db.setDatabaseName("INTFETAL.sqlite");

            if(!m_db.open())
            {
                QSqlError err=m_db.lastError();
                qDebug()<<err.nativeErrorCode()<<" : "<<err.text();
                return;
            }
            initial_tableModelAndView();
            showResearchs();
            showPatients();
            showDoctors();
            ui->menu_connect_db->setText("Отключиться от БД");
            widgetInitialisation(true);
        }
    }
    else
    {
        disconnectDatabase();
    }
}

void MainWindow::disconnectDatabase()
{
    if(m_db.isOpen())
    {
        m_db.close();
        m_view_research=nullptr;
        m_view_patients=nullptr;
        m_view_doctors=nullptr;

        m_model_research->clear();
        m_model_research=nullptr;

        m_model_doctors->clear();
        m_model_doctors=nullptr;

        m_model_patients->clear();
        m_model_patients=nullptr;
        ui->menu_connect_db->setText("Подключиться к БД");

        ui->comboBox_doctors->clear();
        ui->comboBox_patients->clear();
        ui->comboBox_research->clear();
        widgetInitialisation(false);
    }
}

void MainWindow::setSotrColumn(QSqlTableModel *model, Qt::SortOrder order, QComboBox *combobox)
{
    if((model!=nullptr) && (combobox!=nullptr))
    {
        int column=combobox->currentIndex();
        model->setSort(column,order);
        model->select();
    }
}

void MainWindow::disableSortColumn(QSqlTableModel *model)
{
    if(model!=nullptr)
    {
        model->setSort(-1,Qt::SortOrder::AscendingOrder);
        model->select();
    }
}

void MainWindow::addPatient()
{
    if(messageDialogBox("Пациенты"))
    {
        m_model_patients->select();
        int tmp=m_model_patients->rowCount();
        m_model_patients->insertRow(tmp);
        m_model_patients->submit();
        m_view_patients->viewport()->update();
        m_view_patients->scrollToBottom();
        ui->statusbar->clearMessage();
    }
}

void MainWindow::addResearch()
{
    if(messageDialogBox("Исследования"))
    {
        m_model_research->select();
        int tmp=m_model_research->rowCount();
        m_model_research->insertRow(tmp);
        m_model_research->submit();
        m_view_research->viewport()->update();
        m_view_research->scrollToBottom();
        ui->statusbar->clearMessage();
    }
}

void MainWindow::addDoctor()
{
    if(messageDialogBox("Доктора"))
    {
        m_model_doctors->select();
        int tmp=m_model_doctors->rowCount();
        m_model_doctors->insertRow(tmp);
        m_model_doctors->submit();
        m_view_doctors->viewport()->update();
        m_view_doctors->scrollToBottom();
        ui->statusbar->clearMessage();
    }
}

QList<QString> MainWindow::requestNameColumn(QSqlTableModel *model)
{
    if(model!=nullptr)
    {
        QList<QString> nameColumn;
        for(int i=0;i<model->columnCount();i++)
        {
            nameColumn.append(model->headerData(i,Qt::Orientation::Horizontal,Qt::DisplayRole).toString());
        }
        return nameColumn;
    }
    else
    {
        return  QList<QString>();
    }
}
void MainWindow::showDoctors()
{
    if(m_db.isOpen())
    {
        m_model_doctors->clear();
        m_model_doctors->setTable("DOCTORS");
        m_model_doctors->select();
        m_view_doctors->setModel(m_model_doctors);
        m_view_doctors->resizeRowsToContents();
        m_view_doctors->resizeColumnsToContents();
        m_view_doctors->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        m_view_doctors->hideColumn(2);

        ui->comboBox_doctors->addItems(requestNameColumn(m_model_doctors));
    }
}

void MainWindow::showPatients()
{
    if(m_db.isOpen())
    {
        m_model_patients->clear();
        m_model_patients->setTable("PATIENTS");
        m_model_patients->select();
        m_view_patients->setModel( m_model_patients);
        m_view_patients->setItemDelegate(new MyDelegate(this));
        m_view_patients->resizeRowsToContents();
        m_view_patients->resizeColumnsToContents();
        m_view_patients->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        m_view_patients->hideColumn(2);

        ui->comboBox_patients->addItems(requestNameColumn(m_model_patients));

        connect(m_view_patients, &QTableView::clicked,
                [this]() {
            if(m_view_patients->currentIndex().column()==3)
            {
                auto cardioData= m_view_patients->currentIndex().data(Qt::DisplayRole).toInt();
                QPixmap pix;
                switch (cardioData) {
                case 1 :
                {
                    pix.load(":/images/cardio.jpg");
                    break;
                }
                case 2 :
                {
                    pix.load(":/images/cardio_2.jpg");
                    break;
                }
                case 3 :
                {
                    pix.load(":/images/cardio_3.jpg");
                    break;
                }
                default: return;

                }
                label->clear();
                label->setPixmap(pix.scaled(300, 300, Qt::KeepAspectRatio));
                label->setScaledContents(true);
                label->setAlignment(Qt::AlignCenter);

                layout->addWidget(label);
                cardioWindow->setWindowIcon(QPixmap(":/images/medical.png"));
                cardioWindow->setWindowTitle("Кардиограмма пациента");

                cardioWindow->resize(400, 400);
                cardioWindow->show();
            }
        });
    }
}

void MainWindow::showResearchs()
{
    m_model_research->setTable("RESEARCH");
    m_model_research->setRelation(1,QSqlRelation("DOCTORS","REC_NO","DOCTOR_NAME"));
    m_model_research->setRelation(2,QSqlRelation("PATIENTS","REC_NO","PATIENT_NAME"));
    m_model_research->select();

    m_view_research->setModel(m_model_research);
    m_view_research->setItemDelegate(new QSqlRelationalDelegate(this));
    m_view_research->resizeRowsToContents();
    m_view_research->resizeColumnsToContents();
    m_view_research->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    m_view_research->hideColumn(0);

    ui->comboBox_research->addItems(requestNameColumn(m_model_research));
}

void MainWindow::foundDataInTable(const QSqlTableModel *model, const QString &nameColumn, const QVariant &data, QTableView *view) const
{
    if((model==nullptr) || (view==nullptr))
    {
        return;
    }

    QItemSelectionModel *selectionModel = view->selectionModel();
    selectionModel->clear();  // Очистить предыдущее выделение
    ui->statusbar->clearMessage();

    if(ui->lineEdit_research->text().isEmpty() && (model==m_model_research))
    {
        return;
    }

    if(ui->lineEdit_doctors->text().isEmpty() && (model==m_model_doctors))
    {
        return;
    }

    if(ui->lineEdit_patients->text().isEmpty() && (model==m_model_patients))
    {
        return;
    }

    int count=0;

    auto indexColumn=model->record().indexOf(nameColumn);
    QSqlQuery("PRAGMA encoding = 'UTF-8'", m_db).exec();
    for(int i=0;i<model->rowCount();i++)
    {
        QModelIndex modInd=model->index(i,indexColumn);
        QVariant  value= model->data(modInd);
        QString name=value.toString();
        if(name.contains(QRegExp(data.toString(),Qt::CaseInsensitive)))
        {
            count++;

            selectionModel->select(modInd, QItemSelectionModel::Select);
            selectionModel->select(modInd, QItemSelectionModel::Select);
        }
    }
    ui->statusbar->showMessage("Обнаружено совпадений: "+QString::number(count));
}

void MainWindow::handleFound()
{
    auto currentTab=ui->tabWidget->currentIndex();
    switch (currentTab)
    {
    case 0 :
    {
        if(ui->lineEdit_research->text().isEmpty())
            return;
        auto dataFound=ui->lineEdit_research->text();
        auto nameColumn=ui->comboBox_research->currentText();
        foundDataInTable(m_model_research,nameColumn,dataFound,ui->tableView_research);
        break;
    }
    case 1 :
    {
        if(ui->lineEdit_patients->text().isEmpty())
            return;
        auto dataFound=ui->lineEdit_patients->text();
        auto nameColumn=ui->comboBox_patients->currentText();
        foundDataInTable(m_model_patients,nameColumn,dataFound,ui->tableView_patients);
        break;
    }
    case 2 :
    {
        if(ui->lineEdit_doctors->text().isEmpty())
            return;
        auto dataFound=ui->lineEdit_doctors->text();
        auto nameColumn=ui->comboBox_doctors->currentText();
        foundDataInTable(m_model_doctors,nameColumn,dataFound,ui->tableView_doctors);
        break;
    }
    }
}

void MainWindow::removeRowInTable(QSqlTableModel *model,const QTableView *view)
{
    if((model==nullptr) || (view==nullptr))
    {
        return;
    }

    ui->statusbar->clearMessage();

    QModelIndex index=view->currentIndex();

    if(!index.isValid())
    {
        QMessageBox::warning(this,"Удаление записи","Выберите запись в таблице, которую хотите удалить, и нажмите кнопку \"Удалить\" заново");
        return;
    }
    else
    {
        if(QMessageBox::warning(this,"Удаление записи"," Вы действительно хотите удалить выбранную запись запись из таблицы ?",QMessageBox::Yes | QMessageBox::No)==QMessageBox::Yes)
        {
            model->removeRow(index.row());
            if (model->submitAll())
            {
                model->select();
                ui->statusbar->showMessage("Запись успешно удалена");
            } else {
                model->revertAll();  // Откат
                ui->statusbar->showMessage("Возникла проблема при удалении записи, попробуйте снова");
            }
        }
    }

}

void MainWindow::widgetInitialisation(bool state)
{
    QList<QPushButton*> list = this->findChildren<QPushButton*>(QString());
    for(auto& l:list)
    {
        l->setEnabled(state);
    }
    ui->lineEdit_doctors->clear();
    ui->lineEdit_research->clear();
    ui->lineEdit_patients->clear();
}

void MainWindow::initial_tableModelAndView()
{
    m_model_research=new QSqlRelationalTableModel(this,m_db);
    m_model_patients=new QSqlTableModel(this,m_db);
    m_model_patients->setEditStrategy(QSqlTableModel::OnFieldChange);
    m_model_doctors=new QSqlTableModel(this,m_db);
    m_model_doctors->setEditStrategy(QSqlTableModel::OnFieldChange);
    m_view_research=ui->tableView_research;
    m_view_patients=ui->tableView_patients;
    m_view_doctors=ui->tableView_doctors;
}

bool MainWindow::messageDialogBox(const QString& nameTable) const
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Добавить новую запись в таблицу - "+nameTable);
    msgBox.setText("Выберите один из вариантов:\n\n"
                   "Ok - добавить в конец таблицы пустую запись, которую можно заполнить вручную\n"
                   "Cancel - отменить добавление записи");
    msgBox.setStandardButtons( QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setWindowIcon(QPixmap(":/images/medical.png"));
    msgBox.setDefaultButton(QMessageBox::Ok);
    msgBox.setStyleSheet("QDialog{background: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 #f8f9fa, stop:1 #dde6ef);}\
                         QPushButton{background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #007bff, stop:1 #0056b3);\
                                     color: white;\
                                     font-family: 'Segoe UI', 'Roboto', -apple-system, sans-serif;\
                                     font-size: 13px;\
                                     border-radius: 6px;\
                                     min-width: 60;\
                                     min-height: 20}");
                         int answer = msgBox.exec();
            if(answer==QMessageBox::Ok)
    {
        return true;
    }
    return false;
}
