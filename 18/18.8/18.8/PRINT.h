#pragma once
#include <iostream>
#include <string>
#include "Events.h"
#include "Object.h"

using namespace std;

class PRINT:public Object
{
protected:
	string name; // поле названия печатного издания
	string author; // поле автора печатного издания
public:
	PRINT(); // конструктор без параметров
	PRINT(string name, string author); // конструктор с параметрами
	PRINT(const PRINT& other); // конструктор копирования
	~PRINT(); // деструктор

	string getName(); // геттер названия
	string getAuthor(); // геттер автора
	void setName(string name); // сеттер названия
	void setAuthor(string author);// сеттер автора

	PRINT& operator = (const PRINT& other); // перегрузка оператора =
	void Show(); // функция печати
	void Input(); // функция ввода
	void HandleEvent(TEvent& event); // функция обратотки события
};

