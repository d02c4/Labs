#include "Pair.h" 
#include <iostream> 
using namespace std;

//���������� �������� ������������ 
Pair& Pair::operator=(const Pair& other)
{
	if (&other == this) return *this; //�������� �� ����������������
	this->first = other.first;
	this->second = other.second;
	return *this;
}

Pair Pair::operator=(int tmp)
{
	this->first = tmp;
	this->second = tmp;
	return *this;
}

Pair Pair::operator-(const Pair& other)
{
	Pair tmp;
	tmp.first = this->first - other.first;
	tmp.second = this->second - other.second;
	return tmp;
}

Pair Pair::operator+(double constant)
{
	if (constant == int(constant))
	{
		this->first = this->first + constant;
	}
	else
	{
		this->second = this->second + constant;
	}
	return *this;
}

Pair Pair::operator+(Pair other)
{
	this->first += other.first;
	this->second += other.second;
	return *this;
}

bool Pair::operator>(Pair other)
{
	if (this->first > other.second && this->second > other.second)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Pair::operator <(Pair other)
{
	if (this->first < other.second && this->second < other.second)
	{
		return true;
	}
	else
	{
		return false;
	}
}


//���������� ���������� �������-�������� ����� 
istream& operator>>(istream& in, Pair& other)
{
	cout << "first?";
	in >> other.first;
	cout << "second?";
	in >> other.second;
	return in;
}

//���������� ���������� �������-�������� ������ 
ostream& operator<<(ostream& out, const Pair& other)
{
	return (out << other.first << " : " << other.second);
}