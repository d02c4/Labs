#pragma once
class fraction
{
private:
	double first;
	int second;
public:
	double getFirst() 
	{ 
		return first; 
	}
	int getSecond()
	{ 
		return second; 
	}
	void setFirst(double firstENT) 
	{ 
		first = firstENT; 
	}
	void setSecond(int secondENT) 
	{ 
		second = secondENT; 
	}
	void Init(double, int); // ����� ��� ������������� �����
	void Read(); // ����� ��� ������ �������� �����
	void Show(); // ����� ��� ������ �������� �����
	double element(int); // ���������� �������
	int EnterJ(); // ���� ������� ��������� ��������
};