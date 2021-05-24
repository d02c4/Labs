#include "kommi_main.h"
#include "ui_kommi_main.h"
#include <QVector>
#include <QDebug>
#include <QtMath>
#include <QChar>


QVector<QVector<int>> table_vector;
QVector<QVector<int>> copy_table_vector;
QVector<mark_for_zero> way;
int number_of_top = 0;
QString result_text = "";

int radiusR1 = 25; // радиус круга
int radiusR2 = 200; // радиус окружности вокруг которой формируются круги


int centerX = 0;
int centerY = 0;


kommi_main::kommi_main(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::kommi_main)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/res/1.png"));
    setWindowTitle("Задача Коммивояжера");
    this->setWindowFlags(this->windowFlags() | Qt::MSWindowsFixedSizeDialogHint);
}

kommi_main::~kommi_main()
{
    delete ui;
}

int kommi_main::way_from_to(int i, int j)
{
    if(i >= 0 && i < table_vector.size() && j >= 0 && j < table_vector[i].size())
    {
        return table_vector[i][j];
    }
    else
    {
        return 0;
    }
}


void kommi_main::way_line()
{
    QPen pen(Qt::white);
    pen.setWidth(3);
    double iter = 2 * M_PI / copy_table_vector.size();
    int count = 0;
    print_way();
    for(int k = 0; k < way.size(); k++)
    {
        for (int i = 0; i < copy_table_vector.size(); i++){
            for (int j = 0; j < copy_table_vector.size(); j++){
                if (way_from_to(i, j) > 0)
                {
                    if(way[k].i == i && way[k].j == j)
                    {
                        // первая точка прямой
                        int dot_1_x = centerX + cos(iter * i) * radiusR2;
                        int dot_1_y = centerY - sin(iter * i) * radiusR2;
                        // вторая точка прямой
                        int dot_2_x = centerX + cos(iter * j) * radiusR2;
                        int dot_2_y = centerY - sin(iter * j) * radiusR2;
                        QGraphicsItem *line = scene->addLine(dot_1_x, dot_1_y, dot_2_x, dot_2_y, pen);
                        scene->addItem(line);
                        QGraphicsTextItem *number = scene->addText(QString::number(way_from_to(i, j)), QFont("Snap ITC"));
                        // поставить цифру посередине линии
                        number->setPos((dot_1_x + dot_2_x) / 2, (dot_1_y + dot_2_y) / 2);
                    }

                }
            }
        }
    }
    // красим начальный элемент
    pen.setColor(Qt::black);
    QBrush brush;
    brush.setColor(Qt::yellow);
    brush.setStyle(Qt::FDiagPattern);
    QGraphicsItem *node = scene->addEllipse(centerX + cos(iter * way[0].i) * radiusR2 - radiusR1, centerY - sin(iter * way[0].i) * radiusR2 - radiusR1, 2*radiusR1, 2*radiusR1, pen, brush);
    scene->addItem(node);

    QGraphicsTextItem *number2 = scene->addText(QString::number(way[0].i+1), QFont("Snap ITC"));
    number2->setPos(centerX + cos(iter * way[0].i) * radiusR2 - radiusR1/2, centerY - sin(iter * way[0].i) * radiusR2 - radiusR1);
}


void kommi_main::DrawLines(QGraphicsScene* scene)
{
    centerX = scene->width() / 2;
    centerY = scene->height() / 2;
    QPen pen(Qt::darkCyan);
    pen.setWidth(3);
    double phi = 2 * M_PI / copy_table_vector.size();
    for (int i = 0; i < copy_table_vector.size(); i++){
        for (int j = 0; j < i; j++){
            if (way_from_to(i, j) > 0)
            {
                // первая точка прямой
                int dot_1_x = centerX + cos(phi * i) * radiusR2;
                int dot_1_y = centerY - sin(phi * i) * radiusR2;
                // вторая точка прямой
                int dot_2_x = centerX + cos(phi * j) * radiusR2;
                int dot_2_y = centerY - sin(phi * j) * radiusR2;
                QGraphicsItem *line = scene->addLine(dot_1_x, dot_1_y, dot_2_x, dot_2_y, pen);
                scene->addItem(line);
                QGraphicsTextItem *number = scene->addText(QString::number(way_from_to(i, j)), QFont("Snap ITC"));
                // поставить цифру посередине линии
                number->setPos((dot_1_x + dot_2_x) / 2, (dot_1_y + dot_2_y) / 2);
            }
        }
    }
}

void kommi_main::DrawTops(QGraphicsScene* scene)
{
    double phi = 2 * M_PI / copy_table_vector.size();
    QPen pen(Qt::black);
    pen.setWidth(3);
    for (int i = 0; i < copy_table_vector.size(); i++)
    {
        QBrush brush;
        brush.setColor(Qt::gray);
        brush.setStyle(Qt::SolidPattern);
        QGraphicsItem *node = scene->addEllipse(centerX + cos(phi * i) * radiusR2 - radiusR1, centerY - sin(phi * i) * radiusR2 - radiusR1, 2*radiusR1, 2*radiusR1, pen, brush);
        scene->addItem(node);

        QGraphicsTextItem *number = scene->addText(QString::number(i+1), QFont("Snap ITC"));
        number->setPos(centerX + cos(phi * i) * radiusR2 - radiusR1/2, centerY - sin(phi * i) * radiusR2 - radiusR1);
    }
}



void kommi_main::print_vector(QVector<QVector<int>> other)
{
    qDebug() << "===================================";
    for(int i = 0; i < other.size(); i++)
    {
            qDebug() << other[i];
    }
    qDebug() << "===================================";
}

