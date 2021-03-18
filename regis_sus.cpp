#include "regis_sus.h"
#include "ui_regis_sus.h"

regis_sus::regis_sus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::regis_sus)
{
    ui->setupUi(this);
}

regis_sus::~regis_sus()
{
    delete ui;
}
