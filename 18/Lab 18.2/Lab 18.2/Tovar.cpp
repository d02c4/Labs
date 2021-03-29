#include "Tovar.h"
#include <iostream> 
#include <string> 
using namespace std;


//����������� ��� ���������� 
Salary::Salary()
{
	setlocale(LC_ALL, "Ru");
	FIO = ""; 
	Oklad = 0; 
	Prize = 0;
	cout << "����������� ��� ���������� ��� �������:\t" << this << endl;
}


//����������� � ����������� 
Salary::Salary(string N, int K, double S)
{
	setlocale(LC_ALL, "Ru");
	FIO = N; 
	Oklad = K; 
	Prize = S;
	cout << "����������� � ����������� ��� �������:\t" << this << endl;
}


//����������� ����������� 
Salary::Salary(const Salary &other)
{
	setlocale(LC_ALL, "Ru");
	FIO = other.FIO;
	Oklad = other.Oklad; 
	Prize = other.Prize;
	cout << "����������� ����������� ��� �������:\t" << this << endl;
}


//���������� 
Salary::~Salary()
{
	setlocale(LC_ALL, "Ru");
	cout << "���������� ��� �������:\t" << this << endl;
}


//���������
string Salary::get_FIO()
{
	return FIO;
}


int Salary::get_Oklad()
{
	return Oklad;
}


double Salary::get_Prize()
{
	return Prize;
}


//������������
void Salary::set_FIO(string N)
{
	FIO = N;
}


void Salary::set_Oklad(int K)
{
	Oklad = K;
}


void Salary::set_Prize(double S)
{
	Prize = S;
}


//����� ��� ��������� ��������� 
void Salary::show()
{
	setlocale(LC_ALL, "Ru");
	cout << "������������:\t" << FIO << endl; 
	cout << "����������:\t" << Oklad << endl; 
	cout << "Prize:\t" << Prize << endl;
}
