/********************************************************************************
** Form generated from reading UI file 'Indent.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDENT_H
#define UI_INDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Indent
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_4;
    QFormLayout *formLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QDialog *Indent)
    {
        if (Indent->objectName().isEmpty())
            Indent->setObjectName("Indent");
        Indent->resize(805, 542);
        Indent->setStyleSheet(QString::fromUtf8("/* \350\256\276\347\275\256 QMainWindow \347\232\204\350\203\214\346\231\257\345\222\214\345\255\227\344\275\223 */\n"
"QDialog{\n"
"    background: rgb(255, 255, 255); /* \350\203\214\346\231\257\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"    font-size: 15px; /* \350\256\276\347\275\256\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-family: \"MingLiU-ExtB\", \"Arial\", sans-serif; /* \350\256\276\347\275\256\345\255\227\344\275\223\357\274\214\347\241\256\344\277\235\345\271\263\345\217\260\346\224\257\346\214\201 */\n"
"/* background-image: url(:/new/prefix1/Far Cry 5 Josephs Word View.png);*/\n"
" background-size: cover; /* \350\203\214\346\231\257\345\233\276\345\203\217\346\214\211\346\257\224\344\276\213\347\274\251\346\224\276\345\271\266\345\241\253\345\205\205\345\256\271\345\231\250 */\n"
"    background-position: center; /* \350\203\214\346\231\257\345\233\276\345\203\217\345\261\205\344\270\255\346\230\276\347\244\272 */\n"
"    background-repeat: no-repeat; /* \344\270"
                        "\215\351\207\215\345\244\215\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256 QFrame \350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"QFrame {\n"
"    border: solid 10px rgba(0, 0, 0, 1); /* \351\273\221\350\211\262\345\256\236\347\272\277\350\276\271\346\241\206\357\274\214\345\256\275\345\272\246\344\270\272 10px */\n"
"    /*background-image: url(:/new/prefix1/Far Cry 5 Josephs Word View.png); /* \350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"    background-repeat: no-repeat; /* \344\270\215\351\207\215\345\244\215 */\n"
"    background-position: center; /* \345\261\205\344\270\255\346\230\276\347\244\272\350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256 QLineEdit \346\240\267\345\274\217 */\n"
"QLineEdit {\n"
"    color: #8d98a1; /* \350\276\223\345\205\245\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"    background-color: #405361; /* \350\276\223\345\205\245\346\241\206\350\203\214\346\231\257\350\211\262"
                        " */\n"
"    font-size: 16px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    border-style: outset; /* \345\244\226\345\207\270\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    font-family: \"MingLiU-ExtB\", \"Arial\", sans-serif; /* \350\256\276\347\275\256\345\255\227\344\275\223 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256 QPushButton \346\240\267\345\274\217 */\n"
"QPushButton {\n"
"    background: rgb(170, 85, 255); /* \346\214\211\351\222\256\350\203\214\346\231\257\350\211\262 */\n"
"    border-style: outset; /* \345\244\226\345\207\270\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    font-family: \"\345\276\256\350\275\257\351\233\205\351\273\221\", \"Bold\", sans-serif; /* \350\256\276\347\275\256\345\255\227\344\275\223 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256 QPushButton \346\214\211\344\270\213"
                        "\346\227\266\347\232\204\346\240\267\345\274\217 */\n"
"QPushButton:pressed {\n"
"    background-color: rgb(0, 170, 255); /* \346\214\211\351\222\256\346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    border-style: inset; /* \346\214\211\351\222\256\346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\346\240\267\345\274\217 */\n"
"    font-family: \"\345\276\256\350\275\257\351\233\205\351\273\221\", \"Bold\", sans-serif; /* \350\256\276\347\275\256\345\255\227\344\275\223 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256 QCheckBox \346\240\267\345\274\217 */\n"
"QCheckBox {\n"
"    background: rgba(85, 170, 255, 0); /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    color: white; /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    font-family: \"MingLiU-ExtB\", \"Arial\", sans-serif; /* \350\256\276\347\275\256\345\255\227\344\275\223 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256 QLabel \346\240\267\345\274\217 */\n"
"QLabel {\n"
"    back"
                        "ground: rgba(85, 170, 255, 0); /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"}\n"
