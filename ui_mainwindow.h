/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *menu_connect_db;
    QAction *menu_exit_connect_db;
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab_Research;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_14;
    QFrame *line_6;
    QSpacerItem *verticalSpacer_21;
    QPushButton *pbn_AddResearchs;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pbn_RemoveRowResearch;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_15;
    QFrame *line;
    QSpacerItem *verticalSpacer_16;
    QPushButton *pbn_SortAscendingResearch;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pbn_SortDescendingResearch;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pbn_DisableSortResearch;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView_research;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QGridLayout *gridLayout_7;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_research;
    QComboBox *comboBox_research;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_Patients;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_6;
    QTableView *tableView_patients;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_patients;
    QComboBox *comboBox_patients;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_12;
    QFrame *line_5;
    QSpacerItem *verticalSpacer_20;
    QPushButton *pbn_AddPatients;
    QSpacerItem *verticalSpacer_7;
    QPushButton *pbn_RemoveRowPatients;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_13;
    QFrame *line_2;
    QSpacerItem *verticalSpacer_17;
    QPushButton *pbn_SortAscendingPatients;
    QSpacerItem *verticalSpacer_9;
    QPushButton *pbn_SortDescendingPatients;
    QSpacerItem *verticalSpacer_10;
    QPushButton *pbn_DisableSortPatients;
    QSpacerItem *verticalSpacer_6;
    QWidget *tab_Doctors;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_9;
    QTableView *tableView_doctors;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_doctors;
    QComboBox *comboBox_doctors;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_11;
    QFrame *line_4;
    QSpacerItem *verticalSpacer_19;
    QPushButton *pbn_AddDoctors;
    QSpacerItem *verticalSpacer_12;
    QPushButton *pbn_RemoveRowDoctors;
    QSpacerItem *verticalSpacer_13;
    QLabel *label_10;
    QFrame *line_3;
    QSpacerItem *verticalSpacer_18;
    QPushButton *pbn_SortAscendingDoctors;
    QSpacerItem *verticalSpacer_14;
    QPushButton *pbn_SortDescendingDoctors;
    QSpacerItem *verticalSpacer_15;
    QPushButton *pbn_DisableSortDoctors;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1002, 658);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/medical.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow, /*QDialog,*/ QWidget {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #f8f9fa, stop:1 #dde6ef); \n"
"    font-family: 'Segoe UI', 'Roboto', -apple-system, sans-serif;\n"
"    font-size: 13px;\n"
"}\n"
"\n"
"\n"
"\n"
"/* \320\242\320\220\320\221\320\222\320\230\320\224\320\226\320\225\320\242 - \320\234\320\265\320\264\320\270\321\206\320\270\320\275\321\201\320\272\320\270\320\265 \320\262\320\272\320\273\320\260\320\264\320\272\320\270 */\n"
"QTabWidget::pane {\n"
"    border: 1px solid #dee2e6;\n"
"    background: white;\n"
"    border-radius: 8px;\n"
"    margin-top: 8px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #e9ecef, stop:1 #dee2e6);\n"
"    padding: 12px 24px;\n"
"    margin-right: 2px;\n"
"    border-top-left-radius: 6px;\n"
"    border-top-right-radius: 6px;\n"
"    color: #495057;\n"
"    font-weight: 400;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: qlineargradient(x1:0, y1"
                        ":0, x2:0, y2:1,\n"
"        stop:0 #007bff, stop:1 #0056b3);\n"
"    color: white;\n"
"    font-weight: 400;\n"
"}\n"
"\n"
"QTabBar::tab:hover:!selected {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #cce7ff, stop:1 #b3d7ff);\n"
"}\n"
"\n"
"\n"
"\n"
"/* \320\237\320\240\320\236\320\232\320\240\320\243\320\242\320\232\320\220 */\n"
"QScrollBar:vertical {\n"
"    background: #f8f9fa;\n"
"    width: 14px;\n"
"    border-radius: 7px;\n"
"    margin: 0 4px 0 0;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 #adb5bd, stop:1 #6c757d);\n"
"    min-height: 20px;\n"
"    border-radius: 7px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 #6c757d, stop:1 #495057);\n"
"}\n"
"\n"
"\n"
"QStatusBar {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #f8f9fa, stop:1 #e9ecef);\n"
"    color: #6c757d;\n"
"    "
                        "padding: 8px;\n"
"    border-top: 1px solid #dee2e6;\n"
"}\n"
"\n"
"\n"
"QComboBox {\n"
"    border: 2px solid #ced4da;\n"
"    border-radius: 6px;\n"
"    padding: 8px 12px;\n"
"    background: white;\n"
"    min-height: 15px;\n"
"    font-size: 13px;\n"
"    padding-left: 12px;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border-color: #80bdff;\n"
"    background: #f8f9fa;\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border-color: #007bff;\n"
"  /*  box-shadow: 0 0 0 0.2rem rgba(0,123,255,.25);*/\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    border-left: 1px solid #ced4da;\n"
"    width: 36px;\n"
"    border-top-right-radius: 5px;\n"
"    border-bottom-right-radius: 5px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(data:image/svg+xml;base64,...); /* \320\241\321\202\321\200\320\265\320\273\320\272\320\260 */\n"
"    width: 12px;\n"
"    height: 12px;\n"
"}\n"
"\n"
"/* \320\233\320\220\320\231\320\235\320\255\320\224\320\230\320\242\320\253 - \320\237\320\276\320\270\321\201\320\272 \320\277\320\260\321\206"
                        "\320\270\320\265\320\275\321\202\320\276\320\262 */\n"
"QLineEdit {\n"
"    border: 2px solid #ced4da;\n"
"    border-radius: 6px;\n"
"    padding: 10px 14px;\n"
"    background: white;\n"
"    min-height: 14px;\n"
"    font-size: 13px;\n"
"    color: #212529;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border-color: #80bdff;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #007bff;\n"
"  /*  box-shadow: 0 0 0 0.2rem rgba(0,123,255,.25);*/\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #6c757d;\n"
"}\n"
"\n"
"\n"
"QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #007bff, stop:1 #0056b3);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"  /*  letter-spacing: 0.5px;*/\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #0056b3, stop:1 #004085);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: #004085;\n"
" \n"
"}\n"
"\n"
"\n"
"QPushButton#pbn_RemoveRowResearch,\n"
""
                        "QPushButton#pbn_RemoveRowDoctors,\n"
"QPushButton#pbn_RemoveRowPatients {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop:0 #dc3545, stop:1 #c82333);\n"
"}\n"
"\n"
"QPushButton#pbn_RemoveRowResearch:hover,\n"
"QPushButton#pbn_RemoveRowDoctors:hover,\n"
"QPushButton#pbn_RemoveRowPatients:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop:0 #c82333, stop:1 #bd2130);\n"
"}\n"
"\n"
"/* \320\232\320\275\320\276\320\277\320\272\320\260 \"\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214\" - \320\267\320\265\320\273\320\265\320\275\320\260\321\217 */\n"
"QPushButton#pbn_AddResearchs,\n"
"QPushButton#pbn_AddPatients,\n"
"QPushButton#pbn_AddDoctors {\n"
"    background: qlineargradient(x1: 0, y1 :0, x2: 0, y2: 1,\n"
"        stop:0 #28a745, stop:1 #218838);\n"
"}\n"
"\n"
"/* \320\232\320\275\320\276\320\277\320\272\320\260 \"\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214\" - \320\267\320\265\320\273\320\265\320\275\320"
                        "\260\321\217 */\n"
"QPushButton#pbn_AddResearchs:hover,\n"
"QPushButton#pbn_AddPatients:hover,\n"
"QPushButton#pbn_AddDoctors:hover {\n"
"    background: qlineargradient(x1: 0, y1 :0, x2: 0, y2: 1,\n"
"        stop:0 #218838, stop:1 #218828);\n"
"}\n"
"\n"
"\n"
"QTableView {\n"
"    gridline-color: #dee2e6;  /* \342\234\205 \320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \320\273\320\270\320\275\320\270\320\270 */\n"
"    background-color: white;\n"
"    alternate-background-color: #f8f9fa;\n"
"    selection-background-color: #007bff;\n"
"    font-size: 12px;\n"
"    border: 1px solid #dee2e6;\n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding: px 2px;\n"
"    /* \342\234\205 \320\221\320\265\320\267 border-bottom! */\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    color: white;\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0,\n"
"                                stop: 0 #007bff, stop: 1 #0056b3);\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background: qlineargradient(x1:0, y"
                        "1:0, x2:0, y2:1,\n"
"        stop:0 #f8f9fa, stop:1 #e9ecef);\n"
"    padding: 2px;\n"
"    border: 1px solid #dee2e6;\n"
"    font-weight: 600;\n"
"    color: #495057;\n"
"    border-top: none;\n"
"}\n"
"\n"
"QHeaderView::section:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #e9ecef, stop:1 #dee2e6);\n"
"}\n"
"\n"
"\n"
"QMessageBox QPushButton {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #007bff, stop: 1 #0056b3);\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 2px 15px;\n"
"    border-radius: 8px;\n"
"    font-size: 13px;\n"
"    font-weight: 600;\n"
"    min-height: 15px;\n"
"    text-transform: uppercase;\n"
"   /* letter-spacing: 0.5px;*/\n"
"    margin: 0 4px;\n"
"}\n"
"\n"
""));
        menu_connect_db = new QAction(MainWindow);
        menu_connect_db->setObjectName(QString::fromUtf8("menu_connect_db"));
        menu_connect_db->setCheckable(true);
        menu_exit_connect_db = new QAction(MainWindow);
        menu_exit_connect_db->setObjectName(QString::fromUtf8("menu_exit_connect_db"));
        menu_exit_connect_db->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setIconSize(QSize(16, 16));
        tab_Research = new QWidget();
        tab_Research->setObjectName(QString::fromUtf8("tab_Research"));
        gridLayout = new QGridLayout(tab_Research);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        label_14 = new QLabel(tab_Research);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout->addWidget(label_14);

        line_6 = new QFrame(tab_Research);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_6);

        verticalSpacer_21 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_21);

        pbn_AddResearchs = new QPushButton(tab_Research);
        pbn_AddResearchs->setObjectName(QString::fromUtf8("pbn_AddResearchs"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbn_AddResearchs->sizePolicy().hasHeightForWidth());
        pbn_AddResearchs->setSizePolicy(sizePolicy);
        pbn_AddResearchs->setMinimumSize(QSize(161, 51));
        pbn_AddResearchs->setLayoutDirection(Qt::RightToLeft);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbn_AddResearchs->setIcon(icon1);

        verticalLayout->addWidget(pbn_AddResearchs);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_2);

        pbn_RemoveRowResearch = new QPushButton(tab_Research);
        pbn_RemoveRowResearch->setObjectName(QString::fromUtf8("pbn_RemoveRowResearch"));
        pbn_RemoveRowResearch->setMinimumSize(QSize(161, 51));
        pbn_RemoveRowResearch->setLayoutDirection(Qt::RightToLeft);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbn_RemoveRowResearch->setIcon(icon2);

        verticalLayout->addWidget(pbn_RemoveRowResearch);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_3);

        label_15 = new QLabel(tab_Research);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout->addWidget(label_15);

        line = new QFrame(tab_Research);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(1);
        line->setMidLineWidth(0);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        verticalSpacer_16 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_16);

        pbn_SortAscendingResearch = new QPushButton(tab_Research);
        pbn_SortAscendingResearch->setObjectName(QString::fromUtf8("pbn_SortAscendingResearch"));
        pbn_SortAscendingResearch->setMinimumSize(QSize(161, 51));
        pbn_SortAscendingResearch->setLayoutDirection(Qt::RightToLeft);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/top.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbn_SortAscendingResearch->setIcon(icon3);
        pbn_SortAscendingResearch->setIconSize(QSize(20, 30));

        verticalLayout->addWidget(pbn_SortAscendingResearch);

        verticalSpacer_4 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_4);

        pbn_SortDescendingResearch = new QPushButton(tab_Research);
        pbn_SortDescendingResearch->setObjectName(QString::fromUtf8("pbn_SortDescendingResearch"));
        pbn_SortDescendingResearch->setMinimumSize(QSize(161, 51));
        pbn_SortDescendingResearch->setLayoutDirection(Qt::RightToLeft);
        pbn_SortDescendingResearch->setAutoFillBackground(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/bottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbn_SortDescendingResearch->setIcon(icon4);
        pbn_SortDescendingResearch->setIconSize(QSize(20, 30));

        verticalLayout->addWidget(pbn_SortDescendingResearch);

        verticalSpacer_5 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_5);

        pbn_DisableSortResearch = new QPushButton(tab_Research);
        pbn_DisableSortResearch->setObjectName(QString::fromUtf8("pbn_DisableSortResearch"));
        pbn_DisableSortResearch->setMinimumSize(QSize(161, 51));
        pbn_DisableSortResearch->setLayoutDirection(Qt::RightToLeft);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/cancell.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbn_DisableSortResearch->setIcon(icon5);
        pbn_DisableSortResearch->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(pbn_DisableSortResearch);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tableView_research = new QTableView(tab_Research);
        tableView_research->setObjectName(QString::fromUtf8("tableView_research"));

        verticalLayout_3->addWidget(tableView_research);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(tab_Research);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_2 = new QLabel(tab_Research);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_7->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(tab_Research);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_7->addWidget(label_3, 0, 1, 1, 1);

        lineEdit_research = new QLineEdit(tab_Research);
        lineEdit_research->setObjectName(QString::fromUtf8("lineEdit_research"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_research->sizePolicy().hasHeightForWidth());
        lineEdit_research->setSizePolicy(sizePolicy1);
        lineEdit_research->setMinimumSize(QSize(561, 38));

        gridLayout_7->addWidget(lineEdit_research, 1, 0, 1, 1);

        comboBox_research = new QComboBox(tab_Research);
        comboBox_research->setObjectName(QString::fromUtf8("comboBox_research"));
        comboBox_research->setMinimumSize(QSize(171, 35));

        gridLayout_7->addWidget(comboBox_research, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_7);


        verticalLayout_3->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(3, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        tabWidget->addTab(tab_Research, QString());
        tab_Patients = new QWidget();
        tab_Patients->setObjectName(QString::fromUtf8("tab_Patients"));
        gridLayout_6 = new QGridLayout(tab_Patients);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        tableView_patients = new QTableView(tab_Patients);
        tableView_patients->setObjectName(QString::fromUtf8("tableView_patients"));

        verticalLayout_6->addWidget(tableView_patients);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_6 = new QLabel(tab_Patients);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_5->addWidget(label_6);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(tab_Patients);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(tab_Patients);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);

        lineEdit_patients = new QLineEdit(tab_Patients);
        lineEdit_patients->setObjectName(QString::fromUtf8("lineEdit_patients"));
        sizePolicy1.setHeightForWidth(lineEdit_patients->sizePolicy().hasHeightForWidth());
        lineEdit_patients->setSizePolicy(sizePolicy1);
        lineEdit_patients->setMinimumSize(QSize(561, 38));

        gridLayout_2->addWidget(lineEdit_patients, 1, 0, 1, 1);

        comboBox_patients = new QComboBox(tab_Patients);
        comboBox_patients->setObjectName(QString::fromUtf8("comboBox_patients"));
        comboBox_patients->setMinimumSize(QSize(171, 35));

        gridLayout_2->addWidget(comboBox_patients, 1, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_2);


        verticalLayout_6->addLayout(verticalLayout_5);


        gridLayout_6->addLayout(verticalLayout_6, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(3, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_12 = new QLabel(tab_Patients);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        line_5 = new QFrame(tab_Patients);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_5);

        verticalSpacer_20 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_20);

        pbn_AddPatients = new QPushButton(tab_Patients);
        pbn_AddPatients->setObjectName(QString::fromUtf8("pbn_AddPatients"));
        sizePolicy.setHeightForWidth(pbn_AddPatients->sizePolicy().hasHeightForWidth());
        pbn_AddPatients->setSizePolicy(sizePolicy);
        pbn_AddPatients->setMinimumSize(QSize(161, 51));
        pbn_AddPatients->setLayoutDirection(Qt::RightToLeft);
        pbn_AddPatients->setIcon(icon1);

        verticalLayout_4->addWidget(pbn_AddPatients);

        verticalSpacer_7 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_7);

        pbn_RemoveRowPatients = new QPushButton(tab_Patients);
        pbn_RemoveRowPatients->setObjectName(QString::fromUtf8("pbn_RemoveRowPatients"));
        pbn_RemoveRowPatients->setMinimumSize(QSize(161, 51));
        pbn_RemoveRowPatients->setLayoutDirection(Qt::RightToLeft);
        pbn_RemoveRowPatients->setIcon(icon2);

        verticalLayout_4->addWidget(pbn_RemoveRowPatients);

        verticalSpacer_8 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_8);

        label_13 = new QLabel(tab_Patients);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_4->addWidget(label_13);

        line_2 = new QFrame(tab_Patients);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        verticalSpacer_17 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_17);

        pbn_SortAscendingPatients = new QPushButton(tab_Patients);
        pbn_SortAscendingPatients->setObjectName(QString::fromUtf8("pbn_SortAscendingPatients"));
        pbn_SortAscendingPatients->setMinimumSize(QSize(161, 51));
        pbn_SortAscendingPatients->setLayoutDirection(Qt::RightToLeft);
        pbn_SortAscendingPatients->setIcon(icon3);
        pbn_SortAscendingPatients->setIconSize(QSize(20, 30));
        pbn_SortAscendingPatients->setAutoRepeatDelay(300);

        verticalLayout_4->addWidget(pbn_SortAscendingPatients);

        verticalSpacer_9 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_9);

        pbn_SortDescendingPatients = new QPushButton(tab_Patients);
        pbn_SortDescendingPatients->setObjectName(QString::fromUtf8("pbn_SortDescendingPatients"));
        pbn_SortDescendingPatients->setMinimumSize(QSize(161, 51));
        pbn_SortDescendingPatients->setLayoutDirection(Qt::RightToLeft);
        pbn_SortDescendingPatients->setIcon(icon4);
        pbn_SortDescendingPatients->setIconSize(QSize(20, 30));

        verticalLayout_4->addWidget(pbn_SortDescendingPatients);

        verticalSpacer_10 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_10);

        pbn_DisableSortPatients = new QPushButton(tab_Patients);
        pbn_DisableSortPatients->setObjectName(QString::fromUtf8("pbn_DisableSortPatients"));
        pbn_DisableSortPatients->setMinimumSize(QSize(161, 51));
        pbn_DisableSortPatients->setLayoutDirection(Qt::RightToLeft);
        pbn_DisableSortPatients->setIcon(icon5);
        pbn_DisableSortPatients->setIconSize(QSize(30, 30));

        verticalLayout_4->addWidget(pbn_DisableSortPatients);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer_6);


        gridLayout_6->addLayout(verticalLayout_4, 0, 2, 1, 1);

        tabWidget->addTab(tab_Patients, QString());
        tab_Doctors = new QWidget();
        tab_Doctors->setObjectName(QString::fromUtf8("tab_Doctors"));
        gridLayout_5 = new QGridLayout(tab_Doctors);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        tableView_doctors = new QTableView(tab_Doctors);
        tableView_doctors->setObjectName(QString::fromUtf8("tableView_doctors"));

        verticalLayout_9->addWidget(tableView_doctors);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_7 = new QLabel(tab_Doctors);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_8->addWidget(label_7);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_8 = new QLabel(tab_Doctors);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        label_9 = new QLabel(tab_Doctors);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 0, 1, 1, 1);

        lineEdit_doctors = new QLineEdit(tab_Doctors);
        lineEdit_doctors->setObjectName(QString::fromUtf8("lineEdit_doctors"));
        lineEdit_doctors->setMinimumSize(QSize(561, 38));

        gridLayout_3->addWidget(lineEdit_doctors, 1, 0, 1, 1);

        comboBox_doctors = new QComboBox(tab_Doctors);
        comboBox_doctors->setObjectName(QString::fromUtf8("comboBox_doctors"));
        comboBox_doctors->setMinimumSize(QSize(171, 35));

        gridLayout_3->addWidget(comboBox_doctors, 1, 1, 1, 1);


        verticalLayout_8->addLayout(gridLayout_3);


        verticalLayout_9->addLayout(verticalLayout_8);


        gridLayout_5->addLayout(verticalLayout_9, 0, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_11 = new QLabel(tab_Doctors);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_7->addWidget(label_11);

        line_4 = new QFrame(tab_Doctors);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_4);

        verticalSpacer_19 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_7->addItem(verticalSpacer_19);

        pbn_AddDoctors = new QPushButton(tab_Doctors);
        pbn_AddDoctors->setObjectName(QString::fromUtf8("pbn_AddDoctors"));
        sizePolicy.setHeightForWidth(pbn_AddDoctors->sizePolicy().hasHeightForWidth());
        pbn_AddDoctors->setSizePolicy(sizePolicy);
        pbn_AddDoctors->setMinimumSize(QSize(161, 51));
        pbn_AddDoctors->setLayoutDirection(Qt::RightToLeft);
        pbn_AddDoctors->setIcon(icon1);

        verticalLayout_7->addWidget(pbn_AddDoctors);

        verticalSpacer_12 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_7->addItem(verticalSpacer_12);

        pbn_RemoveRowDoctors = new QPushButton(tab_Doctors);
        pbn_RemoveRowDoctors->setObjectName(QString::fromUtf8("pbn_RemoveRowDoctors"));
        sizePolicy.setHeightForWidth(pbn_RemoveRowDoctors->sizePolicy().hasHeightForWidth());
        pbn_RemoveRowDoctors->setSizePolicy(sizePolicy);
        pbn_RemoveRowDoctors->setMinimumSize(QSize(161, 51));
        pbn_RemoveRowDoctors->setLayoutDirection(Qt::RightToLeft);
        pbn_RemoveRowDoctors->setIcon(icon2);
        pbn_RemoveRowDoctors->setIconSize(QSize(16, 16));

        verticalLayout_7->addWidget(pbn_RemoveRowDoctors);

        verticalSpacer_13 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_7->addItem(verticalSpacer_13);

        label_10 = new QLabel(tab_Doctors);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_7->addWidget(label_10);

        line_3 = new QFrame(tab_Doctors);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_3);

        verticalSpacer_18 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_7->addItem(verticalSpacer_18);

        pbn_SortAscendingDoctors = new QPushButton(tab_Doctors);
        pbn_SortAscendingDoctors->setObjectName(QString::fromUtf8("pbn_SortAscendingDoctors"));
        pbn_SortAscendingDoctors->setMinimumSize(QSize(161, 51));
        pbn_SortAscendingDoctors->setLayoutDirection(Qt::RightToLeft);
        pbn_SortAscendingDoctors->setIcon(icon3);
        pbn_SortAscendingDoctors->setIconSize(QSize(20, 30));

        verticalLayout_7->addWidget(pbn_SortAscendingDoctors);

        verticalSpacer_14 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_7->addItem(verticalSpacer_14);

        pbn_SortDescendingDoctors = new QPushButton(tab_Doctors);
        pbn_SortDescendingDoctors->setObjectName(QString::fromUtf8("pbn_SortDescendingDoctors"));
        pbn_SortDescendingDoctors->setMinimumSize(QSize(161, 51));
        pbn_SortDescendingDoctors->setLayoutDirection(Qt::RightToLeft);
        pbn_SortDescendingDoctors->setIcon(icon4);
        pbn_SortDescendingDoctors->setIconSize(QSize(20, 30));

        verticalLayout_7->addWidget(pbn_SortDescendingDoctors);

        verticalSpacer_15 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_7->addItem(verticalSpacer_15);

        pbn_DisableSortDoctors = new QPushButton(tab_Doctors);
        pbn_DisableSortDoctors->setObjectName(QString::fromUtf8("pbn_DisableSortDoctors"));
        pbn_DisableSortDoctors->setMinimumSize(QSize(161, 51));
        pbn_DisableSortDoctors->setLayoutDirection(Qt::RightToLeft);
        pbn_DisableSortDoctors->setIcon(icon5);
        pbn_DisableSortDoctors->setIconSize(QSize(30, 30));

        verticalLayout_7->addWidget(pbn_DisableSortDoctors);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_7->addItem(verticalSpacer_11);


        gridLayout_5->addLayout(verticalLayout_7, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(3, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        tabWidget->addTab(tab_Doctors, QString());

        gridLayout_4->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1002, 42));
        menubar->setStyleSheet(QString::fromUtf8("QMenuBar {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #ffffff, stop: 1 #f8f9fa);\n"
"    border-bottom: 1px solid #dee2e6;\n"
"    color: #095057;\n"
"    font-size: 13px;\n"
"    font-weight: 500;\n"
"    padding: 4px 12px;\n"
"    spacing: 0px;\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    padding: 8px 16px;\n"
"    margin: 0 2px;\n"
"    border-radius: 6px;\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #cce7ff, stop: 1 #b3d7ff);\n"
"    color: #108085;          \n"
"    border: 1px solid #80bdff;\n"
"}\n"
"\n"
"QMenuBar::item:pressed {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #007bff, stop: 1 #0056b3);\n"
"    color: white;           \n"
"}"));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setMinimumSize(QSize(0, 25));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(menu_connect_db);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        menu_connect_db->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217 \320\272 \320\221\320\224", nullptr));
        menu_exit_connect_db->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217 \320\276\321\202 \320\221\320\224", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\321\201\320\273\320\265\320\264\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        pbn_AddResearchs->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214   ", nullptr));
        pbn_RemoveRowResearch->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214    ", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        pbn_SortAscendingResearch->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214         ", nullptr));
        pbn_SortDescendingResearch->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214         ", nullptr));
        pbn_DisableSortResearch->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214          ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\273\321\216\321\207\320\265\320\262\320\276\320\265 \321\201\320\273\320\276\320\262\320\276", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\270\321\202\320\265\321\200\320\270\320\271 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Research), QCoreApplication::translate("MainWindow", "\320\230\321\201\321\201\320\273\320\265\320\264\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\232\320\273\321\216\321\207\320\265\320\262\320\276\320\265 \321\201\320\273\320\276\320\262\320\276", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\270\321\202\320\265\321\200\320\270\320\271 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\206\320\270\320\265\320\275\321\202", nullptr));
        pbn_AddPatients->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214   ", nullptr));
        pbn_RemoveRowPatients->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214    ", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        pbn_SortAscendingPatients->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214         ", nullptr));
        pbn_SortDescendingPatients->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214         ", nullptr));
        pbn_DisableSortPatients->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214          ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Patients), QCoreApplication::translate("MainWindow", "\320\237\320\260\321\206\320\270\320\265\320\275\321\202\321\213", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\232\320\273\321\216\321\207\320\265\320\262\320\276\320\265 \321\201\320\273\320\276\320\262\320\276", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\270\321\202\320\265\321\200\320\270\320\271 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\272\321\202\320\276\321\200", nullptr));
        pbn_AddDoctors->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214   ", nullptr));
        pbn_RemoveRowDoctors->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214    ", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        pbn_SortAscendingDoctors->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214         ", nullptr));
        pbn_SortDescendingDoctors->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214         ", nullptr));
        pbn_DisableSortDoctors->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214          ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Doctors), QCoreApplication::translate("MainWindow", "\320\224\320\276\320\272\321\202\320\276\321\200\320\260", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
