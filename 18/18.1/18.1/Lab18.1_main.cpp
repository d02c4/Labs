#include <iostream>
#include "fruction.h"
using namespace std;

fraction make_fraction(double F, int S)
{
	fraction t;//создали временную переменную
	t.Init(F, S);//инициализировали поля переменной t с помощью параметров функции 
	return t;//вернули значение переменной t
}

int main()
{
	system("chcp 1251>nul");
	setlocale(LC_ALL, "Ru");
	//определение переменных А и В 
	fraction A;
	fraction B;
	A.Init(2.0, 4);//инициализация переменной А
	B.Read();//ввод полей переменных В 
	A.Show();//вывод значений полей переменной А 
	B.Show();//вывод значений полей переменной В
	fraction* X = new fraction;//выделение памяти под динамическую переменную 
	int j = X->EnterJ();


	//вывод значения степени, вычисленного с помощью функции element(j)
	cout << "A.element(" << A.getFirst() << "," << A.getSecond() << ")=" << A.element(j) << endl;
	cout << "B.element(" << B.getFirst() << "," << B.getSecond() << ")=" << B.element(j) << endl;


	//указатели
	X->Init(2.0, 5);//инициализация
	X->Show();//вывод значений полей 
	X->element(j);//вычисление j элемента
	cout << "X.element(" << X->getFirst() << "," << X->getSecond() << ")=" << X->element(j) << endl;
	//массивы
	fraction mas[3];//определение массива 
	for (int i = 0; i < 3; i++)
		mas[i].Read();//чтение значений полей for (i=0;i<3; i++)
	for (int i = 0; i < 3; i++)
		mas[i].Show(); //вывод значений полей 
	for (int i = 0; i < 3; i++)
	{
		mas[i].element(j); //вычисление степени 
		cout << "mas[" << i << "].element(" << mas[i].getFirst() << "," << mas[i].getSecond() << ")=";
		cout << mas[i].element(j) << endl;
	}


	//динамические масивы
	fraction* p_mas = new fraction[3];//выделение памяти 
	for (int i = 0; i < 3; i++)
		p_mas[i].Read();//чтение значений полей 
	for (int i = 0; i < 3; i++)
		p_mas[i].Show();//вывод значений полей
	for (int i = 0; i < 3; i++)
	{
		p_mas[i].element(j);//вычисление степени 
		cout << "p_mas[" << i << "].element(" << p_mas[i].getFirst() << "," << p_mas[i].getSecond();
		cout << ")=" << p_mas[i].element(j) << endl;
	}
	//вызов функции make_fraction() 
	double y;
	int z;
	cout << "first?"; cin >> y;
	cout << "second?"; cin >> z;
	//переменная F формируется с помощью функции make_fraction() 
	fraction F = make_fraction(y, z);
	F.Show();
	return 0;
}
