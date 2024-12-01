#ifndef MINE_INDENT_H
#define MINE_INDENT_H

#include <QWidget>
#include<QVBoxLayout>
#include<QFrame>
#include<QPushButton>
#include<QLabel>
#include<QScrollArea>

class Mine_indent : public QWidget
{
    Q_OBJECT
public:
    explicit Mine_indent(QWidget *parent = nullptr);
    void setUsername(QString name)
    {
        Username= name;//use the name to identify who you are and get relevent infomation.
    }
private:


    void createContentArea();
    void queryINFO();
    void createMainLayout();

    QPushButton *createButton(const QString &text) {
        QPushButton *button = new QPushButton(text, this);
        button->setStyleSheet("background-color: #4a90e2; color: white; padding: 10px; margin: 5px;");
        return button;
    }

    QWidget *contentWidget; // 中间内容区域的小部件
    QString Username;
    std::vector<QWidget*> q;
signals:

};

#endif // MINE_INDENT_H
