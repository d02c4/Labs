#pragma once
#include <iostream>
#include <stack>
#include <string>


using namespace std;
class Stack
{
private:
	int st_size;
	string* st_stack;
public:
	Stack(); // конструктор по умолчанию
	Stack(int size); // конструктор с параметрами
	Stack(Stack& st); // конструктор копирования
	~Stack();
	string top();
	void push(string elem);
	void pop();
	bool empty();
	int size();

	friend istream& operator >> (istream& in, Stack& other);
	friend ostream& operator << (ostream& out, Stack& other);
};

