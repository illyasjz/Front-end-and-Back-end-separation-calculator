#include "History.h"
#include "database.h"

History::History(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

    if (!createConnection()) qInfo() << "fail"; //create connection to the database
    else qInfo() << "success";
    
}

History::~History()
{
}

void History::showEvent(QShowEvent* event)
{
    //History::showEvent(event);

    QSqlDatabase db2 = QSqlDatabase::database("connection1"); //connect the database
    QSqlQuery query2(db2);

    QVector<QLineEdit*> lineEdits;
    lineEdits.resize(11);
    lineEdits = { ui.lineEdit_1, ui.lineEdit_2, ui.lineEdit_3, ui.lineEdit_4, ui.lineEdit_5, ui.lineEdit_6, ui.lineEdit_7, ui.lineEdit_8, ui.lineEdit_9, ui.lineEdit_10 };//store lineEdits for traversal
    int i = 0;

    //query the table in the library
    /*QStringList tables = db2.tables();
    foreach(QString table, tables)
        qInfo() << table;*/

    //display past 10 or less expressions in the lineEdits of window
    QSqlQuery expressions = db2.exec(" select * from history");
    if (expressions.last())
        ui.lineEdit_1->setText(expressions.value("x").toString() + expressions.value("operator").toString() + expressions.value("y").toString() + " = " + expressions.value("result").toString());
    while (expressions.previous() && ++i < 10) //the last 10 fields
        lineEdits[i]->setText(expressions.value("x").toString() + expressions.value("operator").toString() + expressions.value("y").toString() + " = " + expressions.value("result").toString());
}