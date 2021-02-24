#include <iostream>
#include <string>

using namespace std;


struct CARS
{
	string Mark;
	int Year;
	int Price;
	string Сolor;

	void fill()
	{
		cout << "\nВведите название автомобиля:\t";
		cin.ignore();
		getline(cin, Mark);
		cout << "Введите год выпуска:\t";
		cin >> Year;
		while (Year < 1806 || Year > 2021)
		{
			cout << "Введите год выпуска:\t";
			cin >> Year;
		}
		cout << "Введите цену автомобиля:\t";
		cin >> Price;
		while (Price < 0)
		{
			cout << "Введите цену автомобиля:\t";
			cin >> Price;
		}
		cout << "Введите цвет автомобиля:\t";
		cin >> Сolor;
	}
	void Print()
	{
		cout << "\n\n";

		cout << "Марка:\t" << Mark << endl;

		cout << "Год:\t" << Year << endl;

		cout << "Цена:\t" << Price << endl;

		cout << "Цвет:\t" << Сolor << endl;
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
	cout << "Введите количество машин:\t";
	cin >> MAX;
	while (MAX <= 0) {
		cout << "Введите количество машин:\t";
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
	cout << "Введите год выпуска с которого начнется вывод:\t";
	cin >> year;
	while (year < 1806 || year > 2021)
	{
		cout << "\nВведите год выпуска:\t";
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
