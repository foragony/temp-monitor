#ifndef TEMPDISPLAY_H
#define TEMPDISPLAY_H

#include <QWidget>

namespace Ui {
class tempdisplay;
}

class tempdisplay : public QWidget
{
    Q_OBJECT

public:
    explicit tempdisplay(QWidget *parent = nullptr);
    ~tempdisplay();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::tempdisplay *ui;
};

#endif // TEMPDISPLAY_H
