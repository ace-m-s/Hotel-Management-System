#include "adddataform.h"
#include "ui_adddataform.h"

addDataForm::addDataForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addDataForm)
{
    ui->setupUi(this);
}



addDataForm::~addDataForm()
{
    delete ui;
}

void addDataForm::on_pushButton_2_pressed()  // Add new data to the database, creates the dabatabse if none
{
    Person* person = new Person();
    int roomNo{0};
    QString name;
    QString fatherName;
    QString nic;
    roomNo = ui->roomNo->toPlainText().toInt();
    name = ui->name->toPlainText();
    fatherName = ui->fatherName->toPlainText();
    nic = ui->nic->toPlainText();
    if(roomNo < 0 || name == "" || fatherName == "" || nic == ""){
        ui->errorLabel->setText("Wrong data entered");
        delete person;
    }
    else {
    person->setData(name,fatherName,nic,roomNo);
    person->addToDB(this->date);
    delete person;
    delete this;
    }

}

void addDataForm::on_pushButton_pressed()
{
    delete this;
}

void addDataForm::checkDataStatus(Person person){

    person.addToDB("d");
}
