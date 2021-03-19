#ifndef WARNINGG_H
#define WARNINGG_H

#include <QWidget>

namespace Ui {
class warningg;
}

class warningg : public QWidget
{
    Q_OBJECT

public:
    explicit warningg(QWidget *parent = nullptr);
    ~warningg();

private:
    Ui::warningg *ui;
};

#endif // WARNINGG_H
