TEMPLATE = app

QT += qml quick

SOURCES += main.cpp

RESOURCES += qml.qrc

QML2_IMPORT_PATH=Modules
# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =Modules

# Default rules for deployment.
include(deployment.pri)
