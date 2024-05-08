#include <QString>
#include <QSqlQuery>
#include "Connection.h"
#include "autor_db.h"

Autor_db::Autor_db() {}

void Autor_db::InsertAutor(QString nome)
{
    Connection connection;
    QSqlDatabase instanceDb = connection.Connect();
    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO Autor(nome) VALUES(:nome);");
    insertQuery.bindValue(":nome",nome);
    insertQuery.exec();
    connection.Disconnect(instanceDb);
}
