#include "scene.h"
#include "mainwindow.h"

Scene::Scene() : QGraphicsScene()
{

}

Scene::mousePressEvent(QMouseEvent *event)
{
    qDebug() << event->x();
    qDebug() << event->y();
    openCityWindow(event);
}
