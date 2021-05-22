#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_credit_clicked();

    void on_pushButton_dot_clicked();

    void on_radioButton_annu_clicked();

    void on_pushButton_clear_clicked();

    void radio_button_select();

    void digits_numbers();

    void on_radioButton_Diff_clicked();

    void on_pushButton_backspace_clicked();

    void on_pushButton_equal_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
