#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	Stack st1;
	int size = 5;
	for (int i = 0; i < size; i++)
	{
		cin >> st1;
	}
	cout << st1;
	Stack st2;
	size = 3;
	string tmp;
	for (int i = 0; i < size; i++)
	{
		cout << "\n\nВведите" << i <<" значение: ";
		cin >> tmp;
		st2.push(tmp);
	}
	cout << "\n\nСтек размера " << size << " : ";
	for (int i = 0; i < size; i++)
	{
		cout << st2.top() << "\t";
		st2.pop();
	}
	cout << "\n\n\n";
	Stack st3;
	size = 4;
	for (int i = 0; i < size; i++)
	{
		cin >> st3;
	}
	cout << "\n\nСтек размера " << size << " : ";
	while (st3.empty() != true)
	{
		cout << st3.top() << "\t";
		st3.pop();
	}
	cout << "\n\n";
	

	

}
