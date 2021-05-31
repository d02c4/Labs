#pragma once 
#include "Object.h"
#include <string> 
#include <iostream> 
using namespace std;
class PERSON : public Object
{

public:
	//����������� ��� ���������� 
	PERSON();

	//����������

	virtual ~PERSON()
	{

	}

	void Show();// ������� ��� ��������� ��������� ������ � ������� ���������


	//���������� � ����������� 
	PERSON(string, int);

	//����������� ����������� 
	PERSON(const PERSON&);

	//�������
	string Get_name()
	{
		return name;
	}
	int Get_age()
	{
		return age;
	}

	//�������
	void Set_name(string tmp)
	{
		name = tmp;
	}
	void Set_age(int tmp)
	{
		age = tmp;
	}

	//���������� �������� ������������ 
	PERSON& operator=(const PERSON&);

	//���������� ���������-������� �����-������
	friend istream& operator>>(istream& in, PERSON& c);
	friend ostream& operator<<(ostream& out, const PERSON& c);

	//�������� 
protected:
	string name;
	int age;
};
