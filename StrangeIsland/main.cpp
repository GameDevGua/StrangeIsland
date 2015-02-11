#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "Launching/launch.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);


    //creation of a Launch object :
    Launch launchApplication;


    //we launch the application using the startEngine() methode of LaunchApplication :
    launchApplication.startEngine();

    return app.exec();
}
