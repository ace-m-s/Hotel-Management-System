#include "hotelproject.h"
#include "ui_hotelproject.h"
madebyAce::madebyAce(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::madebyAce)
{
    ui->setupUi(this);
}

madebyAce::~madebyAce()
{
    delete ui;
}


void madebyAce::on_calen_selectionChanged()
{
    QString date = ui->calen->selectedDate().toString();
    getDataFTable();
}


void madebyAce::getDataFTable(){
    QSqlDatabase db;
    QSqlQueryModel * modal = new QSqlQueryModel();
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.sqlite");
    db.open();
    QString query = "SELECT * FROM visitors WHERE date ='"+ui->calen->selectedDate().toString()+"'";
    QSqlQuery qry;
    if(!qry.prepare(query))
        qDebug() << "Failed to take";
    if(qry.exec()){
        unsigned int* count = new unsigned int();
        count = 0;
        while(qry.next())
            count++;
    }
    modal->setQuery(qry);
    ui->tableView->setModel(modal);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->resizeRowsToContents();
    QHeaderView *verticalHeader = ui->tableView->horizontalHeader();
    verticalHeader->setSectionResizeMode(QHeaderView::Stretch);
    db.close();
}

void madebyAce::on_pushButton_pressed()
{
    getDataFTable();
}

void madebyAce::on_pushButton_2_pressed()
{
    addDataForm* d = new addDataForm();
    d->date = ui->calen->selectedDate().toString();
    d->setFixedSize(840,521);
    d->show();
    getDataFTable();
}

void madebyAce::on_pushButton_3_pressed()
{
    QMainWindow* window = new QMainWindow(centralWidget());
}
