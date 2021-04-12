
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

	LIST(int Size) // ����������� � �����������
	{
		this->Size = Size;
		data = new T[Size];
		for (int i = 0; i < Size; i++)
		{
			data[i] = 0;
		}
	}


	LIST(const LIST& other) // ����������� � �����������
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

	~LIST() // ����������
	{
		if (this->data != nullptr)
		{
			delete[] this->data;
		}
		data = nullptr;
	}
	LIST& operator = (const LIST& a)// �������� ������������
	{
		if (this == &a) // ��������� �� ����������������
		{
			return *this;
		}

		Size = a.Size;
		if (data != 0) // ���� ������ �� �����, �� ������� ������
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


	T& operator [] (int index) // �������� ������� � �������
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
				res->data[j] = 0; // ��������� ������� 1 � 2 ����� ������, ��� ��� ����� �������� �� �� ���
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

	void SetSize(int size) // ������ ������� �������
	{
		this->Size = size;
	}

	int GetData() // ������ ������ �������
	{
		return *this->data;
	}

	int GetSize() //������ ������� �������
	{
		this->Size = size;
	}
	int size()
	{
		return Size;
	}

	friend ostream& operator<< <>(ostream& out, const LIST<T>& a);
	friend istream& operator>> <>(istream& in, LIST<T>& a);
	friend ostream& operator<< (ostream& out, const LIST<Pair>& other);

private:
	int Size = 0;
	T* data;
};

template <typename T>
ostream& operator<< <>(ostream& out, const LIST<T>& other)
{
	for (int i = 0; i < other.Size; i++)
	{
		out << other.data[i] << " ";
	}
	return out;
}

template<typename T>
istream& operator>> <>(istream& in, LIST<T>& other)
{
	for (int i = 0; i < other.Size; i++)
	{
		cout << "������� " << i << " ������� ������: ";
		
		in >> other.data[i];
	}
	return in;
}

ostream& operator<<(ostream& out, const LIST<Pair>& other)
{
	for (int i = 0; i < other.Size; i++)
	{
		out << other.data[i] << " ";
	}
	return out;
}






