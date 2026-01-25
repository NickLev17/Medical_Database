#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QSqlDatabase>
#include <QTableView>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QSqlRelation>
#include <QVariant>
#include <QComboBox>
#include <QLabel>
#include <QHBoxLayout>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    const QString driverName="QSQLITE";
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void showDoctors();
    void showPatients();
    void showResearchs();
    QList<QString> requestNameColumn(QSqlTableModel *model);
    void foundDataInTable(const QSqlTableModel *model, const QString& nameColumn, const QVariant& data, QTableView *view) const;
    void widgetInitialisation(bool state);

private slots:

    void initial_tableModelAndView();
    bool messageDialogBox(const QString& table) const;
    void removeRowInTable(QSqlTableModel *model,const QTableView *view);
    void addPatient();
    void addResearch();
    void addDoctor();
    bool checkDriver() const;
    void connectionDatabase(bool connect);
    void disconnectDatabase();
    void handleFound();
    void setSotrColumn(QSqlTableModel *model,Qt::SortOrder order, QComboBox *combobox);
    void disableSortColumn(QSqlTableModel *model);

private:

    Ui::MainWindow *ui;

    QSqlDatabase m_db;
    QSqlRelationalTableModel *m_model_research;
    QSqlTableModel *m_model_patients;
    QSqlTableModel *m_model_doctors;

    QTableView *m_view_research;
    QTableView *m_view_patients;
    QTableView *m_view_doctors;

    QWidget *cardioWindow;
    QHBoxLayout *layout;
    QLabel *label;

};


#endif // MAINWINDOW_H
