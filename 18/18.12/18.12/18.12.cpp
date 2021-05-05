#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>
#include "Pair.h"
#include <time.h>
#include "LIST.h"
using namespace std;

bool operator<(Pair a, Pair b)
{
	return a.get_first() + a.get_second() < b.get_first() + b.get_second();
}
bool operator>(Pair a, Pair b)
{
	return a.get_first() + a.get_second() > b.get_first() + b.get_second();
}


void SIZE_INIT(double* size)
{
	while (*size < 1 || *size > 10 || *size != (int)*size)
	{
		cout << "Введите размер: ";
		cin >> *size;
	}
}

template<typename T>
void Print(multiset<T> m)
{
	cout << "=============================================================================================\n\n";
	for (const auto &element : m)
	{
		cout << element << " \t";
	}
	cout << "\n\n=============================================================================================\n\n\n";
}


template<typename T>
void AVG(multiset<T> *m)
{
	
	T avg(0);
	for (const auto& elem : *m)
	{
		avg = avg + elem;
	}
	avg = avg / m->size();
	cout << "\nСреднее арифметическое: " << avg << "\n\n\n";
	m->insert(avg);
}

template<typename T>
void Del(multiset<T>* m)
{
	cout << "Введите число которое вы хотите удалить: \t";
	T tmp = 0;
	cin >> tmp;
	m->erase(tmp);
}


template<typename T>
void ADD_SUM(multiset<T>* m)
{
	T min = 101;
	T max = -1;
	for (const auto& elem : *m)
	{
		if (elem > max)
		{
			max = elem;
		}
		if (elem < min)
		{
			min = elem;
		}
	}
	cout << "Минимальный элемент: " << min << "\n\n";
	cout << "Максимальный элемент: " << max << "\n\n";
	multiset<T> mcopy = *m;
	m->clear();
	for (const auto& elem : mcopy)
	{
		T tmp = elem;
		m->insert(tmp + max + min);
	}
	mcopy.clear();
}

void MULTISET_INIT()
{
	cout << "Первое задание " << endl;
	multiset<double> m;
	double size = 0;
	SIZE_INIT(&size);
	for (int i = 0; i < size; i++)
	{
		m.insert(rand() % 10000 / 100.0);
	}
	Print(m);
	AVG(&m);
	Print(m);
	Del(&m);
	Print(m);
	ADD_SUM(&m);
	Print(m);
}

void MULTISET_PAIR()
{
	cout << "Второе задание " << endl;
	multiset<Pair> m;
	double size = 0;
	SIZE_INIT(&size);
	for (int i = 0; i < size; i++)
	{
		Pair tmp(rand() % 100, rand() % 10000 / 100.0);
		m.insert(tmp);
	}
	Print(m);
	AVG(&m);
	Print(m);
	Del(&m);
	Print(m);
	ADD_SUM(&m);
	Print(m);
}


void LIST_INIT()
{
	cout << "\n\nТретье задание\n\n";
	double size = 0;
	SIZE_INIT(&size);
	LIST<double> l(size);
	cout << l;
	l.AVG();
	cout << l;
	l.Del();
	cout << l;
	l.PLUS_MIN_MAX();
	cout << l;
}

int main()
{
	setlocale(LC_ALL, "Ru");
	MULTISET_INIT();
	MULTISET_PAIR();
	LIST_INIT();
}
