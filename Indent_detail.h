#ifndef INDENT_DETAIL_H
#define INDENT_DETAIL_H

#include <QWidget>
#include <QDateTime>
#include<QTime>
#include<QVBoxLayout>

class Indent_detail : public QWidget
{
    Q_OBJECT
public:
    explicit Indent_detail(QWidget *parent,
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
                           const QTime & Duration,
                           int uclass,
                           int ucost,
                           //int Duration,
                           bool ustatus);
    QWidget* getWidget();

private:
    void setupDateAndStatusLabels(QVBoxLayout *layout);
    void setupFlightInfoLabels(QVBoxLayout *layout);
    void setupFlightDetailsLabels(QVBoxLayout *layout);
    void setupPassengerInfoLabels(QVBoxLayout *layout);
    void setupTicketActions(QVBoxLayout *layout);

    // 成员变量
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

signals:

};

#endif // INDENT_DETAIL_H
