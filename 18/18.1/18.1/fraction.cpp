#include<iostream>
#include"fruction.h"

// ���������� ������ ��� ������������� ����� ���������
using namespace std;
void fraction::Init(double F, int S)
{
	first = F;
	second = S;
}

//���������� ������ ��� ������ �������� ���� ���������
void fraction::Read()
{
	cout << "\nfirst?";
	cin >> first;
	cout << "\nsecond?";
	cin >> second;
}

// ���������� ������ ��� ������ �������� ����� ���������
void fraction::Show()
{
	cout << "\nfirst  = " << first;
	cout << "\nsecond = " << second;
	cout << endl;
}

// ����� ��� ���������� � �������
double fraction::element(int j)
{
	return first * pow(second, j);
}

// ���� ������� ��������� ��������
int fraction::EnterJ()
{
	int j;
	cout << "����� ������� ���������� �� ������ �������?" << endl;
	cin >> j;
	while (j < 0)
	{
		cout << "����� ������� ���������� �� ������ �������?" << endl;
		cin >> j;
	}
	return j;
}
