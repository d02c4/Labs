#pragma once

#include <iostream> 
#include <string> 
using namespace std; 

class Salary
{
//атрибуты
private:
	string FIO; 
	int Oklad; 
	double Prize;
public:
	Salary();//конструктор без параметров
	Salary(string, int, double);//конструктор с параметрами 
	Salary(const Salary&);//конструктор копирования
	~Salary();//деструктор
	string get_FIO();//селектор
	void set_FIO(string);//модификатор 
	int get_Oklad();//селектор
	void set_Oklad(int); //модификатор 
	double get_Prize();//селектор
	void set_Prize(double); //модификатор 
	void show();//просмотр атрибутов
};

