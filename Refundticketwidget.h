#ifndef REFUNDTICKETWIDGET_H
#define REFUNDTICKETWIDGET_H

#include <QWidget>
#include<QVBoxLayout>
#include<QFrame>
#include<QPushButton>
#include<QLabel>
#include<QScrollArea>
#include"Indent_detail.h"
class RefundTicketWidget : public QWidget
{
    Q_OBJECT
public:
    explicit RefundTicketWidget(QWidget *parent = nullptr);
private:
    void setupLayout();
    void setupTitle(QVBoxLayout *mainLayout);
    void setupScrollArea(QVBoxLayout *mainLayout);
    void setupDetailWidget(QVBoxLayout *mainLayout);
    void setupButtons(QVBoxLayout *mainLayout);

    QWidget *contentWidget;
    QScrollArea *scrollArea;
    QWidget *detailWidget;
    QPushButton *refundButton;
    QPushButton *cancelButton;
signals:
};

#endif // REFUNDTICKETWIDGET_H
