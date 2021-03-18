#include "login.h"
#include "ui_login.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QApplication>
#include <qdebug.h>

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    QString name = ui->login_name->text();
    QString password = ui->login_pwd->text();
    QSqlQuery query;
    query.prepare("select password from people where name = ?");
    query.addBindValue(name);
    query.exec();
    query.next();
    if(query.value(0).toString() == password)
        w.show();
    else
        err.show();
}

void login::on_pushButton_3_clicked()
{
    m.show();
}

void login::on_pushButton_2_clicked()
{
    r.show();
}
