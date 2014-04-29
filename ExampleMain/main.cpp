#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.addImportPath(QStringLiteral("/home/ale/src/qt/example/Modules/"));
    engine.load(QUrl(QStringLiteral("qrc:///main.qml")));

    return app.exec();
}
