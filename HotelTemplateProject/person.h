#ifndef PERSON_H
#define PERSON_H
#include<QString>
#include <QtSql>
#include<QSqlDatabase>
class Person
{
private:
    QString name;
    QString fatherName;
    QString nic;
    int roomNo;
public:
    Person() {this->name = "", this->nic = "", this->fatherName = "", this->roomNo = 0;};
    void setData(QString, QString, QString, int);
    void addToDB(QString);
};

#endif // PERSON_H
