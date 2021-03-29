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
	void Init(double, int); // метод для инициализации полей
	void Read(); // метод для чтения значений полей
	void Show(); // метод для вывода значений полей
	double element(int); // вычисление степени
	int EnterJ(); // ввод индекса желаемого элемента
};
