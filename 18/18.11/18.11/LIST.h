#pragma once 
#include <string> 
#include <iostream> 
#include "Pair.h"
using namespace std;

template <class T>
class LIST
{
public:
	LIST()
	{
		Size = 0;
		data = nullptr;
	}

	LIST(int Size) // Конструктор с параметрами
	{
		this->Size = Size;
		data = new T[Size];
		for (int i = 0; i < Size; i++)
		{
			data[i] = rand() % 100 / 2.123;
		}
	}


	LIST(const LIST& other) // Конструктор с параметрами
	{
		Size = other.Size;

		if (data != nullptr)
		{
			delete[] data;
		}

		data = new T[Size];
		for (int i = 0; i < Size; i++)
		{
			data[i] = other.data[i];
		}
	}

	~LIST() // деструктор
	{
		if (this->data != nullptr)
		{
			delete[] this->data;
		}
		data = nullptr;
	}
	LIST& operator = (const LIST& a)// оператор присваивания
	{
		if (this == &a) // Првоверка на самоприсваивание
		{
			return *this;
		}

		Size = a.Size;
		if (data != 0) // Если ячейка не пуста, то очищаем ячейку
		{
			delete[] data;
		}

		data = new int[Size];
		for (int i = 0; i < Size; i++)
		{
			data[i] = a.Size;
		}

		return *this;
	}


	T& operator [] (int index) // операция доступа к индексу
	{
		if (index < Size)
		{
			return data[index];
		}
		else
		{
			cout << "\nError! Index>Size";
		}
	}

	LIST<double>& AVG()
	{
		double* res = new double[Size];
		for (int i = 0; i < Size; i++)
		{
			res[i] = data[i];
		}
		delete[] data;
		data = new double[Size + 1];

		double avg = 0;
		for (int i = 0; i < Size; i++)
		{
			data[i] = res[i];
			avg += res[i];
		}
		avg = avg / this->Size;
		data[Size] = avg;
		Size++;
		return *this;
	}

	LIST<double>& PLUS_MIN_MAX()
	{
		double min = 101;
		double max = -1;
		double* tmp = new double[Size];
		for (int i = 0; i < Size; i++)
		{
			if (min > data[i])
			{
				min = data[i];
			}
			if (max < data[i])
			{
				max = data[i];
			}
			tmp[i] = data[i];
		}
		delete[] data;
		data = new double[Size];
		for (int i = 0; i < Size; i++)
		{
			data[i] = tmp[i] + min + max;
		}
		delete[] tmp;
		return *this;
	}

	LIST<double>& LR()
	{
		cout << "Введите диапазон\n";
		int left = -1;
		while (left < 0 || left > 15)
		{
			cout << "Левая граница: ";
			cin >> left;
		}
		int right = -1;
		while (right < left || right > this->Size)
		{
			cout << "Правая граница граница: ";
			cin >> right;
		}
		
		double* tmp = new double[Size - (right - left + 1)];
		int count = 0;
		for (int i = 0; i < Size; i++)
		{
			if (i < left || i > right)
			{
				tmp[count] = data[i];
				count++;
			}
		}
		Size = Size - (right - left + 1);
		delete[] data;
		data = new double[Size];
		for (int i = 0; i < Size; i++)
		{
			data[i] = tmp[i];
		}
		delete[] tmp;
		return *this;
	}


	LIST<T>& operator * (LIST& other)
	{
		LIST* res = new LIST;
		if (this->Size > other.Size)
		{
			int Size1 = this->Size;
			res->Size = Size1;
			res->data = new T[Size1];
			Size1 = other.Size;
			int j = 0;
			for (int i = 0; i < Size1; i++)
			{
				res->data[i] = this->data[i] * other.data[i];
				j = i;
			}
			Size1 = this->Size;
			j++;
			for (j; j < Size1; j++)
			{
				res->data[j] = 0; // Заполняем разничу 1 и 2 листа нулями, так как число умножить не на что
			}
			return *res;
		}
		else
		{
			int Size1 = other.Size;
			res->Size = Size1;
			res->data = new T[Size1];
			Size1 = this->Size;
			int j = 0;
			for (int i = 0; i < Size1; i++)
			{
				res->data[i] = this->data[i] * other.data[i];
				j = i;
			}
			Size1 = other.Size;
			j++;
			for (j; j < Size1; j++)
			{
				res->data[j] = 0;
			}
			return *res;
		}
	}

	int operator ()()
	{
		return this->Size;
	}

	void SetSize(int size) // Сеттер размера вектора
	{
		this->Size = size;
	}

	int GetData() // Геттер данных ячейчки
	{
		return *this->data;
	}

	int GetSize() //Геттер размера вектора
	{
		this->Size = size;
	}
	int size()
	{
		return Size;
	}

	friend ostream& operator<< <>(ostream& out, const LIST<T>& a);
	friend istream& operator>> <>(istream& in, LIST<T>& a);
	//friend ostream& operator<< (ostream& out, const LIST<Pair>& other);

private:
	int Size = 0;
	T* data;
};

template <typename T>
ostream& operator<< <>(ostream& out, const LIST<T>& other)
{
	out << endl << "=========================================================================================\n\n";
	for (int i = 0; i < other.Size; i++)
	{
		out << other.data[i] << " \t";
	}
	out << endl << "=========================================================================================\n\n\n";
	return out;
}

template<typename T>
istream& operator>> <>(istream& in, LIST<T>& other)
{
	for (int i = 0; i < other.Size; i++)
	{
		cout << "Введите " << i << " элемент списка: ";

		in >> other.data[i];
	}
	return in;
}

//ostream& operator<<(ostream& out, const LIST<Pair>& other)
//{
//	for (int i = 0; i < other.Size; i++)
//	{
//		out << other.data[i] << " ";
//	}
//	return out;
//}