#include <iostream>
#include <algorithm>
#include <map>
#include <list>
#include <queue>
#include <ctime>
#include "Pair.h"
using namespace std;

bool operator<(Pair a, Pair b)
{
	return a.get_first() + a.get_second() < b.get_first() + b.get_second();
}
bool operator>(Pair a, Pair b)
{
	return a.get_first() + a.get_second() > b.get_first() + b.get_second();
}
bool operator==(Pair a, Pair b)
{
	return ((a.get_first() == b.get_first()) && (a.get_second() == b.get_second()));
}

bool operator!=(Pair a, Pair b)
{
	return ((a.get_first() != b.get_first()) || (a.get_second() != b.get_second()));
}

bool PP(Pair a, Pair b)
{
	return a < b;
}

void SIZE_INIT(double* size)
{
	while (*size < 1 || *size > 10 || *size != (int)*size)
	{
		cout << "Введите размер: ";
		cin >> *size;
	}
}

void INTER(Pair *key)
{
	cout << "\n\n\n";
	cout << "Введите ключ: ";
	cin >> *key;
	cout << "\n\n\n";
}
void INTER(pair<int ,Pair>* key)
{
	cout << "\n\n\n";
	cout << "Введите ключ: ";
	cin >> key->first;
	cout << "Введите значение: \n";
	cin >> key->second;
	cout << "\n\n\n";
}

template<typename T>
void Print(list<T> l)
{
	cout << endl << "=========================================================================================\n\n";
	while (l.empty() != true)
	{
		cout << l.front() << " \t";
		l.pop_front();
	}
	cout << endl << "=========================================================================================\n\n\n";
}
void Print(list<pair<int, Pair>> l)
{
	cout << endl << "=========================================================================================\n\n";
	for (const auto& elem : l)
	{
		cout << "Key: [" << elem.first << "] - ";
		cout << elem.second << " \t";
	}
	cout << endl << "=========================================================================================\n\n\n";
}

void Print(priority_queue<Pair> q)
{
	cout << endl << "=========================================================================================\n\n";
	while (q.empty() != true)
	{
		cout << q.top() << " \t";
		q.pop();
	}
	cout << endl << "=========================================================================================\n\n\n";
}
void Print(multimap<int, Pair> m)
{
	cout << endl << "=========================================================================================\n\n";
	for(const auto& elem : m)
	{
		cout << "Key: [" << elem.first << "] - ";
		cout << elem.second << " \t";
	}
	cout << endl << "=========================================================================================\n\n\n";
}

void average(list<Pair>* l)
{
	list<Pair> lcopy;
	copy(l->begin(), l->end(), back_inserter(lcopy)); // функция копирования списка
	Pair AVG;
	while (lcopy.empty() != true) // пока в новом списке есть элементы
	{
		AVG = AVG + lcopy.front();
		lcopy.pop_front();
	}
	AVG.set_first(AVG.get_first() / l->size());
	AVG.set_second(AVG.get_second() / l->size());
	l->push_back(AVG);
}

void average(priority_queue<Pair>* q)
{
	priority_queue<Pair> qcopy = *q;
	Pair AVG;
	while (qcopy.empty() != true) // пока в новом списке есть элементы
	{
		AVG = AVG + qcopy.top();
		qcopy.pop();
	}
	AVG.set_first(AVG.get_first() / q->size());
	AVG.set_second(AVG.get_second() / q->size());
	cout << "\n\nСреднее арифметическое: " << AVG << "\n\n";
	q->push(AVG);
}

void average(multimap<int, Pair>* m)
{
	Pair AVG;
	for(const auto& elem : *m) // проходимся по всем элементам 
	{
		AVG = AVG + elem.second;
	}
	AVG.set_first(AVG.get_first() / m->size());
	AVG.set_second(AVG.get_second() / m->size());
	cout << "\n\nСреднее арифметическое: " << AVG << "\n\n\n";
	m->emplace(rand() % 100, AVG);
}

list<Pair> increase(list<Pair>* l)
{
	list<Pair> lcopy;
	copy(l->begin(), l->end(), back_inserter(lcopy)); // функция копирования списка
	Pair max;
	max = -1;
	Pair min;
	min = 101;
	for(const auto& elem : lcopy)
	{
		if (max < elem)
		{
			max = elem;
		}
		if (min > elem)
		{
			min = elem;
		}
	}
	cout << endl << "min: " << min << endl;
	cout << endl << "max: " << max << endl;
	Pair res = min + max;
	lcopy.clear();
	for(const auto& elem : *l)
	{
		Pair tmp = elem;
		lcopy.push_back(tmp + res);
	}
	return lcopy;
}

multimap<int, Pair> increase(multimap<int, Pair>* m)
{
	Pair max;
	max = -1;
	Pair min;
	min = 101;
	for(const auto& elem : *m)
	{
		if (max < elem.second)
		{
			max = elem.second;
		}
		if (min > elem.second)
		{
			min = elem.second;
		}
	}
	cout << endl << "min: " << min << endl;
	cout << endl << "max: " << max << endl;
	Pair res = min + max;
	multimap<int, Pair> mcopy;
	for(const auto& elem : *m)
	{
		Pair tmp = elem.second;
		mcopy.emplace(elem.first, tmp + res);
	}
	return mcopy;
}

