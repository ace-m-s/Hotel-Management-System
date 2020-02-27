#ifndef ADDDATAFORM_H
#define ADDDATAFORM_H
#include "person.h"
#include <QWidget>

namespace Ui {
class addDataForm;
}

class addDataForm : public QWidget
{
    Q_OBJECT

public:
    explicit addDataForm(QWidget *parent = nullptr);
    ~addDataForm();
     QString date;
private slots:
    void on_pushButton_2_pressed();
    void on_pushButton_pressed();
    void checkDataStatus(Person person);
private:
    Ui::addDataForm *ui;
};

#endif // ADDDATAFORM_H
