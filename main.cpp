#include "mainwindow.h"
#include"Register.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
 #include"Login.h"
#include"Mine_indent.h"
#include"Indent_detail.h".h"
#include"Refundticketwidget.h"
#include"Tickets.h"
#include"Mine.h"
QSqlDatabase dbcon;
QSqlDatabase flight;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "FlightManagement_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    dbcon = QSqlDatabase::addDatabase("QODBC");
    dbcon.setHostName("127.0.0.1");
    dbcon.setPort(3306);
    dbcon.setDatabaseName("tickets");
    dbcon.setUserName("root");  // 添加用户名
    dbcon.setPassword("20050516");  // 添加密码
    bool ok = dbcon.open();
    if (!ok) {
        qDebug() << "Error, persondatabase 数据库文件打开失败！" << dbcon.lastError().text();
    } else {
        qDebug() << "Success, persondatabase 数据库文件打开成功！";
    }

    // if (!dbcon.transaction()) {
    //     qDebug() << "Failed to start transaction:" << dbcon.lastError().text();
    //     dbcon.close();
    //     return;
    // }

     // RefundTicketWidget *my = new RefundTicketWidget();
     // my->show();
    Mine *my= new Mine("23331071");//传入用户的id和订单的状态
    //my->setUsername("lijiahui");
    my->show();
    // MainWindow w;
    // w.setWindowTitle("航班管理系统");
    // w.resize(800, 600);
    // w.show();

    //indentDetail->getWidget()->show();
    // Register *u = new Register();
    // u->show();
     // if(u->f==1)
     // {
     //     u->close();
     //     MainWindow w;
     //     w.setWindowTitle("航班管理系统");
     //     w.resize(800, 600);
     //     w.show();
     // }


    return a.exec();
}
