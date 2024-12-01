#include "Indent_detail.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QDateTime>

Indent_detail::Indent_detail(QWidget *parent,
                             const QString &uname,
                             const QString &departure_city,
                             const QString &departure_airport,
                             const QString &arrival_city,
                             const QString &arrival_airport,
                             const QString &number,
                             const QDateTime &udate,
                             const QDateTime &adate,
                             const QString &airline,
                             const QString &airmodel,
                             const QTime &Duration,
                             int uclass,
                             int ucost,
                             bool ustatus)
    : QWidget(parent),
    name(uname),
    fli_number(number),
    fli_class(uclass),
    cost(ucost),
    statuss(ustatus),
    departure_city(departure_city),
    departure_airport(departure_airport),
    arrival_city(arrival_city),
    arrival_airport(arrival_airport),
    departure_Date(udate),
    arrival_time(adate),
    airline(airline),
    airmodel(airmodel),
    duration(Duration)
{
    // 计算到达时间
    //arrival_time = departure_Date.addSecs(duration.hour() * 3600 + duration.minute() * 60);
}

QWidget* Indent_detail::getWidget()
{
    QWidget* mainWigdet =new QWidget(this);
    QVBoxLayout *mainLayout = new QVBoxLayout(mainWigdet);

    setupDateAndStatusLabels(mainLayout);   // time + status
    setupFlightInfoLabels(mainLayout);      // company
    setupFlightDetailsLabels(mainLayout);   // mainInfo
    setupPassengerInfoLabels(mainLayout);   // name+class
    setupTicketActions(mainLayout);        // price + button

    mainWigdet->setLayout(mainLayout);
    return mainWigdet;
}

