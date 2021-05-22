#ifndef DIFF_CRED_CLASS_H
#define DIFF_CRED_CLASS_H


class Diff_Cred_Class
{
private:
    int number_pay = 0; // номер платежа
    double Payment_amount = 0; // сумма платежа
    double Principal_debt = 0; // основной долг
    double Accrued_interest = 0; // начисленные проценты
    double Outstanding_balance = 0; // остаток задолженности
    double Sum_pay = 0; // сумма выплаты
    int mounth = 0; // количество месяцев для кредита
    double interest_rate = 0; // процентная ставка
public:
    Diff_Cred_Class();

    // геттеры
    int get_number_pay();
    double get_Payment_amount();
    double get_Principal_debt();
    double get_Accrued_interest();
    double get_Outstanding_balance();
    double get_Sum_pay();

    // сеттеры
    void set_number_pay(int);
    void set_Payment_amount(double);
    void set_Principal_debt(double);
    void set_Accrued_interest(double);
    void set_Outstanding_balance(double);
    void set_Sum_pay(double);

};

#endif // DIFF_CRED_CLASS_H
