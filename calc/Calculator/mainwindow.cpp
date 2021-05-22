#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QShortcut>
#include <dialog.h>
#include <QSound>
#include <QMessageBox>



// число хранящее первое число которое введено пользователем
double num_first;

// флаг для того, чтобы сбрасывать значения полей
static bool f = false;



QString memory = nullptr;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //иконка окна
    setWindowIcon(QIcon(":/ico/res/ico/calculator.png"));

    //имя окна
    setWindowTitle("Калькулятор");


    connect(ui->pushButton_0, &QPushButton::clicked, this, &MainWindow::digits_numbers);
    connect(ui->pushButton_1, &QPushButton::clicked, this, &MainWindow::digits_numbers);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::digits_numbers);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::digits_numbers);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::digits_numbers);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &MainWindow::digits_numbers);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &MainWindow::digits_numbers);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &MainWindow::digits_numbers);
    connect(ui->pushButton_8, &QPushButton::clicked, this, &MainWindow::digits_numbers);
    connect(ui->pushButton_9, &QPushButton::clicked, this, &MainWindow::digits_numbers);


    // действия
    connect(ui->pushButton_plus_minus, &QPushButton::clicked, this, &MainWindow::operations);
    connect(ui->pushButton_percent, &QPushButton::clicked, this, &MainWindow::operations);

    // арифметические действия
    connect(ui->pushButton_multiply, &QPushButton::clicked, this, &MainWindow::math_operations);
    connect(ui->pushButton_divide, &QPushButton::clicked, this, &MainWindow::math_operations);
    connect(ui->pushButton_plus, &QPushButton::clicked, this, &MainWindow::math_operations);
    connect(ui->pushButton_minus, &QPushButton::clicked, this, &MainWindow::math_operations);

    ui->pushButton_multiply->setCheckable(true);
    ui->pushButton_divide->setCheckable(true);
    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);



    this->setWindowFlags(this->windowFlags() | Qt::MSWindowsFixedSizeDialogHint);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::digits_numbers()
{
    QSound::play(":/audio/res/sound/main_button.wav");
    QPushButton *button = (QPushButton *)sender();

    double all_numbers;
    QString new_label; // переменная которая будет хранить переведенную строку
    // весь текст из строки приплюсовываем текст кнопки

    if(f == true)
    {
        ui->result_text->setText("0");
        ui->memory_text->setText("");
        f = false;
    }

    if(ui->result_text->text().contains(".") && button->text() == "0")
    {
        new_label = ui->result_text->text() + button->text();
    }
    else
    {
        all_numbers = (ui->result_text->text()+button->text()).toDouble();

        // преобразуем числи  из поля в строку
        // буква e будет появляться только после ввода 15 чисел
        new_label = QString::number(all_numbers, 'g', 15);
    }
    // меняем значение текстового поля на новое
    ui->result_text->setText(new_label);

}

void MainWindow::on_pushButton_dot_clicked()
{
    QSound::play(":/audio/res/sound/main_button.wav");
    // если в строке нет символа '.', то мы можем добавить точку
    if(!(ui->result_text->text().contains('.')))
    {
        ui->result_text->setText(ui->result_text->text() + ".");
    }
}

void MainWindow::operations()
{
    QSound::play(":/audio/res/sound/main_button.wav");
    QPushButton *button = (QPushButton *)sender();
    double all_numbers;
    QString new_label; // переменная которая будет хранить переведенную строку
    // весь текст из строки приплюсовываем текст кнопки

    if(button->text() == "+/-")
    {
        all_numbers = (ui->result_text->text().toDouble());

        ui->memory_text->setText("");

        // меняем знак
        all_numbers = all_numbers * (-1);

        // буква e будет появляться только после ввода 15 чисел
        new_label = QString::number(all_numbers, 'g', 15);
        // меняем значение текстового поля на новое
        ui->result_text->setText(new_label);
    }
    else if(button->text() == "%")
    {
        all_numbers = (ui->result_text->text().toDouble());
        ui->memory_text->setText("");
        // преобразуем в проценты
        all_numbers = all_numbers * (0.01);

        new_label = QString::number(all_numbers, 'g', 15);
        ui->result_text->setText(new_label);
    }

}

