#include "Mine_indent.h"
#include<QDateTime>
#include<QSqlQuery>
#include"Indent_detail.h"
Mine_indent::Mine_indent(QWidget *parent)
    : QWidget{parent}
{
    setWindowTitle("航班购票系统");
    setFixedHeight(400);
    setFixedWidth(600);
    //setWindowTitle("航班购票系统");

    // 创建左侧菜单栏
    //createLeftMenu();

    // 创建内容区域
    createContentArea();
    queryINFO();
    // 创建主布局
    createMainLayout();
}
void Mine_indent::createContentArea()
{
    // 内容区域
    // 内容区域
    contentWidget = new QWidget(this);
    QVBoxLayout *contentLayout = new QVBoxLayout(contentWidget);

    // 标题
    QLabel *titleLabel = new QLabel("待出行订单", this);
    titleLabel->setStyleSheet("font-size: 24px; color: #4a90e2;");
    contentLayout->addWidget(titleLabel);

    // 创建一个小部件用于容纳垂直布局
    //QWidget *containerWidget = new QWidget(this);
    //QVBoxLayout *verticalLayout = new QVBoxLayout(containerWidget);

    // 划分线
    QFrame *line = new QFrame(this);
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);
    line->setStyleSheet("border: none; background-color:rgb(65, 157, 255); height: 2px;");
    contentLayout->addWidget(line);

    // 创建滚动区域
    QScrollArea *scrollArea = new QScrollArea(this);
    scrollArea->setWidgetResizable(true);

    // 创建滚动区域的内容区域
    QWidget *scrollContent = new QWidget;
    QVBoxLayout *scrollContentLayout = new QVBoxLayout(scrollContent);

    // 添加一些示例QWidget
    for(QWidget* widget: q)
    {
        scrollContentLayout->addWidget(widget);
    }

    scrollArea->setWidget(scrollContent);
    contentLayout->addWidget(scrollArea);
    // 设置容器小部件的样式作为背景
    contentWidget->setStyleSheet(
        "background-color: #f0f0f0;"
        "padding: 10px;"
        );
}

void Mine_indent::queryINFO()
{
    QString name;  // 真实姓名
    QString fli_number;
    int fli_class; // 舱位等级 1为头等舱，2为商务舱，3为经济舱
    int cost;      // 价格
    bool statuss;
    QString departure_city, departure_airport, arrival_city, arrival_airport;
    QDateTime departure_Date;//离开天数时间
    QDateTime arrival_time;//到达天数时间
    QString airline,airmodel;
    QTime duration;
    QSqlQuery query;
    query.prepare("SELECT username,realname, flight_number, seat_class, price, status,departure_time FROM orders");
    if(query.exec())
    {
        while(query.next())
        {
            if(Username==query.value(0).toString())
            {
                name=query.value(1).toString();
                fli_number= query.value(2).toString();
                departure_Date=query.value(6).toDateTime();
                fli_class=query.value(3).toInt();//lack of convert
                cost = query.value(4).toInt();
               statuss = (query.value(5).toString() == "upcoming");
                QSqlQuery query1;
                query1.prepare("SELECT airline, airplane_model, departure_city, arrival_city, "
                               "arrival_airport,departure_airport， arrival_time, duration"
                               "FROM flights WHERE fli_number = :flight_number AND departure_date = :departure_date");

                // 绑定参数到查询语句
                query1.bindValue(":flight_number", fli_number);
                query1.bindValue(":departure_date", departure_Date);

                if (query1.exec()&&query1.next())
                { // 遍历查询结果
                        // 获取查询结果并赋值给成员变量或其他处理
                        airline = query1.value(0).toString();
                        airmodel = query1.value(1).toString();
                        departure_city = query1.value(2).toString();
                        arrival_city = query1.value(3).toString();
                        arrival_airport = query1.value(4).toString();
                        departure_airport=query1.value(5).toString();
                        arrival_time = query1.value(6).toDateTime();
                        duration = query1.value(7).toTime(); // 假设 duration 是 QTime 类型

                       Indent_detail *indent  = new Indent_detail(
                                              nullptr,
                                              name,
                                              departure_city,
                                              departure_airport,
                                              arrival_city,
                                              arrival_airport,
                                              fli_number,
                                              departure_Date,
                                              arrival_time,
                                              airline,
                                              airmodel,
                                              duration,
                                              fli_class,
                                              cost,
                                              statuss
                                              );
                        QWidget *widget= indent->getWidget();
                        // 将部件添加到 vector 中
                        q.push_back(widget);
                }
            }
        }
    }
     createContentArea();
}
void Mine_indent::createMainLayout(){
    // 创建主布局
    QVBoxLayout *mainLayout = new QVBoxLayout(this); // 使用 QVBoxLayout 作为主布局
    mainLayout->addWidget(contentWidget); // 添加中间内容区域的小部件到主布局
    mainLayout->setContentsMargins(0, 0, 0, 0); // 移除外边距

    setLayout(mainLayout); // 设置主窗口的布局为mainLayout
}

