#include <iostream>
#include <string>


using namespace std;

struct LIST
{
	double inf; // информационное поле 
	LIST* ptrNext = NULL; // указатель на следующий элемент списка
};


void Fill(int* size) // функция ввода количества элементов списка
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



LIST* Init(int size) // заполниение списка
{
	if (size < 1) // проверка на возможность существования списка
	{
		cout << "Список не может быть создан!";
		return 0;
	}

	LIST* ptrFirst = NULL; // изначально указатель на первый элемент ни на что не указывает
	LIST* ptr = new LIST; // выделяется динамическая память для элемента структуры


	cout << "Введите 1 элемент списка: \t";
	cin >> ptr->inf; // пользователь заполняет информационное поле первого элемента

	ptrFirst = ptr; // указатель на первый элемент теперь указывает на первый элемент

	for (int i = 2; i <= size; i++) // цикл для создания остальных элементов списка
	{
		LIST* NewOb = new LIST; // выделение динамической памяти для объекта структуры

		ptr->ptrNext = NewOb; // поле ptrNext теперь указывает на следующий элемент

		ptr = ptr->ptrNext; // переходим к следующему элементу

		cout << "Введите " << i << " элемент списка: \t";
		cin >> ptr->inf; // пользователь заполняет информационное поле текущего элемента списка
	}
	return ptrFirst; // возвращаем указатель на первый элемент списка
}


void Print(LIST* ptrFirst) // функция вывода списка в консоль
{
	cout << endl;
	if (ptrFirst == NULL) // проверка на существование списка
	{
		cout << "Список пуст!" << endl;
	}

	else
	{
		LIST* ptr = ptrFirst; // создание элемента структуры
		while (ptr != NULL) // проверка на окончание списка
		{
			cout << ptr->inf << "\t"; // вывод информационного поля списка в консоль
			ptr = ptr->ptrNext; // переход к следующему элементу списка
		}
		cout << endl << endl;
	}
}


void Edit(LIST* ptrFirst) // функция изменения списка
{
	LIST* ptr = ptrFirst; // создание элемента списка
	
	while (ptr != NULL) // цинкл пока элементы существуют
	{
		if (ptr->inf < 0 ) // проверка информационных полей на отрицательность
		{
			LIST* old = ptr->ptrNext; // запоминает старый элемент
			LIST* NewOb = new LIST; // создаем новый элемент
			ptr->ptrNext = NewOb; // указываем на новый элемент
			ptr = ptr->ptrNext; // переходим к следующему элементу
			ptr->inf = 0; // заполняем информационное поле данного элемента 0
			ptr->ptrNext = old; // указываем на запомненный нами ранее элемент
		}
		else
		{
			ptr = ptr->ptrNext; // переходим к следующему элементу
		}
	}
}

void Del(LIST* ptrFirst) // функция удаления  списка
{
	LIST* ptr = ptrFirst; // создаем элемент структуры

	while (ptr != NULL) // пока не кончатся элементы проходимся по списку
	{
		LIST* old = ptr; // запоминаем текущий элемент
		ptr = ptr->ptrNext; // переходим к следующему элементу
		delete old; // удаляем запомненный нами элемент
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
