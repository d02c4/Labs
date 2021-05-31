#include "Vector.h"

//  онструктор без параметров
Vector::Vector()
{
	first = 0;
	size = 0;
	current = 0;
}

// деструктор
Vector:: ~Vector()
{
	if (first != 0)
	{
		delete[] first;
	}
	first = 0;
}


// конструктор с параметрами
Vector::Vector(int n)
{
	first = new Object * [n];
	current = 0;
	size = n;
}

// добавление объект, на который указывает указатель "p" в вектор
void Vector::Add(Object* p)
{
	if (current < size)
	{
		first[current] = p;
		current++;
	}
}

// операци€ вывода
ostream& operator<<(ostream& out, const Vector& vec)
{
	if (vec.size == 0)
	{
		out << "Empty" << endl;
	}

	Object** p = vec.first; // указатель на указатель типа Object
	for (int i = 0; i < vec.current; i++)
	{
		cout << "__________________________________________________\n";
		(*p)->Show(); // ¬ызов метода Show() (ѕозднее св€зывание)
		cout << "__________________________________________________\n";
		p++;
	}
	return out;
}

