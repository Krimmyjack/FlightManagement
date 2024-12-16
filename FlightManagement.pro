QT       += core gui
QT += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Changed.cpp \
    Forget.cpp \
    Indent_detail.cpp \
    Login.cpp \
    Mine.cpp \
    Mine_indent.cpp \
    Refundticketwidget.cpp \
    Register.cpp \
    Tickets.cpp \
    change_flightinfo.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Changed.h \
    Forget.h \
    Indent_detail.h \
    Login.h \
    Mine.h \
    Mine_indent.h \
    Refundticketwidget.h \
    Register.h \
    Tickets.h \
    change_flightinfo.h \
    mainwindow.h

FORMS += \
    Forget.ui \
    Login.ui \
    Register.ui \
    mainwindow.ui

TRANSLATIONS += \
    FlightManagement_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Recource.qrc
