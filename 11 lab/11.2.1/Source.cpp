#include <iostream>
using namespace std;
struct LIST
{
	int inf = 0;
	LIST* ptrPrev = NULL;
	LIST* ptrNext = NULL;
};


void FillS(int* size)
{
	cout << "Введите количество элементов списка: \t";
	cin >> (*size);
	while (*size < 1)
	{
		cout << "Введен некорректный размер списка!" << endl;
		cout << "Введите количество элементов списка: \t";
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
		LIST* ptr2 = ptr;
		ptr->ptrNext = NewOb;
		ptr = ptr->ptrNext;
		cout << "Введите " << i << " элемент списка: \t";
		cin >> ptr->inf;
		ptr->ptrPrev = ptr2;
		ptr->ptrNext = NULL;
	}
	return ptrFirst;

}

void Print(LIST* ptrFirst)
{
	cout << endl << endl;
	LIST* ptr = ptrFirst;
	while (ptr != NULL)
	{
		cout << ptr->inf << "\t";
		ptr = ptr->ptrNext;
	}
}

void Edit(LIST* ptrFirst)
{
	int count = 1;
	LIST* ptr = ptrFirst;
	
	while (ptr != NULL)
	{
		if (count % 2 == 0)
		{
			LIST* old = ptr;

			LIST* prev = ptr->ptrPrev;
			LIST* next = ptr->ptrNext;
			prev->ptrNext = next;
			next->ptrPrev = prev;

			ptr = ptr->ptrNext;

			delete old;
		}
		else {
			ptr = ptr->ptrNext;
		}
		count++;
	}
}



int main()
{
	setlocale(LC_ALL, "Ru");
	int size;
	FillS(&size);
	LIST* ptrFirst = Init(size);
	Print(ptrFirst);
	Edit(ptrFirst);
	Print(ptrFirst);

	LIST* ptr = ptrFirst;
	while (ptr != NULL)
	{
		ptrFirst = ptr;
		ptr = ptr->ptrNext;
		delete ptrFirst;
	}
}