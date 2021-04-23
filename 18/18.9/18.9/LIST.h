#pragma once 
#include <string> 
#include <iostream> 
#include "Iterator.h"
using namespace std;

const int MAX_SIZE = 20;

class LIST
{
public:
	LIST();
	LIST(int s); // ����������� � �����������
	LIST(const LIST& a); // ����������� � �����������
	~LIST(); // ����������
	LIST& operator = (const LIST& a);// �������� ������������
	int& operator [] (int index); // �������� ������� � �������
	LIST& operator * (LIST& a);
	LIST& operator +(int n);
	int operator ()();
	void SetData(int); // ������ ������ ������ �������
	void SetSize(int); // ������ ������� �������
	int GetData(); // ������ ������ �������
	int GetSize(); //������ ������� �������
	Iterator begin()
	{
		return Begin;
	}
	Iterator end()
	{
		return End;
	}
	int size()
	{
		return Size;
	}

	friend ostream& operator<<(ostream& out, const LIST& a);
	friend istream& operator>>(istream& in, LIST& a);

private:
	friend class Iterator;
	int Size = 0;
	int* data;
	Iterator Current;
	Iterator Begin;
	Iterator End;
};