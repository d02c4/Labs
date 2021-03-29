#include "Pair.h" 
#include <iostream> 
using namespace std;

double InitConst()
{
	double constant;
	cout << "Введите константу которую хотите добавить:\t";
	cin >> constant;
	return constant;
}

void main()
{
	setlocale(LC_ALL, "Ru");
	Pair a;//конструктор без параметров 
	Pair b; //конструктор без параметров 
	Pair c; //конструктор без параметров 
	cin>>a;//ввод переменной 
	cin>>b;//ввод переменной
	cout<<a<<endl;//вывод переменной
	c = a - b;// вычитание двух объектов класа
	cout << "a=" << a << endl; //вывод переменной 
	cout << "b=" << b << endl; //вывод переменной 
	cout << "c=\t" << c << endl; //вывод переменной
	c = c + InitConst();
	cout<<"c="<<c<<endl; //вывод переменной
}
