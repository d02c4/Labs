#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include <QTableWidget>
#include "diff_cred_class.h"
#include <QVector>
#include <vector>
#include <QSound>
#include <mainwindow.h>
#include <QColor>



QString lineText;
QRadioButton *radio_button = nullptr;
QRadioButton *radio_button_cred_select = nullptr;
bool f = false; // флаг для работы равенства
double mounth_count;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //иконка окна
    setWindowIcon(QIcon(":/ico/res/ico/calculator.png"));

    //имя окна
    setWindowTitle("Кредитный калькулятор");

    //создание столбцов таблицы
    ui->table_Diff_cred->setColumnCount(5);
    ui->table_Diff_cred->setHorizontalHeaderLabels(QStringList() << "№ платежа" << "Сумма платежа" << "Основной долг" << "По процентам" << "Остаток долга");

    connect(ui->radioButton_cred, &QRadioButton::clicked, this, &Dialog::radio_button_select);
    connect(ui->radioButton_time, &QRadioButton::clicked, this, &Dialog::radio_button_select);
    connect(ui->radioButton_Percent, &QRadioButton::clicked, this, &Dialog::radio_button_select);


    connect(ui->pushButton_0, &QPushButton::clicked, this, &Dialog::digits_numbers);
    connect(ui->pushButton_1, &QPushButton::clicked, this, &Dialog::digits_numbers);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &Dialog::digits_numbers);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &Dialog::digits_numbers);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &Dialog::digits_numbers);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &Dialog::digits_numbers);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &Dialog::digits_numbers);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &Dialog::digits_numbers);
    connect(ui->pushButton_8, &QPushButton::clicked, this, &Dialog::digits_numbers);
    connect(ui->pushButton_9, &QPushButton::clicked, this, &Dialog::digits_numbers);

    this->setWindowFlags(this->windowFlags() | Qt::MSWindowsFixedSizeDialogHint);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_credit_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}




void Dialog::on_radioButton_annu_clicked()
{
    //определяем какой переключатель выбран
    QRadioButton* ptr = (QRadioButton*)sender();
    if (ptr->objectName() == "radioButton_annu") {
        radio_button_cred_select = ptr;
    }
    // если равно было нажато, заходим в цикл
    if(f == true)
    {
        // проигрывается звук отвечающий за переключатель
        QSound::play(":/audio/res/sound/minecraft_click.wav");

        // удаление возможно существующей таблицы от дифференцированного кредита
        for ( int i = 0; i < ui->table_Diff_cred->rowCount(); i++ )
        {
            ui->table_Diff_cred->removeRow(i);
        }
        ui->table_Diff_cred->setRowCount(0);

        //считывание полей ввода
        double sum_cred = (ui->label_Sum_Cred->text()).toDouble();
        double year_percent = ((ui->label_Percent->text()).toDouble()) * 0.01;
        double mounth_persent = year_percent / 12;
        double time_cred = (ui->label_Date->text()).toDouble();

        //расчитывается месячный платеж по формуле
        double pay_mounth = sum_cred*(mounth_persent + (mounth_persent/((pow((1 + mounth_persent), time_cred)) - 1)));
        QString pay_mount_text = QString::number(pay_mounth, 'f', 2);
        ui->label_mounth_pay->setText(pay_mount_text);

        //расчитывается переплата по формуле
        double pereplata = (pay_mounth * time_cred) - sum_cred;
        QString pereplata_text = QString::number(pereplata, 'f', 2);
        ui->label_pereplata->setText(pereplata_text);

        //расчитывается сколько всего заплатит пользователь по формуле
        double result = pay_mounth * time_cred;
        QString result_text = QString::number(result, 'f', 2);
        ui->label_result->setText(result_text);
        f = false; // сбрасываем флаг
    }

}


void Dialog::radio_button_select()
{
    QSound::play(":/audio/res/sound/minecraft_click.wav");
    radio_button = (QRadioButton *)sender();

}

void Dialog::on_pushButton_dot_clicked()
{
    QSound::play(":/audio/res/sound/main_button.wav");
    if(radio_button != nullptr && radio_button->objectName() == "radioButton_cred")
    {
        // если в строке нет символа '.', то мы можем добавить точку
        if(!(ui->label_Sum_Cred->text().contains('.')))
        {
            ui->label_Sum_Cred->setText(ui->label_Sum_Cred->text() + ".");
        }
    }
    else if(radio_button != nullptr && radio_button->objectName() == "radioButton_Percent")
    {
        // если в строке нет символа '.', то мы можем добавить точку
        if(!(ui->label_Percent->text().contains('.')))
        {
            ui->label_Percent->setText(ui->label_Percent->text() + ".");
        }
    }
}



