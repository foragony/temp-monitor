#include "regis.h"
#include "ui_regis.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QApplication>
#include <qdebug.h>


int id = 1;

regis::regis(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::regis)
{
    ui->setupUi(this);
}

regis::~regis()
{
    delete ui;
}

void regis::on_regis_end_clicked()
{
    QString name = ui->regis_name->text();
    QString password = ui->regis_key->text();
    QSqlQuery query;
    query.prepare("INSERT INTO people (id, name, password) "
                  "VALUES (?, ?, ?)");
    query.addBindValue(id);
    query.addBindValue(name);
    query.addBindValue(password);
    query.exec();
    id = id + 1;
    sus.show();
    qDebug() << name;
}
