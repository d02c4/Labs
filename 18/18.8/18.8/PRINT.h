#pragma once
#include <iostream>
#include <string>
#include "Events.h"
#include "Object.h"

using namespace std;

class PRINT:public Object
{
protected:
	string name; // ���� �������� ��������� �������
	string author; // ���� ������ ��������� �������
public:
	PRINT(); // ����������� ��� ����������
	PRINT(string name, string author); // ����������� � �����������
	PRINT(const PRINT& other); // ����������� �����������
	~PRINT(); // ����������

	string getName(); // ������ ��������
	string getAuthor(); // ������ ������
	void setName(string name); // ������ ��������
	void setAuthor(string author);// ������ ������

	PRINT& operator = (const PRINT& other); // ���������� ��������� =
	void Show(); // ������� ������
	void Input(); // ������� �����
	void HandleEvent(TEvent& event); // ������� ��������� �������
};

