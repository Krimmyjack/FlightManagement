#include "Mine_indent.h"
#include <QDateTime>
#include <QSqlQuery>
#include "Indent_detail.h"
#include<QSqlError>
Mine_indent::Mine_indent(const QString& name,const bool &ustatus, QWidget *parent)
    : Username(name),status(ustatus),QWidget(parent)
{
    setWindowTitle("航班购票系统");
    resize(800,600);

    // 创建内容区域
    queryINFO();
    createContentArea();

    // 创建主布局
    createMainLayout();
}

void Mine_indent::createContentArea()
{
    contentWidget = new QWidget(this);
    QVBoxLayout *contentLayout = new QVBoxLayout(contentWidget);

    // 标题
    QLabel *titleLabel = new QLabel("待出行订单", this);
    titleLabel->setStyleSheet("font-size: 24px; color: #4a90e2;");
    contentLayout->addWidget(titleLabel);

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
    scrollContentLayout->setSpacing(5); // 减少组件之间的间距
    scrollContentLayout->setContentsMargins(5, 5, 5, 5); // 减少布局的边距
    std::sort(q.begin(), q.end(), [](const Indent_detail* a, const Indent_detail* b) {
        return a->getDepartureDate() < b->getDepartureDate();
    });
    for (auto widget : q)
    {
        widget->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        //widget->setMinimumSize(100, 30); // 设置最小尺寸
       // widget->setMaximumSize(300, 80); // 设置最大尺寸
        //widget->update();
        widget->update();
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
    q.clear(); // 清空之前的订单小部件列表

    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen())
    {
        qDebug() << "Database connection is not open.";
        return;
    }

    QSqlQuery query(db);
    if (!query.exec("SELECT username, realname, flight_number, seat_class, price, status, departure_time FROM orders"))
    {
        qDebug() << "Failed to execute orders query. Error:" << query.lastError().text();
        return;
    }

    while (query.next())
    {
        QString userName = query.value(0).toString();
        QString Ust;
        if(status==1) Ust="completed";
        else Ust="upcoming";
        if (Username == userName&&Ust==query.value(5).toString())
        {
            QString name = query.value(1).toString();
            QString fli_number = query.value(2).toString();
            QDateTime departure_Date = query.value(6).toDateTime();
            int fli_class = query.value(3).toInt();
            int cost = query.value(4).toInt();
            //bool statuss = (query.value(5).toString() == "upcoming");

            qDebug() << "Order details: Name:" << name
                     << ", Flight Number:" << fli_number
                     << ", Departure Date:" << departure_Date
                     << ", Class:" << fli_class
                     << ", Cost:" << cost;


            QSqlQuery query1(db);
            if (!query1.prepare("SELECT airline, airplane_model, departure_city, arrival_city, "
                                "arrival_airport, departure_airport, arrival_time, duration "
                                "FROM flights WHERE flight_number = :flight_number AND departure_time = :departure_time"))
            {
                qDebug() << "Failed to prepare flights query. Error:" << query1.lastError().text();
                continue;
            }

            query1.bindValue(":flight_number", fli_number);
            query1.bindValue(":departure_time", departure_Date);

            if (!query1.exec())
            {
                qDebug() << "Failed to execute flights query. Error:" << query1.lastError().text();
                continue;
            }

            if (query1.next())
            {
                QString airline = query1.value(0).toString();
                QString airmodel = query1.value(1).toString();
                QString departure_city = query1.value(2).toString();
                QString arrival_city = query1.value(3).toString();
                QString arrival_airport = query1.value(4).toString();
                QString departure_airport = query1.value(5).toString();
                QDateTime arrival_time = query1.value(6).toDateTime();
                QTime duration = query1.value(7).toTime();

                qDebug() << "Flight details: Airline:" << airline
                         << ", Model:" << airmodel
                         << ", From:" << departure_city << "(" << departure_airport << ")"
                         << "To:" << arrival_city << "(" << arrival_airport << ")"
                         << ", Arrival Time:" << arrival_time
                         << ", Duration:" << duration;

                Indent_detail *indent = new Indent_detail(
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
                    status
                    );
                //QWidget *widget = indent->getWidget();
                q.push_back(indent);
                qDebug() << "Added widget to display list.";
            }
            else
            {
                qDebug() << "No matching flight found for flight number:" << fli_number;
            }

            query1.finish();
        }
    }

    query.finish();
}
// static bool Mine_indent::compareByDepartureDate(const Indent_detail* a, const Indent_detail* b)
// {
//     return a->getDepartureDate() < b->getDepartureDate();
// }
void Mine_indent::createMainLayout()
{
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(contentWidget);
    mainLayout->setContentsMargins(0, 0, 0, 0);
    setLayout(mainLayout);
}
