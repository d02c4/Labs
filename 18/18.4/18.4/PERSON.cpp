#include "PERSON.h"
//����������� ��� ���������� 
PERSON::PERSON(void)
{
	name = ""; 
	age = 0; 
}
//���������� 
PERSON::~PERSON(void)
{

}

//����������� � ����������� 
PERSON::PERSON(string M,int C)
{
	name = M; 
	age = C; 
}
//����������� ����������� 
PERSON::PERSON(const PERSON& person)
{
	name = person.name; 
	age = person.age; 
}
//������������
void PERSON::Set_age(int C)
{
	age = C;
}
void PERSON::Set_name(string M)
{
	name = M;
}

//���������� �������� ������������ 
PERSON& PERSON::operator=(const PERSON&c)
{
	if (&c == this)return *this; 
	name = c.name; 
	age = c.age;
	return *this;
}
//���������� ������� ��� ����� 
istream& operator>>(istream&in,PERSON&c)
{
	cout << "\nName:"; 
	in >> c.name; 
	cout << "\nAge:"; 
	in >> c.age;
	while (c.age < 14 || c.age > 40)
	{
		cout << "\n�� ������ ��� � ����� �������� ������ � ������������\n";
		cout << "\nAge:";
		in >> c.age;
	}
	return in;
}

//���������� ������� ��� ������
ostream& operator<<(ostream& out, const PERSON& c)
{
	out << "\nName : " << c.name; 
	out << "\nAge : " << c.age; 
	out << "\n";
	return out;
}
