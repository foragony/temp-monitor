#ifndef REGIS_SUS_H
#define REGIS_SUS_H

#include <QWidget>

namespace Ui {
class regis_sus;
}

class regis_sus : public QWidget
{
    Q_OBJECT

public:
    explicit regis_sus(QWidget *parent = nullptr);
    ~regis_sus();

private:
    Ui::regis_sus *ui;
};

#endif // REGIS_SUS_H
