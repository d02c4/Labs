#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <dialog.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Dialog *credit_window; // указатель на новое окно


private slots:
    void digits_numbers();
    void on_pushButton_dot_clicked();
    void operations();
    void math_operations();
    void on_pushButton_clear_clicked();
    void on_pushButton_equal_clicked();

    void on_pushButton_backspace_clicked();
    void on_pushButton_credit_clicked();
};
#endif // MAINWINDOW_H
