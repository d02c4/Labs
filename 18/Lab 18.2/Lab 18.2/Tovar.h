#pragma once

#include <iostream> 
#include <string> 
using namespace std; 

class Salary
{
//��������
private:
	string FIO; 
	int Oklad; 
	double Prize;
public:
	Salary();//����������� ��� ����������
	Salary(string, int, double);//����������� � ����������� 
	Salary(const Salary&);//����������� �����������
	~Salary();//����������
	string get_FIO();//��������
	void set_FIO(string);//����������� 
	int get_Oklad();//��������
	void set_Oklad(int); //����������� 
	double get_Prize();//��������
	void set_Prize(double); //����������� 
	void show();//�������� ���������
};

