#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "widget.h"
#include "manage.h"
#include "regis.h"
#include "loginerror.h"

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::login *ui;
    Widget w;
    manage m;
    regis r;
    loginerror err;
};

#endif // LOGIN_H
