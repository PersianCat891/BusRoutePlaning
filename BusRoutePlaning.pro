QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Graph.cpp \
    Path.cpp \
    Place.cpp \
    bustime.cpp \
    inquire.cpp \
    main.cpp \
    mainwindow.cpp \
    pathadd.cpp \
    placeadd.cpp \
    refresh.cpp

HEADERS += \
    Graph.h \
    Path.h \
    Place.h \
    bustime.h \
    config.h \
    inquire.h \
    mainwindow.h \
    pathadd.h \
    placeadd.h \
    refresh.h

FORMS += \
    bustime.ui \
    inquire.ui \
    mainwindow.ui \
    pathadd.ui \
    placeadd.ui \
    refresh.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    myImage.qrc
