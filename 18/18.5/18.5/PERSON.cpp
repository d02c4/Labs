#include "Person.h"
#include <string>
#include <iostream>
using namespace std;


PERSON::PERSON()
{
	name = "";
	age = 0;
}

PERSON::PERSON(string name, int age)
{
	this->name = name;
	this->age = age;
}

PERSON::PERSON(const PERSON& person)
{
	this->age = person.age;
	this->name = person.name;
}

PERSON& PERSON::operator=(const PERSON& copyObject)
{
	if (&copyObject == this) return *this;
	age = copyObject.age;
	name = copyObject.name;
	return *this;
}



void PERSON::Show()
{
	cout << "Данные о человеке" << endl;
	cout << "Имя " << Get_name() << endl;
	cout << "Возраст " << Get_age() << endl;
}


istream& operator>>(istream& in, PERSON& p)
{
	cout << "\nName:";
	in >> p.name;

	cout << "\nAge:";
	in >> p.age;
	return in;
}

ostream& operator<<(ostream& out, const PERSON& p)
{
	out << "\nName : " << p.name;
	out << "\nAge : " << p.age;
	out << "\n";
	return out;
}