int k1 = 0;
QVector<int> length_vector;
void kommi_main::result_way()
{

    mark_for_zero cur = way[0];
    QString result = QString::number(cur.i + 1) + "->" + QString::number(cur.j + 1);
    int count = 1;
    int len = 0;
    while (count < way.size()) {
        for (int i = 0; i < way.size(); i++) {
            mark_for_zero next = way[i];
            if (cur.j == next.i) {
                result += "->" + QString::number(next.j + 1);
                cur = next;
                count++;
                break;
            }

        }
    }
    ui->result->setText(result);
    int sum_length = 0;
    for(int i = 0; i < way.size(); i++)
    {
        sum_length += table_vector[way[i].i][way[i].j];
    }
    qDebug() << sum_length;
    ui->length_text->setText(QString::number(sum_length));


    qDebug() << result;


}


void kommi_main:: read_table()
{
    for(int i = 0; i < ui->table->rowCount(); i++)
    {
        QVector<int> help_vector;
        for(int j = 0; j < ui->table->columnCount(); j++)
        {
            QString tmp = ui->table->item(i,j)->text();
            if(tmp != "M")
            {
               help_vector.push_back(tmp.toInt());
            }
            else
            {
               help_vector.push_back(-1);
            }

        }
        table_vector.push_back(help_vector);
    }
}

void kommi_main::reduction_rows()
{
    // изначально задаем максимальное значение минимуму
    //  переменная для прохождения по длинне
    for(int i = 0; i < copy_table_vector.size(); i++)
    {
        int min = INT_MAX;
        for(int j = 0; j < copy_table_vector.size(); j++)
        {
            if(copy_table_vector[i][j] < min && copy_table_vector[i][j] >= 0)
            {
                min = copy_table_vector[i][j];
            }
        }

        if(min != INT_MAX)
        {
            for (int j = 0; j < copy_table_vector.size(); j++) {
                if (copy_table_vector[i][j] >= 0)
                    copy_table_vector[i][j] -= min;
            }

        }
    }
}

void kommi_main::reduction_cols()
{
    // изначально задаем максимальное значение минимуму
    //  переменная для прохождения по длинне
    for(int i = 0; i < copy_table_vector.size(); i++)
    {
        int min = INT_MAX;
        for(int j = 0; j < copy_table_vector.size(); j++)
        {
            if(copy_table_vector[j][i] < min && copy_table_vector[j][i] >= 0)
            {
                min = copy_table_vector[j][i];
            }
        }
        //заполняем массив минимумов
        if(min != INT_MAX)
        {
            for (int j = 0; j < copy_table_vector.size(); j++) {
                if (copy_table_vector[j][i] >= 0)
                    copy_table_vector[j][i] -= min;
            }
        }
    }
}


int kommi_main::calculating_mark(int i, int j)
{
    int sum_min = 0;
    int min = INT_MAX;
    // ищем минимум по строке
    for(int a = 0; a < copy_table_vector.size(); a++)
    {
        if(copy_table_vector[i][a] >= 0 && min > copy_table_vector[i][a] && j != a)
        {
            min = copy_table_vector[i][a];
        }
    }
    sum_min += min == INT_MAX ? 0 : min;
    min = INT_MAX;
    for(int a = 0; a < copy_table_vector[i].size(); a++)
    {
        if(copy_table_vector[a][j] >= 0 && min > copy_table_vector[a][j] && i != a)
        {
            min = copy_table_vector[a][j];
        }
    }
    sum_min += min == INT_MAX ? 0 : min;
    return sum_min;
}

// включение пути
void kommi_main::include_path(mark_for_zero max)
{
    for(int i = 0; i < copy_table_vector.size(); i++)
    {
        copy_table_vector[max.i][i] = -1;
        copy_table_vector[i][max.j] = -1;
    }
    copy_table_vector[max.j][max.i] = -1;
    way.push_back(max);
}


void kommi_main::find_marks()
{
    // создаем объект структуры
    mark_for_zero max {-1, -1, -1};
    for(int i = 0; i < copy_table_vector.size(); i++)
    {
        for(int j = 0; j < copy_table_vector[i].size(); j++)
        {
            if(copy_table_vector[i][j] == 0)
            {
                int tmp = calculating_mark(i, j);
                if(tmp > max.mark)
                {
                    // запоминаем ноль с максимальной оценкой
                    max.i = i;
                    max.j = j;
                    max.mark = tmp;
                }
            }
        }
    }

    // нули не были найдены
    if(max.i == -1 && max.j == -1)
    {
        number_of_top = 0;
        return;
    }
    else
    {
        include_path(max);
    }
}

//===========================================================
int k = 0;
void kommi_main::print_way()
{
    for (int i = 0; i < way.size(); i++) {
        qDebug() << way[i].i << "->" << way[i].j;
    }

}
//===========================================================
void kommi_main::Kommi()
{
    for(int i = 0; i < copy_table_vector.size(); i++)
    {
        reduction_rows();
        reduction_cols();
        print_vector(copy_table_vector);
        find_marks();
    }
    print_vector(copy_table_vector);

    print_way();
}


void kommi_main::on_pushButton_released()
{
    table_vector.clear();
    copy_table_vector.clear();
    way.clear();
    result_text = "";
    // чтение таблицы
    read_table();
    copy_table_vector = table_vector;
    print_vector(copy_table_vector);
    result_text = QString::number(number_of_top);
    Kommi();// вызов главной функции подсчета
    scene = new QGraphicsScene;
    ui->graphicsView->setScene(scene);
    DrawLines(scene);
    DrawTops(scene);
    result_way();
    way_line();
}

