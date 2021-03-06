#include <iostream>
#include <string>


using namespace std;

struct LIST
{
	double inf;
	LIST* ptrNext = NULL;
};


void Fill(int* size)
{
	cout << "Введите количество элементов в списке: \t";
	cin >> (*size);

	while ((*size) < 1)
	{
		cout << "Список такого размера не может быть создан!" << endl;
		cout << "Введите количество элементов в списке: \t";
		cin >> (*size);
	}
}



LIST* Init(int size)
{
	if (size < 1)
	{
		cout << "Список не может быть создан!";
		return 0;
	}

	LIST* ptrFirst = NULL;
	LIST* ptr = new LIST;


	cout << "Введите 1 элемент списка: \t";
	cin >> ptr->inf;

	ptrFirst = ptr;

	for (int i = 2; i <= size; i++)
	{
		LIST* NewOb = new LIST;

		ptr->ptrNext = NewOb;

		ptr = ptr->ptrNext;

		cout << "Введите " << i << " элемент списка: \t";
		cin >> ptr->inf;
	}
	return ptrFirst;
}


void Print(LIST* ptrFirst)
{
	cout << endl;
	if (ptrFirst == NULL)
	{
		cout << "Список пуст!" << endl;
	}

	else
	{
		LIST* ptr = ptrFirst;
		while (ptr != NULL)
		{
			cout << ptr->inf << "\t";
			ptr = ptr->ptrNext;
		}
		cout << endl << endl;
	}
}


void Edit(LIST* ptrFirst)
{
	LIST* ptr = ptrFirst;
	
	while (ptr != NULL)
	{
		if (ptr->inf < 0 )
		{
			LIST* old = ptr->ptrNext;
			LIST* NewOb = new LIST;
			ptr->ptrNext = NewOb;
			ptr = ptr->ptrNext;
			ptr->inf = 0;
			ptr->ptrNext = old;
		}
		else
		{
			ptr = ptr->ptrNext;
		}
	}
}

void Del(LIST* ptrFirst)
{
	LIST* ptr = ptrFirst;

	while (ptr != NULL)
	{
		LIST* old = ptr;
		ptr = ptr->ptrNext;
		delete old;
	}
}



int main()
{
	setlocale(LC_ALL, "Ru");
	int size;
	Fill(&size);
	LIST* ptrFirst = Init(size);
	Print(ptrFirst);
	Edit(ptrFirst);
	Print(ptrFirst);
	Del(ptrFirst);
}
