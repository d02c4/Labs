#pragma once 
#include <string> 
#include <iostream> 
using namespace std; 
class PERSON
{
//конструктор без параметров 
public:
	PERSON(void); 
public:
	//деструктор

	virtual ~PERSON(void);

	//констрктор с параметрами 
	PERSON(string,int);

	//конструктор копирования 
	PERSON(const PERSON&);

	//Геттеры
	string Get_name() 
	{ 
		return name; 
	} 
	int Get_age() 
	{ 
		return age; 
	}

	//Сеттеры
	void Set_name(string); 
	void Set_age(int); 

	//перегрузка операции присваивания 
	PERSON& operator=(const PERSON&);

	//глобальные операторы-функции ввода-вывода
	friend istream& operator>>(istream& in, PERSON& c); 
	friend ostream& operator<<(ostream& out, const PERSON& c);

	//атрибуты 
protected:
	string name; 
	int age;
};
