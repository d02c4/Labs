#include "mypainter.h"
#include <QPaintEvent>
#include <QPainter>
#include <QWidget>
#include <QtCore/qmath.h>
#include <QtMath>


int num=6;        //кол-во узлов в графе
int R=200;        //радиус графа
int r=30;         //радиус узла

int HeightText=20;
int xa=400;       //отступ по вертикали
int ya=300;       //отступ по горизонтали


int matrix[6][6]={ {0, 0, 13, 15, 0, 0 },
                   {28, 0, 0, 20, 0, 0 },
                   {0, 0, 0, 0, 30, 0 },
                   {0, 0, 0, 0, 39, 31 },
                   {0, 21, 0, 39, 0, 0 },
                   {18, 0, 0, 0, 0, 0 } };


myPainter::myPainter()
{
    // цвет для нод
    front=QBrush(QColor(255,200,44));


    // цвет для фона
    back=QBrush(QColor(255,255,255));


    // цвет для текста
    textPen=QPen(QColor(0,0,0));

    glFont.setPixelSize(HeightText);
}
void myPainter::draw(QPainter *painter, QPaintEvent *event)
{
    painter->fillRect(event->rect(),back);
    painter->setBrush(front);
    painter->setPen(textPen);
    painter->setFont(glFont);
    textPen.setWidth(2);
    for (int i=0;i<num;i++)
    {
        double a=M_PI*3/2+M_PI*2/num*i;
        int xc=cos(a)*R+xa;         //координата узла по x
        int yc=sin(a)*R+ya;         //координата узла по y
        int const1=xc-20;               //координаты текста
        int const2=yc-HeightText/2;
        int const3=40;
        int const4=HeightText;
        QString text; text.setNum(i+1);
        painter->drawEllipse(QRectF(xc-r,yc-r,2*r,2*r));
        painter->drawText(QRect(const1,const2,const3,const4),Qt::AlignCenter,text);
        for (int k=0;k<num;k++)
        {
            if (matrix[i][k]!=0)
            {
                //линия
                double a2=M_PI*3/2+M_PI*2/num*k;
                double xc2=cos(a2)*R+xa;
                double yc2=sin(a2)*R+ya;
                double l=sqrt((xc2-xc)*(xc2-xc)+(yc2-yc)*(yc2-yc));
                int xl1=(xc2-xc)/l*r+xc;
                int yl1=(yc2-yc)/l*r+yc;
                int xl2=xc2-(xc2-xc)/l*r;
                int yl2=yc2-(yc2-yc)/l*r;
                painter->drawLine(xl1,yl1,xl2,yl2);
                //текст
                const1=(xl2+xl1)/2-20 + 10;
                const2=(yl2+yl1)/2-HeightText/2 + 10;
                const3=40;
                const4=HeightText;
                text.setNum(matrix[i][k]);
                painter->drawText(QRect(const1,const2,const3,const4),Qt::AlignCenter,text);
            }
        }
    }

}


