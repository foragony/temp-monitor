#ifndef LOGINERROR_H
#define LOGINERROR_H

#include <QWidget>

namespace Ui {
class loginerror;
}

class loginerror : public QWidget
{
    Q_OBJECT

public:
    explicit loginerror(QWidget *parent = nullptr);
    ~loginerror();

private:
    Ui::loginerror *ui;
};

#endif // LOGINERROR_H
