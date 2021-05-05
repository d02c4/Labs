#pragma once
#include <iostream> 
using namespace std;

class Pair
{
private:
	int first;
	double second;
public:
	// конструктор без параметров
	Pair()
	{
		first = 0; // При создании объекта поле заполняется 0
		second = 0; // При создании объекта поле заполняется 0
	};

	Pair(int fs)
	{
		first = fs;
		second = fs;
	}

	// конструктор с параметрами
	Pair(int f, double s)
	{
		first = f; // При создании объекта поле заполняется переданным в качестве параметра числом
		second = s; // При создании объекта поле заполняется переданынм в качестве параметра числом
	}

	// конструктор копирования 
	Pair(const Pair& other)
	{
		this->first = other.first;
		this->second = other.second;
	}

	// деструктор
	~Pair()
	{

	};

	int get_first()
	{
		return first;
	}
	int get_second()
	{
		return second;
	}

	void set_first(int m)
	{
		first = m;
	}
	void set_second(int s)
	{
		second = s;
	}
	//перегруженные операции 
	Pair& operator=(const Pair&);
	Pair operator=(int);
	Pair operator -(const Pair&); // перегрузка оператора "-", вычитание полей объектов
	Pair operator / (int size);
	Pair operator +(double constant); // перегрузка оператора "+" прибавление константы дабл к полям объекта класса
	Pair operator +(const Pair& constant);
	bool operator >(const Pair& other);
	bool operator <(const Pair& other);
	//глобальные функции ввода-вывода
	friend istream& operator>>(istream& in, Pair& other); // объявление дружественного оператора ввода
	friend ostream& operator<<(ostream& out, const Pair& other); // объявление дружественного оператора вывода
};
