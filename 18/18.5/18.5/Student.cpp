#pragma once 
#include "PERSON.h"
#include "Object.h"

//класс STUDENT наследуется от класса PERSON 
class STUDENT :public PERSON
{
public:
	STUDENT();//конструктор без параметров 

	~STUDENT();//деструктор 

	void Show();// функция для просмотра атрибутов класса с помощью указателя

	STUDENT(string, int, int, string);//конструктор с параметрами 
	STUDENT(const STUDENT&);//конструктор копирования

	string Get_subject() { return subject; }//модификатор 
	void Set_subject(string);//селектор

	int Get_mark() { return mark; }//модификатор 
	void Set_mark(int);//селектор

	STUDENT& operator=(const STUDENT&);//операция присваивания

	void Check_Mark(const STUDENT&);
	friend istream& operator>>(istream& in, STUDENT& l);//операция ввода
	friend ostream& operator<<(ostream& out, const STUDENT& l); //операция вывода 
protected:
	int mark;//поле оценки студента
	string subject;//поле предмета
};
