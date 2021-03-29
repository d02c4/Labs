#include<iostream>
#include"fruction.h"

// реализация метода для инициализации полей структуры
using namespace std;
void fraction::Init(double F, int S)
{
	first = F;
	second = S;
}

//реализация метода для чтения значений полй структуры
void fraction::Read()
{
	cout << "\nfirst?";
	cin >> first;
	cout << "\nsecond?";
	cin >> second;
}

// реализация метода для вывода значений полей структуры
void fraction::Show()
{
	cout << "\nfirst  = " << first;
	cout << "\nsecond = " << second;
	cout << endl;
}

// метод для возведения в степень
double fraction::element(int j)
{
	return first * pow(second, j);
}

// ввод индекса желаемого элемента
int fraction::EnterJ()
{
	int j;
	cout << "Какой элемент прогрессии вы хотите вывести?" << endl;
	cin >> j;
	while (j < 0)
	{
		cout << "Какой элемент прогрессии вы хотите вывести?" << endl;
		cin >> j;
	}
	return j;
}
