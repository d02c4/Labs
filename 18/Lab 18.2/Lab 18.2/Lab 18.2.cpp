#include "Tovar.h" 
#include <iostream> 
#include <string> 
using namespace std;


//функция для возврата объекта как результата 
Salary make_tovar()
{
	string s; 
	int i; 
	double d;
	cout << "Введите ФИО:\t"; 
	cin.ignore();
	getline(cin, s);
	cout << "Введите премию:\t";
	cin >> i;
	while (i < 0)
	{
		cout << "Введите премию:\t";
		cin >> i;
	}
	cout << "Введите Prize: "; 
	cin >> d;
	while (d < 0)
	{
		cout << "Введите Prize: ";
		cin >> d;
	}
	Salary t(s, i, d); return t;
}


//функция для передачи объекта как параметра 
void print_tovar(Salary t)
{
	t.show();
}


void main()
{
	system("chcp 1251>nul");
	setlocale(LC_ALL, "Ru");
	//конструктор без параметров 
	Salary t1;
	t1.show();

	//коструктор с параметрами 
	Salary t2("Чувашев Максим Алексеевич", 1,15000); 
	t2.show();

	//конструктор копирования 
	Salary t3(t2);
	t3.set_FIO("Исламов Ильназ Максимович"); 
	t3.set_Oklad(53800); 
	t3.set_Prize(10500.0);

	//печать через конструктор копирования 
	print_tovar(t3);

	//конструктор копирования 
	t1=make_tovar(); 
	t1.show();
}
