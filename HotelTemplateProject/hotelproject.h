#ifndef HOTELPROJECT_H
#define HOTELPROJECT_H

#include <QMainWindow>
#include "adddataform.h"
QT_BEGIN_NAMESPACE
namespace Ui { class madebyAce; }
QT_END_NAMESPACE

class madebyAce : public QMainWindow
{
    Q_OBJECT

public:
    madebyAce(QWidget *parent = nullptr);
    ~madebyAce();
    void getDataFTable();
private:
    Ui::madebyAce *ui;
private slots:
    void on_calen_selectionChanged();
    void on_pushButton_2_pressed();
    void on_pushButton_pressed();
    void on_pushButton_2_clicked();
};
#endif // HOTELPROJECT_H
