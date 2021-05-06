#include "Stack.h"
using namespace std;


Stack::Stack()
{
	st_size = 0;
	st_stack = new string[1024];
}

Stack::Stack(int size)
{
	st_size = size;
	st_stack = new string[1024];
}


Stack::Stack(Stack& st)
{
	st_size = st.st_size;
	st_stack = new string[1024];
	for (int i = 0; i < st_size; i++)
	{
		st_stack[i] = st.st_stack[i];
	}
}

int Stack::size()
{
	return st_size;
}



Stack::~Stack()
{
	delete[] st_stack;
}

void Stack::push(string elem)
{
	if (st_size < 1024)
	{
		for (int i = st_size; i > 0; i--)  // �������� ��� �������� �� 1
		{
			st_stack[i] = st_stack[i - 1];
		}
		st_stack[0] = elem; // ������� ���������� ������
		st_size++; // ������ ����� ������������� �� 1
	}
}

bool Stack::empty()
{
	return st_size == 0;
}


string Stack::top()
{
	setlocale(LC_ALL, "Ru");
	if (st_size != 0)
	{
		return st_stack[0];
	}
	else
	{
		cout << "���� ����!";
		return "";
	}
}


void Stack::pop()
{
	if (st_size < 1024)
	{
		for (int i = 0; i < st_size; i++)
		{
			st_stack[i] = st_stack[i + 1];
		}
		st_size--;
	}
}

istream& operator>>(istream& in, Stack& other)
{
	string value;
	cout << "\n\n������� ��������: ";
	in >> value;
	other.push(value);
	return in;
}


ostream& operator<<(ostream& out, Stack& other)
{
	cout << "\n\n���� ������� " << other.st_size << " : ";
	for (int i = 0; i < other.st_size; i++) 
	{
		cout << other.st_stack[i] << "\t";
	}
	cout << "\n\n";
	return out;
}