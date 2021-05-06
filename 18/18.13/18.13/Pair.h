#pragma once
#include <iostream> 
using namespace std;

class Pair
{
private:
	int first;
	double second;
public:
	// ����������� ��� ����������
	Pair()
	{
		first = 0; // ��� �������� ������� ���� ����������� 0
		second = 0; // ��� �������� ������� ���� ����������� 0
	};

	bool Func(Pair other)
	{
		return ((this->first == other.first) && (this->second == other.second));
	}

	Pair(int fs)
	{
		first = fs;
		second = fs;
	}

	// ����������� � �����������
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
	Pair& operator=(const Pair&);
	Pair operator=(int);
	Pair operator -(const Pair&); // ���������� ��������� "-", ��������� ����� ��������
	Pair operator / (int size);
	Pair operator +(double constant); // ���������� ��������� "+" ����������� ��������� ���� � ����� ������� ������
	Pair operator +(const Pair& constant);
	//���������� ������� �����-������
	friend istream& operator>>(istream& in, Pair& other); // ���������� �������������� ��������� �����
	friend ostream& operator<<(ostream& out, const Pair& other); // ���������� �������������� ��������� ������
};