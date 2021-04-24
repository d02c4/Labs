#include <iostream>

using namespace std;


struct Queue
{
	int inf; // информационное поле
	Queue* next; // поле, которое хранит адрес следующего элемента очереди
};

void EnterSize(int* size) // функция ввода размера очереди
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

Queue* InitQueue(Queue* &ptrFirst, int size) // создание очереди
{
	if (size == 0) // проверка на существование очереди
	{
		return NULL;
	}
	else
	{
		Queue* ptr = new Queue; //  создание элемента очереди
		ptrFirst = ptr; // указатель на первый элемент очереди срановится равным новому элементу
		ptr->next = NULL; //  поле хранящее адрес следующего элемента, равен null
		cout << "Введите 1 элемент очереди:\t";
		cin >> ptr->inf; //  пользователь вводит данные информационного поля
		for (int i = 2; i <= size; i++) //  цикл от 2 до размера списка
		{
			Queue* h = new Queue; //  создание нового элемента очереди
			cout << "Введите " << i << " элемент очереди:\t";
			cin >> h->inf; //  пользователь вводит данные информационного поля
			h->next = NULL; //  указатель нового элемента на след элемент равен null
			ptr->next = h; // предыдущий элемент связывается со следующим
			ptr = ptr->next; // переходим к следующему элементу
		}
		
	}
	return ptrFirst; //  возвращаем указатель на первый элемент очереди
}

void PrintQueue(Queue* ptrFirst, int size) // функция вывода в консоль списка
{

	cout << endl;
	Queue* ptr = ptrFirst; //  создание указателя на первый элемент
	while(ptr != NULL) //  цикл пока есть элемент
	{
		cout << ptr->inf << " "; // вывод элемета в консоль
		ptr = ptr->next; //  переход на следующий элемент очереди
	}
	cout << endl;
}


void EditQueue(Queue* ptrFirst, int size) //  удаление четных элементов очереди
{
	int count = 1; // создание счетчика
	Queue* ptr = ptrFirst; //  создание временной переменной равный перввому элементу списка
	Queue* old = ptr; //   временная переменная, которая будет хранить старый элемент списка
	Queue* D; //  создание временного указателя

	while (ptr != NULL) //  пока есть элементы списка
	{
		if (count % 2 == 0) //   если элемент четный
		{
			D = ptr; //  приравниваем указатель D к временной переменной
			ptr = ptr->next; //  переходим к следующему элементу
			old->next = ptr; //  указываем в поле со следующим элементом на новый элемент
			delete D; //   удаляем указатель D
		}
		else
		{
			old = ptr; //  запоминаем новый элемент
			ptr = ptr->next; //  переходим на следующий элемент
		}
		count++; //  увеличиваем счетчик
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
