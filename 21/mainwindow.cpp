#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myglwidget.h"
#include <QPainter>
#include <QGridLayout>
#include <QPushButton>
#include <queue>
#include <iostream>

using namespace std;
vector <vector<int>> mat = { {0, 0, 13, 15, 0, 0 },
                             {28, 0, 0, 20, 0, 0 },
                             {0, 0, 0, 0, 30, 0 },
                             {0, 0, 0, 0, 39, 31 },
                             {0, 21, 0, 39, 0, 0 },
                             {18, 0, 0, 0, 0, 0 } };
int result[6] = { INT_MAX, INT_MAX, INT_MAX, INT_MAX,INT_MAX, INT_MAX };
bool visited[6] = { 0, 0, 0, 0, 0, 0 };
void Dejkstra();

MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Dejkstra();
    myGLWidget *openGLW=new myGLWidget(this);
    QGridLayout *grid=new QGridLayout();
    grid->addWidget(openGLW,0,0);
    ui->centralwidget->setLayout(grid);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void Dejkstra()
{
    int top = 0; //вершина с номером 1
    queue<int> line;
    line.push(top);
    result[0] = 0;
    while (!line.empty()) {
        int vertex = line.front();
        line.pop();
        for (int i = 0; i < mat[vertex].size(); i++) {
            if (!visited[i] && mat[vertex][i] && (mat[vertex][i] + result[vertex] < result[i])) {
                result[i] = mat[vertex][i] + result[vertex];
                line.push(i);
            }
        }
    }
    for (int i = 0; i < 6; i++) {
        cout << i + 1 << ": " << result[i] << endl;
    }
}
