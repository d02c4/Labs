#include <iostream> 
#include "PERSON.h" 
#include "Student.h" 
#include "Object.h"
#include "Vector.h"
using namespace std;


int main()
{
	system("chcp 1251>nul");
	Vector vec(5); // ������ ��������� �� 5 ���������
	PERSON a;// �������� ������� ������ Car
	cin >> a;// ���������� ����� ������� ������ Car
	STUDENT b;// �������� ������� ������ STUDENT
	cin >> b;// ���������� ����� ������� ������ STUDENT
	Object* ptr = &a;// ���������� ��������� �� ������ ������ Car
	vec.Add(ptr);// ��������� ������ � ������
	ptr = &b;// ������ ��������� �� ������ ������ STUDENT
	vec.Add(ptr);// ��������� ������ ������ STUDENT � ������
	cout << vec;// ����� ���� ��������� ������� �� ����� ������
	return 0;
}