priority_queue<Pair> increase(priority_queue<Pair>* q)
{
	priority_queue<Pair> qcopy = *q;
	Pair max;
	max = -1;
	Pair min;
	min = 101;
	while (qcopy.empty() != true)
	{
		if (max < qcopy.top())
		{
			max = qcopy.top();
		}
		if (min > qcopy.top())
		{
			min = qcopy.top();
		}
		qcopy.pop();
	}
	cout << endl << "min: " << min << endl;
	cout << endl << "max: " << max << endl;
	Pair res = min + max;
	while (q->empty() != true)
	{
		Pair tmp = q->top();
		qcopy.push(tmp + res);
		q->pop();
	}
	return qcopy;
}

void Del(priority_queue<Pair> *q)
{
	cout << "Введите число которое вы хотите удалить: \t";
	Pair tmp = 0;
	cin >> tmp;
	priority_queue<Pair> qcopy;
	int size = q->size();
	for (int i = 0; i < size; i++)
	{
		if (q->top() != tmp)
		{
			qcopy.push(q->top());
		}
		q->pop();
	}
	size = qcopy.size();
	for (int i = 0; i < size; i++)
	{
		q->push(qcopy.top());
		qcopy.pop();
	}
}

void Del(pair<int, Pair> key, multimap<int, Pair> *m)
{
	int choice = 0;
	bool f = false;
	while (f == false)
	{
		switch (choice)
		{
		case 1: m->erase(key.first); f = true; break;
		case 2: for (const auto& elem : *m)
		{
			if (elem.second == key.second)
			{
				m->erase(elem.first);
				break;
			}
		}
			  f = true;
			  break;
		default: cout << "\n\n1 : удаление по ключу\n2 : удаление по значению\n\n"; cin >> choice;
		}
	}
}
void LIST_TASK1()
{
	cout << "Решение 1 задания:\n\n";
	list<Pair> l;
	double size = 0;
	SIZE_INIT(&size);
	for (int i = 0; i < size; i++)
	{
		Pair tmp(rand() % 100, rand() % 10000 / 100.0);
		l.push_back(tmp);
	}
	Print(l);
	average(&l);
	Print(l);

	Pair key(-1);
	INTER(&key);
	l.erase(remove(l.begin(), l.end(), key), l.end()); // перебрать
	Print(l);
	l = increase(&l);
	Print(l);
	l.sort(PP);
	Print(l);
	reverse(l.begin(), l.end());
	Print(l);
	Pair ptr;
	cout << "\n\nКакую пару мы хотите найти: ";
	cin >> ptr;
	if (find(l.begin(), l.end(), ptr) != l.end())
	{
		cout << "\n\nЭлемент в списке найден!\n\n";
	}
	Print(l);
}

void QUEUE_TASK2()
{
	cout << "\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n\n";
	cout << "Решение 2 задания:\n\n";
	priority_queue<Pair> q;
	double size = 0;
	SIZE_INIT(&size);
	for (int i = 0; i < size; i++)
	{
		Pair tmp(rand() % 100, rand() % 10000 / 100.0);
		q.push(tmp);
	}
	Print(q);
	average(&q);
	Print(q);
	Del(&q);
	Print(q);
	q = increase(&q);
	Print(q);


	priority_queue<Pair> qcopy = q;
	list<Pair> listHelp;
	while (qcopy.empty() != true)
	{
		listHelp.push_back(qcopy.top());
		qcopy.pop();
	}
	reverse(listHelp.begin(), listHelp.end());
	Print(listHelp);
	listHelp.clear();


}

void MAP_TASK3()
{
	cout << "\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n\n";
	cout << "Решение 3 задания:\n\n";
	multimap<int, Pair> m;
	double size = 0;
	SIZE_INIT(&size);
	for (int i = 0; i < size; i++)
	{
		Pair tmp(rand() % 100, rand() % 10000 / 100.0);
		m.emplace(rand() % 100, tmp);
	}
	Print(m);
	average(&m);
	Print(m);
	pair<int, Pair> key(0, 0);
	INTER(&key);
	Del(key, &m);
	Print(m);
	m = increase(&m);
	Print(m);
	list<pair<int,Pair>> listHelp;
	for (const auto& elem : m)
	{
		listHelp.push_front(elem);
	}
	Print(listHelp);
	listHelp.clear();
	cout << "\n\n\nВведите ключ для поиска: ";
	int key1 = 0;
	cin >> key1;
	auto tmp = m.find(key1);
	if (tmp != m.end())
	{
		cout << "\n\nЭлемент найден!\n\n";
		pair<int, Pair> tmp1 = *tmp;
		cout << "\n\nKey: [" << tmp1.first << "] - ";
		cout << tmp1.second << " \n\n\n";
	}
	else
	{
		cout << "\n\nЭлемента с данным ключом не существует!\n\n";
	}
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Ru");
	LIST_TASK1();
	QUEUE_TASK2();
	MAP_TASK3();
}