void Indent_detail::setupDateAndStatusLabels(QVBoxLayout *layout)
{
    QWidget *dateformat = new QWidget;
    QHBoxLayout *dateLayout = new QHBoxLayout(dateformat);
    QLabel *datelabel = new QLabel(QString("%1年%2月%3日").arg(departure_Date.date().year()).arg(departure_Date.date().month()).arg(departure_Date.date().day()));
    datelabel->setStyleSheet("font-family: '微软雅黑'; font-size: 16px;");
    QLabel *status = new QLabel(statuss ? "已出行" : "未出行");
    status->setStyleSheet("font-family:'微软雅黑'; color: red; font-size: 16px");
    dateLayout->addWidget(datelabel);
    dateLayout->addWidget(status);
    layout->addWidget(dateformat);
}
void Indent_detail::setupFlightInfoLabels(QVBoxLayout *layout)
{
    QWidget *flightInfoWidget = new QWidget;
    QHBoxLayout *flightInfoLayout = new QHBoxLayout(flightInfoWidget);

    // 假设这里有一些关于航班公司的信息
    QLabel *airlineLabel = new QLabel(QString("航空公司：%1").arg(airline), this);
    airlineLabel->setStyleSheet("font-family: '微软雅黑'; font-size: 16px;");

    // 可能还有其他信息，如飞机型号等
    QLabel *airmodelLabel = new QLabel(QString("机型：%1").arg(airmodel), this);
    airmodelLabel->setStyleSheet("font-family: '微软雅黑'; font-size: 16px;");

    flightInfoLayout->addWidget(airlineLabel);
    flightInfoLayout->addWidget(airmodelLabel);

    layout->addWidget(flightInfoWidget);
}
void Indent_detail::setupFlightDetailsLabels(QVBoxLayout *layout)
{
    QWidget *flightDetailsWidget = new QWidget;
    QHBoxLayout *mainLayout = new QHBoxLayout(flightDetailsWidget);

    // 左侧：地点、时间、机场名的垂直布局
    QWidget *leftSideWidget = new QWidget;
    QVBoxLayout *leftSideLayout = new QVBoxLayout(leftSideWidget);
    leftSideLayout->setSpacing(5); // 设置间距以避免元素过于紧凑

    // 地点
    QLabel *originCityLabel = new QLabel(QString("起点：%1").arg(departure_city), this);
    originCityLabel->setStyleSheet("font-family: '微软雅黑'; font-size: 16px;");

    // 时间
    QLabel *departureTimeLabel = new QLabel(departure_Date.time().toString("hh:mm"), this);
    departureTimeLabel->setStyleSheet("font-family: '微软雅黑'; font-size: 14px;");

    // 机场名（较小）
    QLabel *departureAirportLabel = new QLabel(QString("机场：%1").arg(departure_airport), this);
    departureAirportLabel->setStyleSheet("font-family: '微软雅黑'; font-size: 7px; color: gray;");

    leftSideLayout->addWidget(originCityLabel);
    leftSideLayout->addWidget(departureTimeLabel);
    leftSideLayout->addWidget(departureAirportLabel);
    leftSideLayout->addStretch(); // 添加拉伸以对齐顶部

    // 右侧：地点、时间、机场名的垂直布局
    QWidget *rightSideWidget = new QWidget;
    QVBoxLayout *rightSideLayout = new QVBoxLayout(rightSideWidget);
    rightSideLayout->setSpacing(5); // 设置间距以避免元素过于紧凑

    // 地点
    QLabel *arrivalCityLabel = new QLabel(QString("终点：%1").arg(arrival_city), this);
    arrivalCityLabel->setStyleSheet("font-family: '微软雅黑'; font-size: 16px;");

    // 时间
    QLabel *arrivalTimeLabel = new QLabel(arrival_time.time().toString("hh:mm"), this);
    arrivalTimeLabel->setStyleSheet("font-family: '微软雅黑'; font-size: 14px;");

    // 机场名（较小）
    QLabel *arrivalAirportLabel = new QLabel(QString("机场：%1").arg(arrival_airport), this);
    arrivalAirportLabel->setStyleSheet("font-family: '微软雅黑'; font-size: 7px; color: gray;");

    rightSideLayout->addWidget(arrivalCityLabel);
    rightSideLayout->addWidget(arrivalTimeLabel);
    rightSideLayout->addWidget(arrivalAirportLabel);
    rightSideLayout->addStretch(); // 添加拉伸以对齐顶部

    // 中间：箭头和飞行时间的垂直布局
    QWidget *centerWidget = new QWidget;
    QVBoxLayout *centerLayout = new QVBoxLayout(centerWidget);
    centerLayout->setSpacing(5); // 设置间距以避免元素过于紧凑

    // 箭头标签
    QLabel *arrowLabel = new QLabel("→", this);
    arrowLabel->setStyleSheet("font-family: '微软雅黑'; font-size: 32px;");
    arrowLabel->setAlignment(Qt::AlignCenter); // 居中对齐箭头标签

    // 飞行时间标签
    QLabel *durationLabel = new QLabel(QString("飞行时长：%1小时%2分钟")
                                           .arg(duration.hour())
                                           .arg(duration.minute()),
                                       this);
    durationLabel->setStyleSheet("font-family: '微软雅黑'; font-size: 16px;");
    durationLabel->setAlignment(Qt::AlignCenter); // 居中对齐飞行时间标签

    centerLayout->addWidget(arrowLabel);
    centerLayout->addWidget(durationLabel);

    // 在主水平布局中添加拉伸项以推动左右两侧的内容到边缘
    mainLayout->addItem(new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum));
    mainLayout->addWidget(leftSideWidget);
    mainLayout->addWidget(centerWidget);
    mainLayout->addWidget(rightSideWidget);
    mainLayout->addItem(new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum));

    layout->addWidget(flightDetailsWidget);
}
void Indent_detail::setupPassengerInfoLabels(QVBoxLayout *layout)
{
    QWidget *passengerInfoWidget = new QWidget;
    QHBoxLayout *passengerInfoLayout = new QHBoxLayout(passengerInfoWidget);
    QLabel *passengerLabel = new QLabel(QString("乘客：%1").arg(name), this);
    passengerLabel->setStyleSheet("font-family: '微软雅黑'; font-size: 16px;");
    QLabel *seatLabel = new QLabel(QString("座位：%1").arg(fli_class == 1 ? "头等舱" :
                                                               fli_class == 2 ? "商务舱" : "经济舱"),
                                   this);
    seatLabel->setStyleSheet("font-family: '微软雅黑'; font-size: 16px;");
    passengerInfoLayout->addWidget(passengerLabel);
    passengerInfoLayout->addWidget(seatLabel);
    layout->addWidget(passengerInfoWidget);
}

void Indent_detail::setupTicketActions(QVBoxLayout *layout)
{
    QWidget *ticketActionsWidget = new QWidget;
    QHBoxLayout *ticketActionsLayout = new QHBoxLayout(ticketActionsWidget);
    QLabel *priceLabel = new QLabel(QString("票价：￥%1").arg(cost), this);
    priceLabel->setStyleSheet("font-family: '微软雅黑'; font-size: 16px;");
    QPushButton *refundButton = new QPushButton("退票", this);
    QPushButton *changeButton = new QPushButton("改签", this);
    ticketActionsLayout->addWidget(priceLabel);
    ticketActionsLayout->addWidget(refundButton);
    ticketActionsLayout->addWidget(changeButton);
    layout->addWidget(ticketActionsWidget);
}
