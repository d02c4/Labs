#include "Vector.h"

// ����������� ��� ����������
Vector::Vector()
{
	first = 0;
	size = 0;
	current = 0;
}

// ����������
Vector:: ~Vector()
{
	if (first != 0)
	{
		delete[] first;
	}
	first = 0;
}


// ����������� � �����������
Vector::Vector(int n)
{
	first = new Object * [n];
	current = 0;
	size = n;
}

// ���������� ������, �� ������� ��������� ��������� "p" � ������
void Vector::Add(Object* p)
{
	if (current < size)
	{
		first[current] = p;
		current++;
	}
}

// �������� ������
ostream& operator<<(ostream& out, const Vector& vec)
{
	if (vec.size == 0)
	{
		out << "Empty" << endl;
	}

	Object** p = vec.first; // ��������� �� ��������� ���� Object
	for (int i = 0; i < vec.current; i++)
	{
		cout << "__________________________________________________\n";
		(*p)->Show(); // ����� ������ Show() (������� ����������)
		cout << "__________________________________________________\n";
		p++;
	}
	return out;
}

