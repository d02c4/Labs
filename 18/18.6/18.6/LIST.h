
#pragma once 
#include <string> 
#include <iostream> 
#include "Iterator.h"
using namespace std;

class LIST
{
public:
	LIST();
	LIST(int s); // Конструктор с параметрами
	LIST(const LIST& a); // Конструктор с параметрами
	~LIST(); // деструктор
	LIST& operator = (const LIST& a);// оператор присваивания
	int& operator [] (int index); // операция доступа к индексу
	LIST& operator * (LIST& a);
	LIST& operator +(int n);
	int operator ()();
	void SetData(int); // Сеттер данных ячейки вектора
	void SetSize(int); // Сеттер размера вектора
	int GetData(); // Геттер данных ячейчки
	int GetSize(); //Геттер размера вектора
	Iterator begin()
	{
		return Begin;
	}
	Iterator end()
	{
		return End;
	}
	int size()
	{
		return Size;
	}

	friend ostream& operator<<(ostream& out, const LIST& a); 
	friend istream& operator>>(istream& in, LIST& a);

private:
	friend class Iterator;
	int Size = 0;
	int *data;
	Iterator Current;
	Iterator Begin;
	Iterator End;
};

