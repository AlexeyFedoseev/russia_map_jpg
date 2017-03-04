#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "city.h"
#include "scene.h"
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QImage>
#include <QDebug>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QImage image(":/karta_rossii.jpg");
    QGraphicsScene* scene = new QGraphicsScene;
    QGraphicsView* view = new QGraphicsView(scene);
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(image));
    scene->addItem(item);
    //view->show();
    ui->centralWidget->layout()->addWidget(view);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    mousePressEvent(event);
}

void MainWindow::openCityWindow(QMouseEvent *event)
{
    City c;
    if(event->x() <= 391 && event->x() >= 375 && event->y() <= 658 && event->y() >= 645){
        c.show();
    }
}
