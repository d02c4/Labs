#pragma once
#include <iostream>
#include "Error.h"
using namespace std;

class Iterator
{
	friend class LIST;
	
public:
	int* ptr; // указатель на информационное поле элемента
	Iterator() { ptr = nullptr; }// Вызов конструктора без параметров
	Iterator(const Iterator& tmp) { ptr = tmp.ptr; }  // Вызов конструктора копирования
	Iterator& operator+(const int n) // перегрузка оператора "+"
	{
		if (n < 0)
		{
			throw IndexError1();
		}
		
		ptr += n; // сдвигаем указатель на n элементов
		return *this; // возвращаем разыменованный указатель на объект
	}

	void operator++() { ptr++; } // перегрузка инкримента
	void operator--() { ptr--; } // перегрузка декримента
	bool operator==(const Iterator& tmp) { return ptr == tmp.ptr; } // перегрузка оператора сравнения
	bool operator!=(const Iterator& tmp) { return !(ptr == tmp.ptr); } // перегрузка оператора неравенства
	void operator()(int* tmp) { ptr = tmp; }// перегрузка оператора () будет возвращать размер
	int& operator *() { return *ptr; } // перегрузка оператора разыменования
};
