#ifndef CLIENTWIDGET_H
#define CLIENTWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QFile>

namespace Ui {
class ClientWidget;
}

class ClientWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ClientWidget(QWidget *parent = nullptr);
    ~ClientWidget();

private slots:
    void on_buttonConnect_clicked();
    void Read();

private:
    Ui::ClientWidget *ui;

    QTcpSocket *tcpSocket;

    QFile file; //文件对象
    QString fileName; //文件名字
    int fileSize; //文件大小
    int recvSize; //已经接收文件的大小

    bool isStart;   //标志位，是否为头部信息
};

#endif // CLIENTWIDGET_H
