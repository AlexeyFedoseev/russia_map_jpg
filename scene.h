#ifndef SCENE_H
#define SCENE_H

#include <QGraphicsScene>
#include <QMouseEvent>

class Scene : public QGraphicsScene
{
    Q_OBJECT

    public:
    mousePressEvent(QMouseEvent *event);
};

#endif // SCENE_H
