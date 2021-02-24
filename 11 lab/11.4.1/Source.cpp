#include <iostream>

using namespace std;


struct Queue
{
	int inf;
	Queue* next;
};

void EnterSize(int* size)
{
	cout << "Введите размер очереди: \t";
	cin >> (*size);

	while ((*size) < 1)
	{
		cout << "Введен неправильный размер очереди!\n";
		cout << "Введите размер очереди: \t";
		cin >> (*size);
	}
}

Queue* InitQueue(Queue* &ptrFirst, int size)
{
	if (size == 0)
	{
		return NULL;
	}
	else
	{
		Queue* ptr = new Queue;
		ptrFirst = ptr;
		ptr->next = NULL;
		cout << "Введите 1 элемент очереди:\t";
		cin >> ptr->inf;
		for (int i = 2; i <= size; i++)
		{
			Queue* h = new Queue;
			cout << "Введите " << i << " элемент очереди:\t";
			cin >> h->inf;
			h->next = NULL;
			ptr->next = h;
			ptr = ptr->next;
		}
		
	}
	return ptrFirst;
}

void PrintQueue(Queue* ptrFirst, int size)
{

	cout << endl;
	Queue* ptr = ptrFirst;
	while(ptr != NULL)
	{
		cout << ptr->inf << " ";
		ptr = ptr->next;
	}
	cout << endl;
}


void EditQueue(Queue* ptrFirst, int size)
{
	int count = 1;
	Queue* ptr = ptrFirst;
	Queue* old = ptr;
	Queue* D;

	while (ptr != NULL)
	{
		if (count % 2 == 0)
		{
			D = ptr;
			ptr = ptr->next;
			old->next = ptr;
			delete D;
		}
		else
		{
			old = ptr;
			ptr = ptr->next;
		}
		count++;
	}
}


int main()
{
	setlocale(LC_ALL, "Ru");

	int size;
	EnterSize(&size);
	Queue* ptrFirst;
	ptrFirst = InitQueue(ptrFirst, size);
	PrintQueue(ptrFirst, size);

	EditQueue(ptrFirst, size);

	PrintQueue(ptrFirst, size);

}
