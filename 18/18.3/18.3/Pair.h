#pragma once
#include <iostream> 
using namespace std;

class Pair
{
private:
	int first; 
	double second;
public:
	// ����������� ����������� ��� ����������
	Pair() 
	{ 
		first = 0; // ��� �������� ������� ���� ����������� 0
		second = 0; // ��� �������� ������� ���� ����������� 0
	};

	// ����������� ����������� � �����������
	Pair(int f, double s) 
	{ 
		first = f; // ��� �������� ������� ���� ����������� ���������� � �������� ��������� ������
		second = s; // ��� �������� ������� ���� ����������� ���������� � �������� ��������� ������
	} 

	// ����������� ����������� 
	Pair(const Pair& other)
	{
		this->first = other.first; 
		this->second = other.second; 
	}

	// ����������
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
	//������������� �������� 
	Pair & operator=(const Pair&);
	Pair operator -(const Pair&); // ���������� ��������� "-", ��������� ����� ��������

	Pair operator +(double constant); // ���������� ��������� "+" ����������� ��������� ���� � ����� ������� ������

	//���������� ������� �����-������
	friend istream& operator>>(istream& in, Pair& other); // ���������� �������������� ��������� �����
	friend ostream& operator<<(ostream& out, const Pair& other); // ���������� �������������� ��������� ������
};
