#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    //engine.addImportPath(QStringLiteral("../Modules/"));
    engine.addImportPath(QStringLiteral(":/Modules/"));
    engine.load(QUrl(QStringLiteral("qrc:///main.qml")));

    return app.exec();
}
