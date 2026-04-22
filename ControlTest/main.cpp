#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "./lib/controllerbackend.h"

#include "NewController/newcontroller.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication app(argc, argv);

    ControllerBackend controllerBackend(50, "Zsdnw82iuw");

    NewController controller;

    QQmlApplicationEngine engine;

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);

    engine.rootContext()->setContextProperty("plant", &controllerBackend);

    QObject::connect(&controllerBackend, &ControllerBackend::outputBytesChanged,
                     &controller, &NewController::processMessage);

    QObject::connect(&controller, &NewController::computed,
                     &controllerBackend, &ControllerBackend::setInput);

    engine.load(url);


    return app.exec();
}
