#pragma once 
#include "PERSON.h"
#include "Object.h"

//����� STUDENT ����������� �� ������ PERSON 
class STUDENT :public PERSON
{
public:
	STUDENT();//����������� ��� ���������� 

	~STUDENT();//���������� 

	void Show();// ������� ��� ��������� ��������� ������ � ������� ���������

	STUDENT(string, int, int, string);//����������� � ����������� 
	STUDENT(const STUDENT&);//����������� �����������

	string Get_subject() { return subject; }//����������� 
	void Set_subject(string);//��������

	int Get_mark() { return mark; }//����������� 
	void Set_mark(int);//��������

	STUDENT& operator=(const STUDENT&);//�������� ������������

	void Check_Mark(const STUDENT&);
	friend istream& operator>>(istream& in, STUDENT& l);//�������� �����
	friend ostream& operator<<(ostream& out, const STUDENT& l); //�������� ������ 
protected:
	int mark;//���� ������ ��������
	string subject;//���� ��������
};
