#include "calculator.h"
#include "database.h"
#include <qbuttongroup.h>
#include <qdebug.h>
#include <qvector.h>
#include <iomanip>
#include <iostream>
#include <math.h>

calculator::calculator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::calculatorClass())
{
    ui->setupUi(this);
    iniUI();
    if (!createConnection()) qInfo() <<"fail"; //create connection to the database
    else qInfo() << "success";

    connect(ui->pushButton_history, SIGNAL(clicked()), this, SLOT(showHistory()));//connect the window of history the the pushBotton of history
}

calculator::~calculator()
{
    delete ui;
}

void calculator::iniUI()
{
    auto buttonGroup = new QButtonGroup(this);//to save buttons
    auto btnlist = findChildren<QPushButton*>();

    QSqlDatabase db2 = QSqlDatabase::database("connection1"); //connect the database
    QSqlQuery query2(db2);

    for (auto btn : btnlist)
    {
        buttonGroup->addButton(btn);
    }//find all buttons
    
    connect(buttonGroup, QOverload<QAbstractButton *>::of(&QButtonGroup::buttonClicked), this, &calculator::onButtonGroupClicked);
    vec.resize(5);
    query2.exec("delete from history");//initial the table history
}

void calculator::onButtonGroupClicked(QAbstractButton* btn)
{
    QString expression;
    bool equal = false; //if push the "=", equal is true
    qreal val = ui->lineEdit->text().toDouble();
    qInfo() << btn->text(); 
    QString name = btn->text();

    QSqlDatabase db2 = QSqlDatabase::database("connection1"); //connect the database
    QSqlQuery query2(db2);

    //if (query2.exec("create table history (x double, operator char, y double, result double")) qInfo() << "OK"; //create table
    //else qInfo() << "failed";

    if (name>="0" && name<="9" ||name ==".")
    {
        if (start&&vec[1].isNull()) //if user push the digit, cover the previous result, if push the operator, the previous result is regarded as x in the expression
        {
            lineEditClear();
            start = false;
        }
        if (name != "."&& ui->lineEdit->text()=="0")  ui->lineEdit->clear();
        

        if (prevBtn == "+"|| prevBtn == "-" || prevBtn == "*" || prevBtn == "/" || prevBtn == "%")
        {
            ui->lineEdit->clear();
        }
        if (name == "." && !isInteger(val));
        else ui->lineEdit->insert(name);
    }//for digit
    else if (name == "+")
    {
        if (vec[2].isNull())
        {
            vec[0] = val;
            vec[1] = "+";
        }
    }
    else if (name == "-")
    {
        if (vec[2].isNull())
        {
            vec[0] = val;
            vec[1] = "-";
        }
    }
    else if (name == "*")
    {
        if (vec[2].isNull())
        {
            vec[0] = val;
            vec[1] = "*";
        }
    }
    else if (name == "/")
    {
        if (vec[2].isNull())
        {
            vec[0] = val;
            vec[1] = "/";
        }
    }
    else if (name == "%")
    {
        if (vec[2].isNull())
        {
            vec[0] = val;
            vec[1] = "%";
        }
    }
    else if (name == "=")
    {
        start = true;
        equal = true;
        vec[2] = val;
        vec[3] = "=";
        expression = vec[0].toString() + vec[1].toString() + vec[2].toString() + "=";
        if (vec[1] == "+")
        {
            vec[4] = vec[0].toDouble() + vec[2].toDouble();
        }
        if (vec[1] == "-")
        {
            vec[4] = vec[0].toDouble() - vec[2].toDouble();
        }
        if (vec[1] == "*")
        {
            vec[4] = vec[0].toDouble() * vec[2].toDouble();
        }
        if (vec[1] == "/")
        {
            vec[4] = vec[0].toDouble() / vec[2].toDouble();
        }
        if (vec[1] == "%")
        {
            vec[4] = vec[0].toInt() % vec[2].toInt();
        }
        vec[4] = round(vec[4].toDouble()*100)/100;
        ui->lineEdit->setText(vec[4].toString());

        //insert the expression into the table
        query2.clear();
        query2.prepare("insert into history (x, operator, y, result) values (?, ?, ?, ?)");
        query2.addBindValue(vec[0]);
        query2.addBindValue(vec[1]);
        query2.addBindValue(vec[2]);
        query2.addBindValue(vec[4]);
        query2.exec();
        

        QVariant temp = vec[4];
        vec.clear();
        vec.resize(5);
        vec[0] = temp;
    }
    //clear
    else if (name=="C")
    {
        lineEditClear();
    }
    //clear error
    else if (name == "CE")
    {
        ui->lineEdit->clear();
        ui->lineEdit->insert("0");
    }
    //delete
    else if (name == "Del")
    {
        if (vec[1].isNull())
        {
            ui->lineEdit->setCursorPosition(ui->lineEdit->cursorPosition() - 1);
            ui->lineEdit->del();
        }
        else vec[1] = NULL;
    }
    //upside down
    else if (name == "+/-")
    {
        QString temp = ui->lineEdit->text();
        if (val >= 0) ui->lineEdit->setText("-" + temp);
        else  ui->lineEdit->setText(temp.mid(1, temp.length() - 1));
    }
    else if (name == "l/x")
    {
        QVariant val_ = 1 / val;
        ui->lineEdit->setText(val_.toString());
    }
    //else if (name == "History") {}
    //display the previous result in the LineEdit
    else if (name == "ANS")
    {
        QSqlQuery expressions = db2.exec(" select * from history");//all field in the history
        if (expressions.last())//the last field
        {
            //ui->lineEdit_exp->setText(expressions.value("x").toString()+ expressions.value("operator").toString()+ expressions.value("y").toString()+"=");
            ui->lineEdit->setText(expressions.value("result").toString());
        }
    }

    ui->lineEdit_exp->clear();

    if (!equal)//lineEdit_exp display the current expression which is incomplete
    {
        for (auto var : vec) ui->lineEdit_exp->insert(var.toString());
    }
    else //lineEdit_exp display the expression of the current result
    {
        ui->lineEdit_exp->setText(expression);
        equal = false;
    }
    
    prevBtn = name;
}//functions of buttons  

void calculator::showHistory()//show the window of history
{
    ht.show();
}

bool calculator::isInteger(double n)//
{
    if (n - int(n) == 0)
    {
        return true;
    }
    else return false;
}

void calculator::lineEditClear()//clear the lineEdit and lineEdit_exp, initial
{
    ui->lineEdit->clear();
    ui->lineEdit->insert("0");
    ui->lineEdit_exp->clear();
    vec.clear();
    vec.resize(5);
}