""));
        widget = new QWidget(Indent);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-1, -1, 141, 541));
        widget->setStyleSheet(QString::fromUtf8("QWidget { background-color: rgb(85, 170, 255); }"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(18);
        font.setBold(true);
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 40));
        pushButton_2->setFont(font);

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(0, 40));
        pushButton_3->setFont(font);

        verticalLayout->addWidget(pushButton_3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(0, 40));
        pushButton_4->setFont(font);

        verticalLayout->addWidget(pushButton_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget_2 = new QWidget(Indent);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(140, 0, 661, 131));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221")});
        font1.setPointSize(18);
        widget_2->setFont(font1);
        widget_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ADD8E6;   // \350\256\276\347\275\256\350\203\214\346\231\257\350\211\262\344\270\272\346\265\205\350\223\235\350\211\262\n"
"    color: #000000;               // \350\256\276\347\275\256\346\226\207\346\234\254\351\242\234\350\211\262\344\270\272\351\273\221\350\211\262\n"
"    font-size: 16px;             // \350\256\276\347\275\256\345\255\227\344\275\223\345\244\247\345\260\217\n"
"    font-weight: bold;           // \350\256\276\347\275\256\345\255\227\344\275\223\345\212\240\347\262\227\n"
"    font-family: Arial;          // \350\256\276\347\275\256\345\255\227\344\275\223\347\261\273\345\236\213\n"
"    border-radius: 5px;          // \350\256\276\347\275\256\350\276\271\346\241\206\345\234\206\350\247\222\n"
"    border: 2px solid #4682B4;   // \350\256\276\347\275\256\350\276\271\346\241\206\351\242\234\350\211\262\345\222\214\345\256\275\345\272\246\n"
"    padding: 5px;               // \350\256\276\347\275\256\345\206\205\350\276\271\350\267\235\n"
"    }"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName("widget_5");
        horizontalLayout_2 = new QHBoxLayout(widget_5);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget_5);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(37, 168, 255)"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout->addWidget(widget_5, 1, 0, 1, 1);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	bacground-color: rgb(229, 246, 255);\n"
"}\n"
"QPushButton{\n"
"	color: rgb(39, 151, 255);\n"
"background-color: rgb(229, 246, 255)\n"
"}"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName("horizontalLayout");
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName("widget_4");
        widget_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: rgb(52, 174, 255)\n"
"}"));
        formLayout = new QFormLayout(widget_4);
        formLayout->setObjectName("formLayout");
        label = new QLabel(widget_4);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(22);
        font2.setBold(true);
        label->setFont(font2);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout->setItem(0, QFormLayout::FieldRole, horizontalSpacer_3);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(1, QFormLayout::LabelRole, verticalSpacer_6);

        label_2 = new QLabel(widget_4);
        label_2->setObjectName("label_2");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setPointSize(12);
        font3.setBold(true);
        label_2->setFont(font3);

        formLayout->setWidget(1, QFormLayout::FieldRole, label_2);


        horizontalLayout->addWidget(widget_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_5 = new QPushButton(widget_3);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(80, 25));

        horizontalLayout->addWidget(pushButton_5);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButton_6 = new QPushButton(widget_3);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(80, 25));

        horizontalLayout->addWidget(pushButton_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addWidget(widget_3, 0, 0, 1, 1);

        widget1 = new QWidget(Indent);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Indent);

        QMetaObject::connectSlotsByName(Indent);
    } // setupUi

    void retranslateUi(QDialog *Indent)
    {
        Indent->setWindowTitle(QCoreApplication::translate("Indent", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Indent", "\344\270\273\351\241\265", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Indent", "\350\256\242\345\215\225", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Indent", "\346\210\221\347\232\204", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Indent", "\350\201\224\347\263\273\345\256\242\346\234\215", nullptr));
        label_3->setText(QCoreApplication::translate("Indent", "\345\276\205\345\207\272\350\241\214\350\256\242\345\215\225", nullptr));
        label->setText(QCoreApplication::translate("Indent", "\350\210\252\347\217\255\350\264\255\347\245\250\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("Indent", "\346\210\221\347\232\204\350\256\242\345\215\225", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Indent", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Indent", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Indent: public Ui_Indent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDENT_H
