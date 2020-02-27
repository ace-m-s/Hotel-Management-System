#include "hotelproject.h"
#include <QApplication>
#include <QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    madebyAce w;
    w.getDataFTable();
    w.show();
    return a.exec();
}
