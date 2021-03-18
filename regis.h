#ifndef REGIS_H
#define REGIS_H

#include <QWidget>
#include "regis_sus.h"


namespace Ui {
class regis;
}

class regis : public QWidget
{
    Q_OBJECT

public:
    explicit regis(QWidget *parent = nullptr);
    ~regis();

private slots:
    void on_regis_end_clicked();

private:
    Ui::regis *ui;
    regis_sus sus;
};

#endif // REGIS_H