void MainWindow::math_operations()
{
    QSound::play(":/audio/res/sound/main_button.wav");
    QPushButton *button = (QPushButton *)sender();


    //започинаем первое число
    num_first = ui->result_text->text().toDouble();
    memory = ui->result_text->text();



    if(button->objectName() == "pushButton_plus")
    {
        memory = memory + " + ";
        ui->memory_text->setText(memory);
    }
    else if(button->objectName() == "pushButton_minus")
    {
        memory = memory + " - ";
        ui->memory_text->setText(memory);
    }
    else if(button->objectName() == "pushButton_multiply")
    {
        memory = memory + " * ";
        ui->memory_text->setText(memory);
    }
    else if(button->objectName() == "pushButton_divide")
    {
        memory = memory + " / ";
        ui->memory_text->setText(memory);
    }

    ui->result_text->setText("0");
    // для проверки на какую кнопку изначально было нажато
    button->setChecked(true);


}




void MainWindow::on_pushButton_clear_clicked()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_multiply->setChecked(false);
    ui->pushButton_divide->setChecked(false);

    ui->memory_text->setText("");
    ui->result_text->setText("0");
}


void MainWindow::on_pushButton_equal_clicked()
{
   QSound::play(":/audio/res/sound/mb_result.wav");
   double label_number, num_second;
   QString new_label;

    num_second = ui->result_text->text().toDouble();

    QString memory_tmp = memory;
    memory = nullptr;
    memory_tmp = memory_tmp + ui->result_text->text();
    memory_tmp = memory_tmp + " = ";
    ui->memory_text->setText(memory_tmp);

    f = true;

   if(ui->pushButton_plus->isChecked())
   {

       label_number = num_first + num_second;
       new_label = QString::number(label_number, 'g', 15);
       ui->result_text->setText(new_label);
       ui->pushButton_plus->setChecked(false);
   }
   else if(ui->pushButton_minus->isChecked())
   {
       label_number = num_first - num_second;
       new_label = QString::number(label_number, 'g', 15);
       ui->result_text->setText(new_label);
       ui->pushButton_minus->setChecked(false);
   }
   else if(ui->pushButton_multiply->isChecked())
   {
       label_number = num_first * num_second;
       new_label = QString::number(label_number, 'g', 15);
       ui->result_text->setText(new_label);
       ui->pushButton_multiply->setChecked(false);
   }
   else if(ui->pushButton_divide->isChecked())
   {
        if(num_second == 0)
        {
            QSound::play(":/audio/res/sound/oh-shit-iam-sorry.wav");
            QMessageBox::critical(this, "Ошибка", "Попытка деления на 0!");
            QSound::play(":/audio/res/sound/sorry-for-what.wav");

            ui->result_text->setText("0");
            ui->memory_text->setText("");

            ui->pushButton_divide->setChecked(false);
        }
        else
        {
           label_number = num_first / num_second;
           new_label = QString::number(label_number, 'g', 15);
           ui->result_text->setText(new_label);
           ui->pushButton_divide->setChecked(false);
        }
   }
}


void MainWindow::on_pushButton_backspace_clicked()
{
    QSound::play(":/audio/res/sound/main_button.wav");
    ui->memory_text->setText("");
    QString str;
    QString strtmp;
    str = ui->result_text->text();
    for(int i =0; i < str.size() - 1; i++)
    {
        strtmp[i] = str[i];
    }
    str.clear();
    str = strtmp;
    if(str.length() < 1)
    {
        ui->result_text->setText("0");
    }
    else
    {
        ui->result_text->setText(str);
    }
    str.clear();
    strtmp.clear();
}


void MainWindow::on_pushButton_credit_clicked()
{
    close();
    credit_window = new Dialog();
    credit_window->show();
}

