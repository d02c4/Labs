#pragma once
#include <iostream>
#include "Error.h"
using namespace std;

class Iterator
{
	friend class LIST;
	
public:
	int* ptr; // ��������� �� �������������� ���� ��������
	Iterator() { ptr = nullptr; }// ����� ������������ ��� ����������
	Iterator(const Iterator& tmp) { ptr = tmp.ptr; }  // ����� ������������ �����������
	Iterator& operator+(const int n) // ���������� ��������� "+"
	{
		if (n < 0)
		{
			throw IndexError1();
		}
		
		ptr += n; // �������� ��������� �� n ���������
		return *this; // ���������� �������������� ��������� �� ������
	}

	void operator++() { ptr++; } // ���������� ����������
	void operator--() { ptr--; } // ���������� ����������
	bool operator==(const Iterator& tmp) { return ptr == tmp.ptr; } // ���������� ��������� ���������
	bool operator!=(const Iterator& tmp) { return !(ptr == tmp.ptr); } // ���������� ��������� �����������
	void operator()(int* tmp) { ptr = tmp; }// ���������� ��������� () ����� ���������� ������
	int& operator *() { return *ptr; } // ���������� ��������� �������������
};