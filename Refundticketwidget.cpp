#include "Refundticketwidget.h"

RefundTicketWidget::RefundTicketWidget(QWidget *parent)
    : QWidget{parent}
{
    setupLayout();
}
void RefundTicketWidget::setupLayout() {
    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    setupTitle(mainLayout);
    setupScrollArea(mainLayout);
    setupDetailWidget(mainLayout);
    setupButtons(mainLayout);

    setLayout(mainLayout);
}

void RefundTicketWidget::setupTitle(QVBoxLayout *mainLayout) {


    QFrame *titleFrame = new QFrame(this);
    titleFrame->setFrameShape(QFrame::StyledPanel);
    titleFrame->setFrameShadow(QFrame::Raised);
    titleFrame->setLineWidth(2);
    titleFrame->setMidLineWidth(2);
    titleFrame->setStyleSheet("background-color: white; border-radius: 10px;");

    QLabel *titleLabel = new QLabel("退票相关规则", this);
    titleLabel->setStyleSheet("font-size: 20px; color: #0078D7; padding: 10px;");
    titleLabel->setAlignment(Qt::AlignCenter);

    QVBoxLayout *titleLayout = new QVBoxLayout(titleFrame);
    titleLayout->addWidget(titleLabel);
    titleLayout->setContentsMargins(10, 10, 10, 10);
    titleLayout->setSpacing(0);

    titleFrame->setLayout(titleLayout);
    mainLayout->addWidget(titleFrame);
}

void RefundTicketWidget::setupScrollArea(QVBoxLayout *mainLayout) {
    scrollArea = new QScrollArea(this);
    scrollArea->setWidgetResizable(true);
    scrollArea->setFrameShape(QFrame::NoFrame);
    scrollArea->setStyleSheet("border: 1px solid #0078D7; border-radius: 10px;");

    QWidget *scrollContent = new QWidget(scrollArea);
    QVBoxLayout *scrollLayout = new QVBoxLayout(scrollContent);
    scrollLayout->addWidget(new QLabel("请核对航班信息，确认是否退票！！！", scrollContent));
    scrollLayout->setContentsMargins(10, 10, 10, 10);
    scrollLayout->setSpacing(10);

    scrollArea->setWidget(scrollContent);
    mainLayout->addWidget(scrollArea);
}

void RefundTicketWidget::setupDetailWidget(QVBoxLayout *mainLayout) {
    detailWidget = new QWidget(this);
    detailWidget->setStyleSheet("background-color: #BDD7EE; border-radius: 10px; padding: 10px;");

    QVBoxLayout *detailLayout = new QVBoxLayout(detailWidget);
    detailLayout->addWidget(new QLabel("航班编号", detailWidget));
    detailLayout->addWidget(new QLabel("基本信息：从哪到哪，起飞时间，出行人基本信息。", detailWidget));
    detailLayout->addWidget(new QLabel("付款价格：", detailWidget));
    detailLayout->addWidget(new QLabel("应退金额：", detailWidget));
    detailLayout->setContentsMargins(10, 10, 10, 10);
    detailLayout->setSpacing(10);

    detailWidget->setLayout(detailLayout);
    mainLayout->addWidget(detailWidget);
}

void RefundTicketWidget::setupButtons(QVBoxLayout *mainLayout) {
    QHBoxLayout *buttonLayout = new QHBoxLayout(this);
    buttonLayout->setContentsMargins(10, 10, 10, 10);
    buttonLayout->setSpacing(10);

    refundButton = new QPushButton("退票", this);
    refundButton->setStyleSheet("background-color: #0078D7; color: white; border-radius: 5px; padding: 10px;");
    refundButton->setFixedWidth(150);

    cancelButton = new QPushButton("取消", this);
    cancelButton->setStyleSheet("background-color: #D3D3D3; color: black; border-radius: 5px; padding: 10px;");
    cancelButton->setFixedWidth(150);

    buttonLayout->addWidget(refundButton);
    buttonLayout->addWidget(cancelButton);

    //this->setLayout(buttonLayout);
    mainLayout->addLayout(buttonLayout);
}
