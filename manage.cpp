#include "manage.h"
#include "ui_manage.h"
#include "widget.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <qsqltablemodel.h>

//Widget w;

manage::manage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::manage)
{
    ui->setupUi(this);
}

manage::~manage()
{
    delete ui;
}

void manage::on_pushButton_clicked()
{
    QSqlTableModel *model = new QSqlTableModel;
    model->setTable("people"); //使用 people 表
    model->setSort(1, Qt::AscendingOrder); //选择按照 第一列 排序
    model->setHeaderData(0, Qt::Horizontal, "id"); // 设置列头
    model->setHeaderData(1, Qt::Horizontal, "name");
    model->setHeaderData(2, Qt::Horizontal, "password");
    model->select();

    ui->tableView->setModel(model);
    //ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);//
    //ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    //ui->tableView->resizeColumnsToContents();
    //ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers); //禁用编辑功能
}

void manage::on_delete_btn_clicked()
{
    QSqlQuery query;
    int i = ui->spinBox->value();
    query.prepare("delete from people where id = ?");
    query.addBindValue(i);
    query.exec();
}