void Dialog::digits_numbers()
{
    QSound::play(":/audio/res/sound/main_button.wav");
    QPushButton *button = (QPushButton *)sender();
    double all_numbers;
    QString new_label; // переменная которая будет хранить переведенную строку
    // весь текст из строки приплюсовываем текст кнопки
    QLabel template_label;
    if(radio_button != nullptr && radio_button->objectName() == "radioButton_cred")
    {
        if(ui->label_Sum_Cred->text().contains(".") && button->text() == "0")
        {
            new_label = ui->label_Sum_Cred->text() + button->text();
        }
        else
        {
            all_numbers = (ui->label_Sum_Cred->text()+button->text()).toDouble();

            // преобразуем числи  из поля в строку
            // буква e будет появляться только после ввода 15 чисел
            new_label = QString::number(all_numbers, 'g', 15);
        }
        // меняем значение текстового поля на новое
        ui->label_Sum_Cred->setText(new_label);

    }
    else if(radio_button != nullptr && radio_button->objectName() == "radioButton_time")
    {
        if(ui->label_Date->text().contains(".") && button->text() == "0")
        {
            new_label = ui->radioButton_time->text() + button->text();
        }
        else
        {
            all_numbers = (ui->label_Date->text()+button->text()).toDouble();

            // преобразуем числи  из поля в строку
            // буква e будет появляться только после ввода 15 чисел
            new_label = QString::number(all_numbers, 'g', 15);
        }
        // меняем значение текстового поля на новое
        ui->label_Date->setText(new_label);
        mounth_count = ui->label_Date->text().toDouble();
    }
    else if(radio_button != nullptr && radio_button->objectName() == "radioButton_Percent")
    {
        if(ui->label_Percent->text().contains(".") && button->text() == "0")
        {
            new_label = ui->radioButton_Percent->text() + button->text();
        }
        else
        {
            all_numbers = (ui->label_Percent->text()+button->text()).toDouble();

            // преобразуем числи  из поля в строку
            // буква e будет появляться только после ввода 15 чисел
            new_label = QString::number(all_numbers, 'g', 15);
        }
        // меняем значение текстового поля на новое
        ui->label_Percent->setText(new_label);
    }
}



void Dialog::on_radioButton_Diff_clicked()
{
    // определяем какой переключатель выбран
    QRadioButton* ptr = (QRadioButton*)sender();
    if (ptr->objectName() == "radioButton_Diff") {
        radio_button_cred_select = ptr;
    }
    //если равно было нажато
    if(f == true)
    {
        double tmp_Sum_Pay = 0;
        double tmp_pereplata = 0;
        QSound::play(":/audio/res/sound/minecraft_click.wav");

        // очистка возможно заполненных полей другим методом
        ui->label_mounth_pay->setText("0");
        ui->label_pereplata->setText("0");
        ui->label_result->setText("0");

        //если все поля были заполнены, то выполняются вычисления
        if ((ui->label_Date->text().toDouble() != 0) &&(ui->label_Percent->text().toDouble() != 0) && (ui->label_Sum_Cred->text().toDouble()  != 0))
        {
            // считывание данных из полей ввода
            mounth_count = ui->label_Date->text().toDouble();
            ui->table_Diff_cred->setRowCount(mounth_count);
            double credit_balance = ui->label_Sum_Cred->text().toDouble();
            double pay_main_debt = credit_balance / ui->label_Date->text().toDouble();

            // вектор нашего класса для занесения в дальнейшем в таблицу
            std::vector<Diff_Cred_Class> diff_vector; // вектор нашего класса
            for(int i = 1; i <= ui->label_Date->text().toDouble(); i++) // заполнение вектора
            {
                Diff_Cred_Class tmp;
                tmp.set_Accrued_interest(credit_balance*((ui->label_Percent->text().toDouble() * 0.01) / 12)); // Начисленные проценты
                tmp_pereplata += tmp.get_Accrued_interest();
                credit_balance = credit_balance - pay_main_debt;

                tmp.set_number_pay(i); // номер платежа
                tmp.set_Principal_debt(pay_main_debt); // выплата основного долга
                tmp.set_Outstanding_balance(credit_balance); // остаток задолженности
                tmp_Sum_Pay += pay_main_debt + tmp.get_Accrued_interest();
                tmp.set_Sum_pay(pay_main_debt + tmp.get_Accrued_interest()); // суммарная выплата за месяц
                diff_vector.push_back(tmp);
            }
            // заполнение таблицы
            for(int i = 0; i < diff_vector.size(); i++)
            {
                Diff_Cred_Class tmp = diff_vector[i];
                QTableWidgetItem *itm = new QTableWidgetItem(QString::number(tmp.get_number_pay(), 'g', 10));
                itm->setFlags(itm->flags() ^ Qt::ItemIsEditable);
                ui->table_Diff_cred->setItem(i, 0, itm);
                ui->table_Diff_cred->item(i, 0)->setTextAlignment(Qt::AlignCenter);

                itm = new QTableWidgetItem(QString::number(tmp.get_Sum_pay(), 'f', 2));
                itm->setFlags(itm->flags() ^ Qt::ItemIsEditable);
                ui->table_Diff_cred->setItem(i, 1, itm);
                ui->table_Diff_cred->item(i, 1)->setTextAlignment(Qt::AlignCenter);

                itm = new QTableWidgetItem(QString::number(tmp.get_Principal_debt(), 'f', 2));
                itm->setFlags(itm->flags() ^ Qt::ItemIsEditable);
                ui->table_Diff_cred->setItem(i, 2, itm);
                ui->table_Diff_cred->item(i, 2)->setTextAlignment(Qt::AlignCenter);

                itm = new QTableWidgetItem(QString::number(tmp.get_Accrued_interest(), 'f', 2));
                itm->setFlags(itm->flags() ^ Qt::ItemIsEditable);
                ui->table_Diff_cred->setItem(i, 3, itm);
                ui->table_Diff_cred->item(i, 3)->setTextAlignment(Qt::AlignCenter);

                itm = new QTableWidgetItem(QString::number(tmp.get_Outstanding_balance(), 'f', 3));
                itm->setFlags(itm->flags() ^ Qt::ItemIsEditable);
                ui->table_Diff_cred->setItem(i, 4, itm);
                ui->table_Diff_cred->item(i, 4)->setTextAlignment(Qt::AlignCenter);

            }

            ui->label_result->setText(QString::number(tmp_Sum_Pay, 'g', 15));
            ui->label_pereplata->setText(QString::number(tmp_pereplata, 'g', 15));
            ui->label_mounth_pay->setText("-");

        }

            f = false; // сбрасываем флаг
    }


}


