#include <iostream>
#include <string>

using namespace std;


struct CARS
{
	string Mark;
	int Year;
	int Price;
	string �olor;

	void fill()
	{
		cout << "\n������� �������� ����������:\t";
		cin.ignore();
		getline(cin, Mark);
		cout << "������� ��� �������:\t";
		cin >> Year;
		while (Year < 1806 || Year > 2021)
		{
			cout << "������� ��� �������:\t";
			cin >> Year;
		}
		cout << "������� ���� ����������:\t";
		cin >> Price;
		while (Price < 0)
		{
			cout << "������� ���� ����������:\t";
			cin >> Price;
		}
		cout << "������� ���� ����������:\t";
		cin >> �olor;
	}
	void Print()
	{
		cout << "\n\n";

		cout << "�����:\t" << Mark << endl;

		cout << "���:\t" << Year << endl;

		cout << "����:\t" << Price << endl;

		cout << "����:\t" << �olor << endl;
	}
};

void Check(int year, CARS* car, int *MAX)
{
	for (int i = 0; i < *MAX; i++)
	{
		if (car[i].Year < year)
		{
			for (int j = i; j < *MAX - 1; j++) {
				car[j] = car[j + 1];
			}
			(*MAX)--;
			i--;
		}
	}
}


void Add(CARS* car, int* MAX)
{
	for (int i = *MAX; i > 0; i--) {
		car[i] = car[i - 1];
	}
	(*MAX)++;
}


int main()
{
	setlocale(LC_ALL, "RU");
	int MAX;
	cout << "������� ���������� �����:\t";
	cin >> MAX;
	while (MAX <= 0) {
		cout << "������� ���������� �����:\t";
		cin >> MAX;
	}

	CARS* car = new CARS[MAX + 1];
	for (int i = 0; i < MAX; i++)
	{
		car[i].fill();
	}
	for (int i = 0; i < MAX; i++)
	{
		car[i].Print();
	}

	int year;
	cout << "������� ��� ������� � �������� �������� �����:\t";
	cin >> year;
	while (year < 1806 || year > 2021)
	{
		cout << "\n������� ��� �������:\t";
		cin >> year;
	}

	Check(year, car, &MAX);

	for (int i = 0; i < MAX; i++)
	{
		car[i].Print();
	}

	Add(car, &MAX);
	car[0].fill();

	for (int i = 0; i < MAX; i++)
	{
		car[i].Print();
	}

	delete[] car;
	return 0;
}
