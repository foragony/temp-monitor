#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
/*------------------------用户代码头文件---------------------------*/
#include <QtSerialPort/QSerialPort>//串口
#include <QtSerialPort/QSerialPortInfo>//串口
#include <QDebug>//用于在控制台输出调试信息
#include <QTime>//定时器
#include <QPainter>//坐标系绘图
#include "warningg.h"
#include "tempdisplay.h"



QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btn_search_port_clicked();

    void on_btn_open_port_clicked();

    void AnalyzeData();//数据读取
    void setupPlot();//初始化


    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    QSerialPort *myserial;//声明串口类，myserial是QSerialPort的实例
    bool serial_flag,start_flag;//定义两个标志位
    QByteArray alldata;//接收串口数据
    //绘图函数
    QDateTime mycurrenttime;//系统当前时间
    QDateTime mystarttime;//系统开始时间
    warningg x;
    tempdisplay xianshi;

};
#endif // WIDGET_H