void Dialog::on_pushButton_backspace_clicked()
{
    QSound::play(":/audio/res/sound/main_button.wav");
    if(radio_button != nullptr && radio_button->objectName() == "radioButton_cred")
    {
        QString str;
        QString strtmp;
        str = ui->label_Sum_Cred->text();
        for(int i =0; i < str.size() - 1; i++)
        {
            strtmp[i] = str[i];
        }
        str.clear();
        str = strtmp;
        if(str.length() < 1)
        {
            ui->label_Sum_Cred->setText("0");
        }
        else
        {
            ui->label_Sum_Cred->setText(str);
        }
        str.clear();
        strtmp.clear();
    }
    else if(radio_button != nullptr && radio_button->objectName() =="radioButton_time")
    {
        QString str;
        QString strtmp;
        str = ui->label_Date->text();
        for(int i =0; i < str.size() - 1; i++)
        {
            strtmp[i] = str[i];
        }
        str.clear();
        str = strtmp;
        if(str.length() < 1)
        {
            ui->label_Date->setText("0");
        }
        else
        {
            ui->label_Date->setText(str);
        }
        str.clear();
        strtmp.clear();
    }
    else if(radio_button != nullptr && radio_button->objectName() == "radioButton_Percent")
    {
        QString str;
        QString strtmp;
        str = ui->label_Percent->text();

        for(int i =0; i < str.size() - 1; i++)
        {
            strtmp[i] = str[i];
        }
        str.clear();
        str = strtmp;
        if(str.length() < 1)
        {
            ui->label_Percent->setText("0");
        }
        else
        {
            ui->label_Percent->setText(str);
        }
        str.clear();
        strtmp.clear();
    }
}


void Dialog::on_pushButton_clear_clicked()
{
    QSound::play(":/audio/res/sound/main_button.wav");
    ui->label_Sum_Cred->setText("0");
    ui->label_Date->setText("0");
    ui->label_Percent->setText("0");
    ui->label_mounth_pay->setText("0");
    ui->label_pereplata->setText("0");
    ui->label_result->setText("0");

    for ( int i = 0; i < ui->table_Diff_cred->rowCount(); i++ )
    {
        ui->table_Diff_cred->removeRow(i);
    }
    ui->table_Diff_cred->setRowCount(0);
}


void Dialog::on_pushButton_equal_clicked()
{
    QSound::play(":/audio/res/sound/mb_result.wav");
    if(radio_button_cred_select != nullptr && radio_button_cred_select->objectName() == "radioButton_Diff")
    {
        f = true;
        Dialog::on_radioButton_Diff_clicked();
    }
    else if(radio_button_cred_select != nullptr && radio_button_cred_select->objectName() == "radioButton_annu")
    {
        f = true;
        Dialog::on_radioButton_annu_clicked();
    }
}

