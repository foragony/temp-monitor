#include "warningg.h"
#include "ui_warningg.h"

warningg::warningg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::warningg)
{
    ui->setupUi(this);
}

warningg::~warningg()
{
    delete ui;
}
