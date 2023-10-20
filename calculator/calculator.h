#pragma once

#include <QtWidgets/QWidget>
#include "ui_calculator.h"
#include "History.h"

QT_BEGIN_NAMESPACE
namespace Ui { class calculatorClass; };
QT_END_NAMESPACE

class calculator : public QWidget
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();
    void iniUI();
    bool isInteger(double n);
    void lineEditClear();//clear the lineEdit and lineEdit_exp, initial
    History ht;
public slots:
    void onButtonGroupClicked(QAbstractButton* btn);
    void showHistory();//show the window of history
private:
    Ui::calculatorClass *ui;
    QVector<QVariant> vec;//save the expressions and results
    QString prevBtn;//save the previous button
    bool start;//judge if start of a expression
};
