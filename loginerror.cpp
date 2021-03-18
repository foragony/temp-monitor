#include "loginerror.h"
#include "ui_loginerror.h"

loginerror::loginerror(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginerror)
{
    ui->setupUi(this);
}

loginerror::~loginerror()
{
    delete ui;
}
