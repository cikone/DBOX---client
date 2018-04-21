#-------------------------------------------------
#
# Project created by QtCreator 2017-10-22T00:19:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets network

TARGET = D-Box_Client
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

QMAKE_CFLAGS_ISYSTEM=






SOURCES += \
        main.cpp \
        mainwindow.cpp \
    ../D-Box_Server/request.cpp \
    ../D-Box_Server/response_expert.cpp \
    ../D-Box_Server/response_identification.cpp \
    ../D-Box_Server/response_verification.cpp \
    graphics_view_zoom.cpp \
    gui_handler.cpp \
    receive_response.cpp \
    send_request.cpp \
    tcp_client.cpp \
    minutiae_marker.cpp \
    add_user.cpp \
    sensor_suprema.cpp \
    sensor_biometrika.cpp \
    sensor_biometrika_livescan.cpp

HEADERS += \
        mainwindow.h \
    helper.h \
    ../D-Box_Server/request.h \
    ../D-Box_Server/response_expert.h \
    ../D-Box_Server/response_identification.h \
    ../D-Box_Server/response_verification.h \
    graphics_view_zoom.h \
    gui_handler.h \
    receive_response.h \
    send_request.h \
    tcp_client.h \
    minutiae_marker.h \
    add_user.h \
    sensor_suprema.h \
    sensor_biometrika.h \
    sensor_biometrika_livescan.h

FORMS += \
        mainwindow.ui




# opencv
unix:!macx: LIBS += -L$$PWD/../../../../usr/local/lib64/ -lopencv_world

INCLUDEPATH += $$PWD/../../../../usr/local/include
DEPENDPATH += $$PWD/../../../../usr/local/include


#suprema
unix:!macx: LIBS += -L$$PWD/../../../../usr/local/lib64/ -lUFMatcher
unix:!macx: LIBS += -L$$PWD/../../../../usr/local/lib64/ -lUFScanner


