#include "tempdisplay.h"
#include "ui_tempdisplay.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <qsqltablemodel.h>

tempdisplay::tempdisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tempdisplay)
{
    ui->setupUi(this);
}

tempdisplay::~tempdisplay()
{
    delete ui;
}

void tempdisplay::on_pushButton_2_clicked()
{
    QSqlTableModel *model = new QSqlTableModel;
    model->setTable("temp"); //使用 people 表
    model->setSort(1, Qt::AscendingOrder); //选择按照 第一列 排序
    model->setHeaderData(0, Qt::Horizontal, "time"); // 设置列头
    model->setHeaderData(1, Qt::Horizontal, "temp");
    model->select();
    ui->tableView->setModel(model);
}
