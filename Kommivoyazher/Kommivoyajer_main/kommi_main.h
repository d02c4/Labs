#ifndef KOMMI_MAIN_H
#define KOMMI_MAIN_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QPen>
#include <QBrush>
#include <QFont>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class kommi_main; }
QT_END_NAMESPACE




struct mark_for_zero
{
    int i;
    int j;
    int mark;
};

class kommi_main : public QMainWindow
{
    Q_OBJECT

public:
    kommi_main(QWidget *parent = nullptr);
    ~kommi_main();

private slots:
    void on_pushButton_released();
    void read_table();
    void Kommi();
    void reduction_rows();
    void reduction_cols();
    void find_marks();
    int calculating_mark(int, int);
    void include_path(mark_for_zero itm);
    void result_way();
    void print_vector(QVector<QVector<int>> other);
    void print_way();
    void DrawTops(QGraphicsScene* scene);
    int way_from_to(int, int);
    void DrawLines(QGraphicsScene* scene);
    void way_line();

private:
    Ui::kommi_main *ui;
    QGraphicsScene *scene;
};
#endif // KOMMI_MAIN_H
