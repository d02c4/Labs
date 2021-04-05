#pragma once
#include "PERSON.h"
#include <string>
#include <iostream>

using namespace std;

class Vector
{
public:
	Vector(); // конструктор без параметров
	Vector(int); // Конструктор копирования
	~Vector(); // деструктор
	void Add(Object*); // длобавление элемента в вектор
	friend ostream& operator<<(ostream& out, const Vector&); // операция вывода
private:
	Object** first; // указатель на первый элемент вектора
	int size; // размер
	int current; // текущая позиция
};

