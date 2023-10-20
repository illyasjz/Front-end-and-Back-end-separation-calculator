#include <QSqlDatabase>	
#include <QSqlError>		
#include <QSqlQuery>		
#include <QMessageBox>
#include <QVariantList>			
#include <QDebug>
#include <QString>


static bool createConnection() {
	QSqlDatabase db = QSqlDatabase::addDatabase("QODBC","connection1");
	db.setHostName("127.0.0.1");
	db.setPort(3306);
	db.setDatabaseName("calculator"); //data source name in ODBC, which is the same as the database name
	db.setUserName("root");
	db.setPassword("968574123Sjz"); //password

	// open the database
	if (!db.open()) {	// if fail
		return false;
	}
	else {
		return true;
	}
}

