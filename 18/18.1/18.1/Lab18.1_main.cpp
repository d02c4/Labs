#include <iostream>
#include "fruction.h"
using namespace std;

fraction make_fraction(double F, int S)
{
	fraction t;//������� ��������� ����������
	t.Init(F, S);//���������������� ���� ���������� t � ������� ���������� ������� 
	return t;//������� �������� ���������� t
}

int main()
{
	system("chcp 1251>nul");
	setlocale(LC_ALL, "Ru");
	//����������� ���������� � � � 
	fraction A;
	fraction B;
	A.Init(2.0, 4);//������������� ���������� �
	B.Read();//���� ����� ���������� � 
	A.Show();//����� �������� ����� ���������� � 
	B.Show();//����� �������� ����� ���������� �
	fraction* X = new fraction;//��������� ������ ��� ������������ ���������� 
	int j = X->EnterJ();


	//����� �������� �������, ������������ � ������� ������� element(j)
	cout << "A.element(" << A.getFirst() << "," << A.getSecond() << ")=" << A.element(j) << endl;
	cout << "B.element(" << B.getFirst() << "," << B.getSecond() << ")=" << B.element(j) << endl;


	//���������
	X->Init(2.0, 5);//�������������
	X->Show();//����� �������� ����� 
	X->element(j);//���������� j ��������
	cout << "X.element(" << X->getFirst() << "," << X->getSecond() << ")=" << X->element(j) << endl;
	//�������
	fraction mas[3];//����������� ������� 
	for (int i = 0; i < 3; i++)
		mas[i].Read();//������ �������� ����� for (i=0;i<3; i++)
	for (int i = 0; i < 3; i++)
		mas[i].Show(); //����� �������� ����� 
	for (int i = 0; i < 3; i++)
	{
		mas[i].element(j); //���������� ������� 
		cout << "mas[" << i << "].element(" << mas[i].getFirst() << "," << mas[i].getSecond() << ")=";
		cout << mas[i].element(j) << endl;
	}


	//������������ ������
	fraction* p_mas = new fraction[3];//��������� ������ 
	for (int i = 0; i < 3; i++)
		p_mas[i].Read();//������ �������� ����� 
	for (int i = 0; i < 3; i++)
		p_mas[i].Show();//����� �������� �����
	for (int i = 0; i < 3; i++)
	{
		p_mas[i].element(j);//���������� ������� 
		cout << "p_mas[" << i << "].element(" << p_mas[i].getFirst() << "," << p_mas[i].getSecond();
		cout << ")=" << p_mas[i].element(j) << endl;
	}
	//����� ������� make_fraction() 
	double y;
	int z;
	cout << "first?"; cin >> y;
	cout << "second?"; cin >> z;
	//���������� F ����������� � ������� ������� make_fraction() 
	fraction F = make_fraction(y, z);
	F.Show();
	return 0;
}
