#include "login.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QApplication>

void init_data();

int main(int argc, char *argv[])
{
    init_data();
    QApplication a(argc, argv);
    login l;
    l.show();
    return a.exec();
}

void init_data()
{
    QSqlDatabase database;
    if (QSqlDatabase::contains("qt_sql_default_connection"))
    {
        database = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("MyDataBase.db");
    }
    if (!database.open())
    {
        qDebug() << "Error: Failed to connect database." << database.lastError();
    }
    else
    {
        qDebug() << "Table connected!";
    }

    QSqlQuery sql_query;
    QString create_sql = "create table people (id int primary key, name varchar(30), password varchar(30))";
    sql_query.prepare(create_sql);
    if(!sql_query.exec())
    {
        qDebug() << "Error: Fail to create table." << sql_query.lastError();
    }
    else
    {
        qDebug() << "Table created!";
    }

    create_sql = "create table temp (time varchar(50), temp varchar(20))";
    sql_query.prepare(create_sql);
    if(!sql_query.exec())
    {
        qDebug() << "Error: Fail to create table." << sql_query.lastError();
    }
    else
    {
        qDebug() << "Table created!";
    }
    /*int hhh=1;
    QSqlQuery query;
    query.prepare("INSERT INTO people (id, name, password) "
                  "VALUES (?, ?, ?)");
    query.addBindValue(11);
    query.addBindValue("Thad Beaumont");
    query.addBindValue(hhh);
    query.exec();*/
    //sql_query.exec("INSERT INTO people VALUES(3, 4545, 23)");
}
