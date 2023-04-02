#En el .pro se incluyen las configuraciones de proyecto.
#En el .ui es para diseñar la interfaz gráfica
#módulos que se van a utilizar
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#opciones de configuración que se utilizarán
CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

#los archivos de código fuente
SOURCES += \
    main.cpp \
    mainwindow.cpp

#los archivos de cabecera
HEADERS += \
    mainwindow.h
#los archivos de interfaz gráfica
FORMS += \
    mainwindow.ui

# Default rules for deployment.
#reglas de despliegue para linux, android y otras plataformas
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


#en el archivo .pro se definen las configuraciones del proyecto, los modulos que se van a utilizar,
#los archivos de codigo fuente, los archivos de cabecera, los archivos de GUI y reglas de despliegue para
#linux, android y otras plataformas
