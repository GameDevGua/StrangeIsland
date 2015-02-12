#include "launch.h"
#include <QQmlApplicationEngine>


//The Launch class allows to launch the window of the qml of the application

Launch::Launch()
{


}

Launch::~Launch()
{

}

//The startEngine() method start the qml :
void Launch::startEngine()
{
    //engine is a "QQmlApplicationEngine" object with which we can launch load the qml:
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
}

