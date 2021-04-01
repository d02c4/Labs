#include "PERSON.h"
//конструктор без параметров 
PERSON::PERSON()
{
	name = "";
	age = 0;
}
//деструктор 
PERSON::~PERSON()
{

}

//конструктор с параметрами 
PERSON::PERSON(string M, int C)
{
	name = M;
	age = C;
}
//конструктор копирования 
PERSON::PERSON(const PERSON& person)
{
	name = person.name;
	age = person.age;
}
//модификаторы
void PERSON::Set_age(int C)
{
	age = C;
}
void PERSON::Set_name(string M)
{
	name = M;
}

//перегрузка операции присваивания 
PERSON& PERSON::operator=(const PERSON& c)
{
	if (&c == this)return *this;
	name = c.name;
	age = c.age;
	return *this;
}
//глобальная функция для ввода 
istream& operator>>(istream& in, PERSON& c)
{
	cout << "\nName:";
	in >> c.name;
	cout << "\nAge:";
	in >> c.age;
	while (c.age < 14 || c.age > 40)
	{
		cout << "\nНе уверен что в таком возрасте учатся в университете\n";
		cout << "\nAge:";
		in >> c.age;
	}
	return in;
}

//глобальная функция для вывода
ostream& operator<<(ostream& out, const PERSON& c)
{
	out << "\nName : " << c.name;
	out << "\nAge : " << c.age;
	return out;
}


void PERSON::Show()
{
	cout << "\nName : " << this->name << endl;
	cout << "\nAge : " << this->age << endl;
	cout << "\n";
}
