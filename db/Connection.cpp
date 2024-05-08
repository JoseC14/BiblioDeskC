#include <QtSql/QSqlDatabase>
#include "Connection.h"



QSqlDatabase Connection::Connect()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("bibliodesk");
    db.setUserName("root");
    db.setPassword("2398Jasf#");
    db.open();
    return db;
}

void Connection::Disconnect(QSqlDatabase conn)
{
    conn.close();
}

