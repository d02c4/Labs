#include<iostream>


using namespace std;

struct Stack
{
	double inf;
	Stack* prev;
};


void InitSize(int *size)
{
	cout << "Введите размер стека: \t"; 
	cin >> *size;
	while (*size < 1)
	{
		cout << "Введен некорректный размер стека!" << endl;
		cout << "Введите размер стека: \t";
		cin >> *size;
	}
}

Stack* InitSTACK(int size)
{
	Stack* top;
	top = new Stack;
	cout << "Введите 1 элемент стека:\t";
	cin >> top->inf;
	top->prev = NULL;
	
	for (int  i = 2; i <= size; i++)
	{
		Stack* h = new Stack;
		cout << "Введите "<< i << " элемент стека:\t";
		cin >> h->inf;
		h->prev = top;
		top = h;
	}
	return top;
}

void PrintStack(Stack* top)
{
	if (top == NULL)
	{
		cout << "Стек пуст!" << endl;
	}
	else
	{
		Stack* ptr = top;
		while (ptr != NULL)
		{
			cout << ptr->inf << " ";
			ptr = ptr->prev;
		}
		cout << endl;
	}
}

void EditStack(Stack*& top)
{
	Stack* ptr = top;
	Stack* old = nullptr;
	while (ptr != NULL)
	{
		if (ptr->inf < 0)
		{
			Stack* h = new Stack;
			h->inf = 0;
			if (old != nullptr) {
				old->prev = h;
			}
			else {
				top = h;
			}
			h->prev = ptr;
		}

		old = ptr;
		ptr = ptr->prev;
	}
}


int main()
{
	setlocale(LC_ALL, "Ru");
	int size;
	InitSize(&size);

	Stack* top = InitSTACK(size);

	PrintStack(top);
	EditStack(top);
	PrintStack(top);


}