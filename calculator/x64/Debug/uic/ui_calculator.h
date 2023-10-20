/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculatorClass
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_exp;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout;
    QPushButton *btn_dot;
    QPushButton *btn_add;
    QPushButton *btn_5;
    QPushButton *btn_8;
    QPushButton *btn_multiply;
    QPushButton *btn_0;
    QPushButton *btn_4;
    QPushButton *btn_3;
    QPushButton *btn_C;
    QPushButton *btn_CE;
    QPushButton *btn_1;
    QPushButton *btn_9;
    QPushButton *btn_minus;
    QPushButton *btn_7;
    QPushButton *btn_equal;
    QPushButton *btn_2;
    QPushButton *btn_6;
    QPushButton *btn_delete;
    QPushButton *btn_neg;
    QPushButton *btn_divide;
    QPushButton *pushButton_history;
    QPushButton *pushButton_ANS;
    QPushButton *pushButton_fraction;
    QPushButton *pushButton_remainder;

    void setupUi(QWidget *calculatorClass)
    {
        if (calculatorClass->objectName().isEmpty())
            calculatorClass->setObjectName(QString::fromUtf8("calculatorClass"));
        calculatorClass->resize(300, 400);
        calculatorClass->setMinimumSize(QSize(300, 400));
        calculatorClass->setMaximumSize(QSize(400, 500));
        calculatorClass->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
" border:none;\n"
" background-color:rgb(238, 236, 236);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
" background-color:rgb(243, 243, 243);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
" border:1px solid rgb(193, 193, 193);\n"
" background-color:rgb(220, 220, 220);\n"
"}\n"
"\n"
"QPushButton#btn_0,#btn_1,#btn_2,#btn_3,#btn_4,#btn_5,#btn_6,#btn_7,#btn_8,#btn_9\n"
"{\n"
" font:bold 12pt'\345\276\256\350\275\257\351\233\205\351\273\221';\n"
" background-color:rgb(252, 252, 252);\n"
"}\n"
"\n"
"QPushButton#btn_0:hover,#btn_1:hover,#btn_2:hover,#btn_3:hover,#btn_4:hover,#btn_5:hover,#btn_6:hover,#btn_7:hover,#btn_8:hover,#btn_9:hover\n"
"{\n"
" border:1px solid rgb(193, 193, 193);\n"
" background-color:rgb(220, 220, 220);\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(calculatorClass);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 2, 0, 0);
        lineEdit_exp = new QLineEdit(calculatorClass);
        lineEdit_exp->setObjectName(QString::fromUtf8("lineEdit_exp"));
        lineEdit_exp->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setPointSize(15);
        lineEdit_exp->setFont(font);
        lineEdit_exp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_exp->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_exp);

        lineEdit = new QLineEdit(calculatorClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 60));
        QFont font1;
        font1.setPointSize(30);
        lineEdit->setFont(font1);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit->setReadOnly(true);

        verticalLayout->addWidget(lineEdit);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_dot = new QPushButton(calculatorClass);
        btn_dot->setObjectName(QString::fromUtf8("btn_dot"));
        btn_dot->setMinimumSize(QSize(80, 50));
        btn_dot->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_dot, 6, 2, 1, 1);

        btn_add = new QPushButton(calculatorClass);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setMinimumSize(QSize(80, 50));
        btn_add->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_add, 5, 3, 1, 1);

        btn_5 = new QPushButton(calculatorClass);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        btn_5->setMinimumSize(QSize(80, 50));
        btn_5->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_5, 4, 1, 1, 1);

        btn_8 = new QPushButton(calculatorClass);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        btn_8->setMinimumSize(QSize(80, 50));
        btn_8->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_8, 3, 1, 1, 1);

        btn_multiply = new QPushButton(calculatorClass);
        btn_multiply->setObjectName(QString::fromUtf8("btn_multiply"));
        btn_multiply->setMinimumSize(QSize(80, 50));
        btn_multiply->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_multiply, 3, 3, 1, 1);

        btn_0 = new QPushButton(calculatorClass);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        btn_0->setMinimumSize(QSize(80, 50));
        btn_0->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_0, 6, 1, 1, 1);

        btn_4 = new QPushButton(calculatorClass);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        btn_4->setMinimumSize(QSize(80, 50));
        btn_4->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_4, 4, 0, 1, 1);

        btn_3 = new QPushButton(calculatorClass);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        btn_3->setMinimumSize(QSize(80, 50));
        btn_3->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_3, 5, 2, 1, 1);

        btn_C = new QPushButton(calculatorClass);
        btn_C->setObjectName(QString::fromUtf8("btn_C"));
        btn_C->setMinimumSize(QSize(80, 50));
        btn_C->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_C, 2, 0, 1, 1);

        btn_CE = new QPushButton(calculatorClass);
        btn_CE->setObjectName(QString::fromUtf8("btn_CE"));
        btn_CE->setMinimumSize(QSize(80, 50));
        btn_CE->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_CE, 2, 1, 1, 1);

        btn_1 = new QPushButton(calculatorClass);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        btn_1->setMinimumSize(QSize(80, 50));
        btn_1->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_1, 5, 0, 1, 1);

        btn_9 = new QPushButton(calculatorClass);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        btn_9->setMinimumSize(QSize(80, 50));
        btn_9->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_9, 3, 2, 1, 1);

        btn_minus = new QPushButton(calculatorClass);
        btn_minus->setObjectName(QString::fromUtf8("btn_minus"));
        btn_minus->setMinimumSize(QSize(80, 50));
        btn_minus->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_minus, 4, 3, 1, 1);

        btn_7 = new QPushButton(calculatorClass);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        btn_7->setMinimumSize(QSize(80, 50));
        btn_7->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_7, 3, 0, 1, 1);

        btn_equal = new QPushButton(calculatorClass);
        btn_equal->setObjectName(QString::fromUtf8("btn_equal"));
        btn_equal->setMinimumSize(QSize(80, 50));
        btn_equal->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_equal, 6, 3, 1, 1);

        btn_2 = new QPushButton(calculatorClass);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        btn_2->setMinimumSize(QSize(80, 50));
        btn_2->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_2, 5, 1, 1, 1);

        btn_6 = new QPushButton(calculatorClass);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        btn_6->setMinimumSize(QSize(80, 50));
        btn_6->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_6, 4, 2, 1, 1);

        btn_delete = new QPushButton(calculatorClass);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));
        btn_delete->setMinimumSize(QSize(80, 50));
        btn_delete->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_delete, 2, 2, 1, 1);

        btn_neg = new QPushButton(calculatorClass);
        btn_neg->setObjectName(QString::fromUtf8("btn_neg"));
        btn_neg->setMinimumSize(QSize(80, 50));
        btn_neg->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_neg, 6, 0, 1, 1);

        btn_divide = new QPushButton(calculatorClass);
        btn_divide->setObjectName(QString::fromUtf8("btn_divide"));
        btn_divide->setMinimumSize(QSize(80, 50));
        btn_divide->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(btn_divide, 2, 3, 1, 1);

        pushButton_history = new QPushButton(calculatorClass);
        pushButton_history->setObjectName(QString::fromUtf8("pushButton_history"));
        pushButton_history->setMinimumSize(QSize(80, 50));
        pushButton_history->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(pushButton_history, 1, 0, 1, 1);

        pushButton_ANS = new QPushButton(calculatorClass);
        pushButton_ANS->setObjectName(QString::fromUtf8("pushButton_ANS"));
        pushButton_ANS->setMinimumSize(QSize(80, 50));
        pushButton_ANS->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(pushButton_ANS, 1, 1, 1, 1);

        pushButton_fraction = new QPushButton(calculatorClass);
        pushButton_fraction->setObjectName(QString::fromUtf8("pushButton_fraction"));
        pushButton_fraction->setMinimumSize(QSize(80, 50));
        pushButton_fraction->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(pushButton_fraction, 1, 2, 1, 1);

        pushButton_remainder = new QPushButton(calculatorClass);
        pushButton_remainder->setObjectName(QString::fromUtf8("pushButton_remainder"));
        pushButton_remainder->setMinimumSize(QSize(80, 50));
        pushButton_remainder->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(pushButton_remainder, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(calculatorClass);

        QMetaObject::connectSlotsByName(calculatorClass);
    } // setupUi

    void retranslateUi(QWidget *calculatorClass)
    {
        calculatorClass->setWindowTitle(QCoreApplication::translate("calculatorClass", "calculator", nullptr));
        lineEdit_exp->setText(QString());
        lineEdit->setText(QCoreApplication::translate("calculatorClass", "0", nullptr));
        btn_dot->setText(QCoreApplication::translate("calculatorClass", ".", nullptr));
        btn_add->setText(QCoreApplication::translate("calculatorClass", "+", nullptr));
        btn_5->setText(QCoreApplication::translate("calculatorClass", "5", nullptr));
        btn_8->setText(QCoreApplication::translate("calculatorClass", "8", nullptr));
        btn_multiply->setText(QCoreApplication::translate("calculatorClass", "*", nullptr));
        btn_0->setText(QCoreApplication::translate("calculatorClass", "0", nullptr));
        btn_4->setText(QCoreApplication::translate("calculatorClass", "4", nullptr));
        btn_3->setText(QCoreApplication::translate("calculatorClass", "3", nullptr));
        btn_C->setText(QCoreApplication::translate("calculatorClass", "C", nullptr));
        btn_CE->setText(QCoreApplication::translate("calculatorClass", "CE", nullptr));
        btn_1->setText(QCoreApplication::translate("calculatorClass", "1", nullptr));
        btn_9->setText(QCoreApplication::translate("calculatorClass", "9", nullptr));
        btn_minus->setText(QCoreApplication::translate("calculatorClass", "-", nullptr));
        btn_7->setText(QCoreApplication::translate("calculatorClass", "7", nullptr));
        btn_equal->setText(QCoreApplication::translate("calculatorClass", "=", nullptr));
        btn_2->setText(QCoreApplication::translate("calculatorClass", "2", nullptr));
        btn_6->setText(QCoreApplication::translate("calculatorClass", "6", nullptr));
        btn_delete->setText(QCoreApplication::translate("calculatorClass", "Del", nullptr));
        btn_neg->setText(QCoreApplication::translate("calculatorClass", "+/-", nullptr));
        btn_divide->setText(QCoreApplication::translate("calculatorClass", "/", nullptr));
        pushButton_history->setText(QCoreApplication::translate("calculatorClass", "History", nullptr));
        pushButton_ANS->setText(QCoreApplication::translate("calculatorClass", "ANS", nullptr));
        pushButton_fraction->setText(QCoreApplication::translate("calculatorClass", "l/x", nullptr));
        pushButton_remainder->setText(QCoreApplication::translate("calculatorClass", "%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculatorClass: public Ui_calculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
