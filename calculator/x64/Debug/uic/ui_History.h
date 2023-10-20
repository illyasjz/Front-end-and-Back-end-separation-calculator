/********************************************************************************
** Form generated from reading UI file 'History.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY_H
#define UI_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoryClass
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;

    void setupUi(QWidget *HistoryClass)
    {
        if (HistoryClass->objectName().isEmpty())
            HistoryClass->setObjectName(QString::fromUtf8("HistoryClass"));
        HistoryClass->resize(200, 400);
        HistoryClass->setMinimumSize(QSize(200, 400));
        HistoryClass->setMaximumSize(QSize(200, 400));
        HistoryClass->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
" border:none;\n"
" background-color:rgb(238, 236, 236);\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
" background-color:rgb(252, 252, 252);\n"
"}"));
        verticalLayout = new QVBoxLayout(HistoryClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_1 = new QLineEdit(HistoryClass);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));

        verticalLayout->addWidget(lineEdit_1);

        lineEdit_2 = new QLineEdit(HistoryClass);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(HistoryClass);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(HistoryClass);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(HistoryClass);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(HistoryClass);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        verticalLayout->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(HistoryClass);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        verticalLayout->addWidget(lineEdit_7);

        lineEdit_8 = new QLineEdit(HistoryClass);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        verticalLayout->addWidget(lineEdit_8);

        lineEdit_9 = new QLineEdit(HistoryClass);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        verticalLayout->addWidget(lineEdit_9);

        lineEdit_10 = new QLineEdit(HistoryClass);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));

        verticalLayout->addWidget(lineEdit_10);


        retranslateUi(HistoryClass);

        QMetaObject::connectSlotsByName(HistoryClass);
    } // setupUi

    void retranslateUi(QWidget *HistoryClass)
    {
        HistoryClass->setWindowTitle(QCoreApplication::translate("HistoryClass", "History", nullptr));
        lineEdit_1->setText(QCoreApplication::translate("HistoryClass", "1. ", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("HistoryClass", "2. ", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("HistoryClass", "3. ", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("HistoryClass", "4. ", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("HistoryClass", "5. ", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("HistoryClass", "6. ", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("HistoryClass", "7. ", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("HistoryClass", "8. ", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("HistoryClass", "9. ", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("HistoryClass", "10. ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HistoryClass: public Ui_HistoryClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_H
