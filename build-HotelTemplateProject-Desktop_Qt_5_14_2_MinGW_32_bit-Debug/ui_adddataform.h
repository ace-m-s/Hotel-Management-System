/********************************************************************************
** Form generated from reading UI file 'adddataform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDATAFORM_H
#define UI_ADDDATAFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addDataForm
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *label_2;
    QTextEdit *roomNo;
    QLabel *label_3;
    QTextEdit *name;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *errorLabel;
    QTextEdit *nic;
    QTextEdit *fatherName;
    QPushButton *pushButton_2;

    void setupUi(QWidget *addDataForm)
    {
        if (addDataForm->objectName().isEmpty())
            addDataForm->setObjectName(QString::fromUtf8("addDataForm"));
        addDataForm->resize(830, 521);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addDataForm->sizePolicy().hasHeightForWidth());
        addDataForm->setSizePolicy(sizePolicy);
        addDataForm->setMaximumSize(QSize(830, 521));
        addDataForm->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color:rgb(82, 82, 82);\n"
"}\n"
"QTextEdit {\n"
"	background-color:rgb(42, 42, 42);\n"
"	border-radius: 5px;\n"
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
"	border-style: outse"
                        "t;\n"
"	border-width: 2px;\n"
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
"	border-right-c"
                        "olor: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
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
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y"
                        "2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
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
"	background-color: qlineargradient(spread:p"
                        "ad, x1:0.5, y1:0.7, x2:0.5, y2:0.3, stop:0 rgba(87, 97, 106, 255), stop:1 rgba(93, 103, 113, 255));\n"
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
""
                        "	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
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
"  	border-top-right-radius:"
                        "4px;\n"
"   border-top-left-radius:4px;\n"
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
"	padding-t"
                        "op: 1px;\n"
"	border-width:1px;\n"
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
"}\n"
"\302\251 2020 GitHub, Inc."));
        gridLayout = new QGridLayout(addDataForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(addDataForm);
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

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        label = new QLabel(addDataForm);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2 = new QLabel(addDataForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        roomNo = new QTextEdit(addDataForm);
        roomNo->setObjectName(QString::fromUtf8("roomNo"));
        roomNo->setMaximumSize(QSize(16777215, 50));

        formLayout->setWidget(0, QFormLayout::FieldRole, roomNo);

        label_3 = new QLabel(addDataForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        name = new QTextEdit(addDataForm);
        name->setObjectName(QString::fromUtf8("name"));
        name->setMaximumSize(QSize(16777215, 50));

        formLayout->setWidget(1, QFormLayout::FieldRole, name);

        label_4 = new QLabel(addDataForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(addDataForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        errorLabel = new QLabel(addDataForm);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        errorLabel->setFont(font);
        errorLabel->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(4, QFormLayout::LabelRole, errorLabel);

        nic = new QTextEdit(addDataForm);
        nic->setObjectName(QString::fromUtf8("nic"));
        nic->setMaximumSize(QSize(16777215, 50));

        formLayout->setWidget(3, QFormLayout::FieldRole, nic);

        fatherName = new QTextEdit(addDataForm);
        fatherName->setObjectName(QString::fromUtf8("fatherName"));
        fatherName->setMaximumSize(QSize(16777215, 50));

        formLayout->setWidget(2, QFormLayout::FieldRole, fatherName);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(addDataForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
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

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);


        retranslateUi(addDataForm);

        QMetaObject::connectSlotsByName(addDataForm);
    } // setupUi

    void retranslateUi(QWidget *addDataForm)
    {
        addDataForm->setWindowTitle(QCoreApplication::translate("addDataForm", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("addDataForm", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("addDataForm", "Add Data", nullptr));
        label_2->setText(QCoreApplication::translate("addDataForm", "Room No", nullptr));
        label_3->setText(QCoreApplication::translate("addDataForm", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("addDataForm", "FatherName", nullptr));
        label_5->setText(QCoreApplication::translate("addDataForm", "CNIC", nullptr));
        errorLabel->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("addDataForm", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addDataForm: public Ui_addDataForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDATAFORM_H
