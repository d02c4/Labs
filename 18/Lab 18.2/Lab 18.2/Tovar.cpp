#include "Tovar.h"
#include <iostream> 
#include <string> 
using namespace std;


//конструктор без параметров 
Salary::Salary()
{
	setlocale(LC_ALL, "Ru");
	FIO = ""; 
	Oklad = 0; 
	Prize = 0;
	cout << "Конструктор без параметров для объекта:\t" << this << endl;
}


//конструктор с параметрами 
Salary::Salary(string N, int K, double S)
{
	setlocale(LC_ALL, "Ru");
	FIO = N; 
	Oklad = K; 
	Prize = S;
	cout << "Конструктор с параметрами для объекта:\t" << this << endl;
}


//конструктор копирования 
Salary::Salary(const Salary &other)
{
	setlocale(LC_ALL, "Ru");
	FIO = other.FIO;
	Oklad = other.Oklad; 
	Prize = other.Prize;
	cout << "Конструктор копирования для объекта:\t" << this << endl;
}


//деструктор 
Salary::~Salary()
{
	setlocale(LC_ALL, "Ru");
	cout << "Деструктор для объекта:\t" << this << endl;
}


//селекторы
string Salary::get_FIO()
{
	return FIO;
}


int Salary::get_Oklad()
{
	return Oklad;
}


double Salary::get_Prize()
{
	return Prize;
}


//модификаторы
void Salary::set_FIO(string N)
{
	FIO = N;
}


void Salary::set_Oklad(int K)
{
	Oklad = K;
}


void Salary::set_Prize(double S)
{
	Prize = S;
}


//метод для просмотра атрибутов 
void Salary::show()
{
	setlocale(LC_ALL, "Ru");
	cout << "Наименование:\t" << FIO << endl; 
	cout << "Количество:\t" << Oklad << endl; 
	cout << "Prize:\t" << Prize << endl;
}
