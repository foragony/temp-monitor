QT       += core gui
QT       += serialport
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    login.cpp \
    loginerror.cpp \
    main.cpp \
    manage.cpp \
    qcustomplot.cpp \
    regis.cpp \
    regis_sus.cpp \
    tempdisplay.cpp \
    warningg.cpp \
    widget.cpp

HEADERS += \
    login.h \
    loginerror.h \
    manage.h \
    qcustomplot.h \
    regis.h \
    regis_sus.h \
    tempdisplay.h \
    warningg.h \
    widget.h

FORMS += \
    login.ui \
    loginerror.ui \
    manage.ui \
    regis.ui \
    regis_sus.ui \
    tempdisplay.ui \
    warningg.ui \
    widget.ui

TRANSLATIONS += \
    qt_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
