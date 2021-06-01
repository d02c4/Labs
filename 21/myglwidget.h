#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H
#include "mypainter.h"
#include <QOpenGLWidget>

class myGLWidget : public QOpenGLWidget
{
    Q_OBJECT
public:
    myGLWidget( QWidget *parent);
public slots:
protected:
    void paintEvent(QPaintEvent *event) override;
private:
    myPainter *mypainter;
};

#endif // MYGLWIDGET_H
