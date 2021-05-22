#include "diff_cred_class.h"

Diff_Cred_Class::Diff_Cred_Class()
{

}

int Diff_Cred_Class::get_number_pay()
{
    return this->number_pay;
}

double Diff_Cred_Class::get_Principal_debt()
{
    return this->Principal_debt;
}

double Diff_Cred_Class::get_Accrued_interest()
{
    return this->Accrued_interest;
}

double Diff_Cred_Class::get_Outstanding_balance()
{
    return this->Outstanding_balance;
}


double Diff_Cred_Class::get_Payment_amount()
{
    return this->Payment_amount;
}


double Diff_Cred_Class::get_Sum_pay()
{
    return this->Sum_pay;
}



void Diff_Cred_Class::set_Accrued_interest(double other)
{
    this->Accrued_interest = other;
}


void Diff_Cred_Class::set_Outstanding_balance(double other)
{
    this->Outstanding_balance = other;
}


void Diff_Cred_Class::set_Payment_amount(double other)
{
    this->Payment_amount = other;
}

void Diff_Cred_Class::set_Principal_debt(double other)
{
    this->Principal_debt = other;
}

void Diff_Cred_Class::set_number_pay(int other)
{
    this->number_pay = other;
}

void Diff_Cred_Class::set_Sum_pay(double other)
{
    this->Sum_pay = other;
}

