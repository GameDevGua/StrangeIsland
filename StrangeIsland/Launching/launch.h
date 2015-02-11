#ifndef LAUNCH_H
#define LAUNCH_H


#include <QQmlApplicationEngine>

class Launch
{
protected :
    QQmlApplicationEngine engine;

public:
    Launch();
    ~Launch();

    void startEngine();
};

#endif // LAUNCH_H
