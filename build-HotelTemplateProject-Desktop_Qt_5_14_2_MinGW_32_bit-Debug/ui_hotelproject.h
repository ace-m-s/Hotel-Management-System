/********************************************************************************
** Form generated from reading UI file 'hotelproject.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTELPROJECT_H
#define UI_HOTELPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_madebyAce
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QCalendarWidget *calen;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *madebyAce)
    {
        if (madebyAce->objectName().isEmpty())
            madebyAce->setObjectName(QString::fromUtf8("madebyAce"));
        madebyAce->resize(939, 586);
        madebyAce->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color:rgb(82, 82, 82);\n"
"}\n"
"QTextEdit {\n"
"	background-color:rgb(42, 42, 42);\n"
"	color: rgb(0, 255, 0);\n"
"}\n"
"QPushButton{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"}\n"
"QPushButton:hover{\n"
"	border-style: outset;\n"
"	border-width:"
                        " 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-bottom-color: rgb(115, 115, 115);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(107, 107, 107, 255), stop:1 rgba(157, 157, 157, 255));\n"
"}\n"
"QPushButton:pressed{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(62, 62, 62, 255), stop:1 rgba(22, 22, 22, 255));\n"
"	border-right-color: qlineargradient"
                        "(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"}\n"
"QPushButton:disabled{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(11"
                        "5, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(0, 0, 0);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 57, 57, 255), stop:1 rgba(77, 77, 77, 255));\n"
"}\n"
"QLineEdit {\n"
"	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: rgb(255, 255, 255);\n"
"	background:rgb(100, 100, 100);\n"
"	selection-background-color: rgb(187, 187, 187);\n"
"	selection-color: rgb(60, 63, 65);\n"
"}\n"
"QLabel {\n"
"	color:rgb(255,255,255);	\n"
"}\n"
"QProgressBar {\n"
"	text-align: center;\n"
"	color: rgb(240, 240, 240);\n"
"	border-width: 1px; \n"
"	border-radius: 10px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	background-color:rgb(77,77,77);\n"
"}\n"
"QProgressBar::chunk {\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:0.7, x"
                        "2:0.5, y2:0.3, stop:0 rgba(87, 97, 106, 255), stop:1 rgba(93, 103, 113, 255));\n"
"	border-radius: 5px;\n"
"}\n"
"QMenuBar {\n"
"	background:rgb(82, 82, 82);\n"
"}\n"
"QMenuBar::item {\n"
"	color:rgb(223,219,210);\n"
"	spacing: 3px;\n"
"	padding: 1px 4px;\n"
"	background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"	background:rgb(115, 115, 115);\n"
"}\n"
"QMenu::item:selected {\n"
"	color:rgb(255,255,255);\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	padding-left:18px;\n"
"	padding-right:8px;\n"
"	padding-top:2px;\n"
"	padding-bottom:3px;\n"
"	background:qlineargradient(spread:pad, x1:0.5, y1:0.7, x2:0.5, y2:0.3, stop:0 rgba(87, 97, 106, 255), stop:1 rgba(93, 103, 113, 255));\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-colo"
                        "r: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"}\n"
"QMenu::item {\n"
"	color:rgb(223,219,210);\n"
"	background-color:rgb(78,78,78);\n"
"	padding-left:20px;\n"
"	padding-top:4px;\n"
"	padding-bottom:4px;\n"
"	padding-right:10px;\n"
"}\n"
"QMenu{\n"
"	background-color:rgb(78,78,78);\n"
"}\n"
"QTabWidget {\n"
"	color:rgb(0,0,0);\n"
"	background-color:rgb(247,246,246);\n"
"}\n"
"QTabWidget::pane {\n"
"		border-color: rgb(77,77,77);\n"
"		background-color:rgb(101,101,101);\n"
"		border-style: solid;\n"
"		border-width: 1px;\n"
"    	border-radius: 6px;\n"
"}\n"
"QTabBar::tab {\n"
"	padding:2px;\n"
"	color:rgb(250,250,250);\n"
"  	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"  	border-top-right-radius:4px;\n"
"   borde"
                        "r-top-left-radius:4px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(95, 92, 93, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(95, 92, 93, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(95, 92, 93, 255));\n"
"	border-bottom-color: rgb(101,101,101);\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:last:selected, QTabBar::tab:hover {\n"
"  	background-color:rgb(101,101,101);\n"
"  	margin-left: 0px;\n"
"  	margin-right: 1px;\n"
"}\n"
"QTabBar::tab:!selected {\n"
"    	margin-top: 1px;\n"
"		margin-right: 1px;\n"
"}\n"
"QCheckBox {\n"
"	color:rgb(223,219,210);\n"
"	padding: 2px;\n"
"}\n"
"QCheckBox:hover {\n"
"	border-radius:4px;\n"
"	border-style:solid;\n"
"	padding-left: 1px;\n"
"	padding-right: 1px;\n"
"	padding-bottom: 1px;\n"
"	padding-top: 1px;\n"
"	bor"
                        "der-width:1px;\n"
"	border-color: rgb(87, 97, 106);\n"
"	background-color:qlineargradient(spread:pad, x1:0.5, y1:0.7, x2:0.5, y2:0.3, stop:0 rgba(87, 97, 106, 150), stop:1 rgba(93, 103, 113, 150));\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"	border-radius:4px;\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(180,180,180);\n"
"  	background-color:qlineargradient(spread:pad, x1:0.5, y1:0.7, x2:0.5, y2:0.3, stop:0 rgba(87, 97, 106, 255), stop:1 rgba(93, 103, 113, 255));\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"	border-radius:4px;\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(87, 97, 106);\n"
"  	background-color:rgb(255,255,255);\n"
"}\n"
"QStatusBar {\n"
"	color:rgb(240,240,240);\n"
"}"));
        centralwidget = new QWidget(madebyAce);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        calen = new QCalendarWidget(centralwidget);
        calen->setObjectName(QString::fromUtf8("calen"));
        calen->setMaximumSize(QSize(16777215, 300));
        QFont font;
        font.setFamily(QString::fromUtf8("Nirmala UI"));
        font.setPointSize(11);
        calen->setFont(font);
        calen->setContextMenuPolicy(Qt::DefaultContextMenu);
        calen->setAutoFillBackground(true);
        calen->setStyleSheet(QString::fromUtf8(""));
        calen->setGridVisible(true);
        calen->setHorizontalHeaderFormat(QCalendarWidget::LongDayNames);
        calen->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calen->setNavigationBarVisible(true);

        gridLayout->addWidget(calen, 1, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Nirmala UI"));
        font1.setPointSize(17);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Plain);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("  background-color: #4CAF50;\n"
"border-radius: 4px;\n"
"  border: none;\n"
"  color: white;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  font-size: 16px;\n"
"  margin: 4px 2px\n"
""));

        verticalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setMouseTracking(false);
        pushButton_2->setStyleSheet(QString::fromUtf8("  background-color: #4CAF50;\n"
"border-radius: 4px;\n"
"  border: none;\n"
"  color: white;\n"
"  padding: 10px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  font-size: 16px;\n"
"  margin: 4px 2px\n"
""));
        pushButton_2->setCheckable(false);
        pushButton_2->setChecked(false);
        pushButton_2->setAutoDefault(true);

        verticalLayout_3->addWidget(pushButton_2);


        gridLayout_2->addLayout(verticalLayout_3, 0, 2, 1, 1);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy1);
        tableView->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Nirmala UI"));
        font2.setPointSize(16);
        tableView->setFont(font2);
        tableView->setLayoutDirection(Qt::LeftToRight);
        tableView->setAutoFillBackground(true);
        tableView->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"\n"
""));
        tableView->setLineWidth(1);
        tableView->setTextElideMode(Qt::ElideMiddle);
        tableView->setShowGrid(true);
        tableView->setGridStyle(Qt::DashLine);
        tableView->setWordWrap(false);

        gridLayout_2->addWidget(tableView, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        madebyAce->setCentralWidget(centralwidget);
        menubar = new QMenuBar(madebyAce);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 939, 17));
        madebyAce->setMenuBar(menubar);
        statusbar = new QStatusBar(madebyAce);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        madebyAce->setStatusBar(statusbar);

        retranslateUi(madebyAce);

        QMetaObject::connectSlotsByName(madebyAce);
    } // setupUi

    void retranslateUi(QMainWindow *madebyAce)
    {
        madebyAce->setWindowTitle(QCoreApplication::translate("madebyAce", "HotelProject", nullptr));
        label->setText(QCoreApplication::translate("madebyAce", "Hotel National", nullptr));
        pushButton->setText(QCoreApplication::translate("madebyAce", "Refresh", nullptr));
        pushButton_2->setText(QCoreApplication::translate("madebyAce", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class madebyAce: public Ui_madebyAce {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTELPROJECT_H
