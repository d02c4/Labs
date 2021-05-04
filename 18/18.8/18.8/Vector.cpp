#include "Vector.h"
#include "PRINT.h"
#include "Magazine.h"

Vector::Vector()
{
	begin = nullptr;
	current = 0;
	size = 0;
}

Vector::Vector(int size)
{
	this->begin = new Object * [size];
	this->current = 0;
	this->size = size;
}

Vector::~Vector()
{
	if (begin != nullptr)
	{
		delete[] this;
	}
	begin = nullptr;
	
}

void Vector::add()
{
	setlocale(LC_ALL, "Ru");
	if (this->size == 0)
	{
		cout << "Вектор не создан!" << endl;
		return;
	}
	if (this->size == this->current)
	{
		cout << "В векторе не осталось места!" << endl;
		return;
	}
	int choise = 0;
	Object* ptr = new Magazine;
	bool f = false;
	while (f == false)
	{
		switch (choise)
		{
		case 1: {PRINT* tmp = new PRINT; tmp->Input(); ptr = tmp; f = true; break; }
		case 2: {Magazine* tmp = new Magazine; tmp->Input(); ptr = tmp; f = true; break; }
		default: cout << endl << "Объект какого класса вы хотите добавть в группу?" << endl;
			cout << "1: Печатное издание" << endl;
			cout << "2: Журнал" << endl;
			cout << "Выбор: ";
			cin >> choise;
			break;
		}
	}
	if (this->current < size) // проверка на корректность размера
	{
		this->begin[this->current] = ptr; //добавляем элемент в вектор
		this->current++; // сдвигаем указатель на текущий элемент
	}
}

void Vector::show()
{
	if (this->current == 0)
	{
		cout << "Вектор пуст!\n";
	}
	else
	{
		Object** ptr = this->begin; // создаем копию
		for (int i = 0; i < current; i++)
		{
			(*ptr)->Show();
			ptr++;
			cout << "\n";
		}
	}
}

void Vector::del()
{
	if (this->size == 0)
	{
		cout << "Вектор не существует!\n";
	}
	else
	{
		this->current--;
	}
}


int Vector:: operator()()
{
	return this->current;
}

void Vector::HendleEvent(TEvent& event)
{
	if (event.what == evMessege)
	{
		Object** ptr = this->begin;
		for (int i = 0; i < current; i++)
		{
			(*ptr)->HandleEvent(event);
			ptr++;
		}
	}
}