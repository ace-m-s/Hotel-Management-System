#include "person.h"
#include<QDebug>
#include <QtSql/QSqlDatabase>
void Person::setData(QString name, QString fName, QString nic, int room) {
    this->name = name;
    this->fatherName = fName;
    this->nic = nic;
    this->roomNo = room;
}

void Person::addToDB(QString date) {
    qDebug() << "Start";
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.sqlite");

    QString query = "CREATE TABLE visitors ("
                        "roomNo INTEGER,"
                        "name TEXT,"
                        "fatherName TEXT,"
                        "nic TEXT,"
                        "date TEXT);";
    try {
        db.open();
    } catch (...) {
    }


    db.exec(query);
    QSqlQuery qry(db);
    QSqlQuery testQuery;
    if(!testQuery.prepare(QString("INSERT INTO visitors(roomNo,name,fatherName,nic,date) VALUES(:roomNo,:name,:fatherName,:nic,:date)")))
        qDebug() << testQuery.lastError();
    testQuery.bindValue(":roomNo", this->roomNo);
    testQuery.bindValue(":name", this->name);
    testQuery.bindValue(":fatherName", this->fatherName);
    testQuery.bindValue(":nic", this->nic);
    testQuery.bindValue(":date", date);
    testQuery.exec();
    testQuery.finish();

    db.commit();
    db.close();
    qDebug() << "End";
}
