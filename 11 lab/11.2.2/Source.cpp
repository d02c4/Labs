#include <iostream>
#include <iterator>
#include <list>

using namespace std;

void EnterSize(int *size) // вводим размер списка
{
	cout << "Введите размер списка: \t";
	cin >> (*size);

	while ((*size) < 1) // проверяем правильнось введенных пользователем данных
	{
		cout << "Введен неправильный размер списка!\n";
		cout << "Введите размер списка: \t";
		cin >> (*size);
	}
}

void fillLIST(list<int> &LIST, int size) // заполнение списка
{
	int el; // переменная которая будет временно хранить данные которые мы будем заность в список
	for (int i = 0; i < size; i++) // проходимся от 0 до размера списка и заполняем список
	{
		cout << "Введите " << i + 1 << " элемент списка:\t";
		cin >> el; //  ввод эмемента списка
		LIST.push_back(el); //  введенный элемент кладется в конец списка
	}
	
}

void PrintLIST(list<int> &LIST) // вывод всех элементов списка
{
	
	for (list<int>::const_iterator it = LIST.cbegin(); it != LIST.cend(); it++) //  проходимся с помощью итератора списка по всему списку
	{
		cout << *it << "\t"; // выводим элементы списка в консоль
	}
	cout << endl;
}


void EditLIST(list<int> &LIST) //  удаление четных элементов

{
	list<int>::iterator it = LIST.begin(); //  создание итератора, которому присваивается начальный элемент списка
	list<int>LIST2; //  создается вспомогательный список
	int count = 1; //  создается счетчик
	
	for (list<int>::const_iterator it = LIST.cbegin(); it != LIST.cend(); it++) //  с помощью итератора проходимся по всем элементам списка
	{
		if (count % 2 != 0) //  если элемент нечетный по индексу
		{
			LIST2.push_back((*it)); //  кладем в конец вспомогательного списка данный элемент
		}
		count++; //  инкрементируем счетчик
	}
	LIST.assign(LIST2.begin(), LIST2.end()); // копирование всех элементов из нового списка в старый
	LIST2.clear(); //  очищаем новый список
}




int main()
{

	setlocale(LC_ALL, "Ru");
	int size;
	EnterSize(&size);
	list<int> LIST;
	fillLIST(LIST, size);
	PrintLIST(LIST);
	EditLIST(LIST);
	PrintLIST(LIST);
	LIST.clear();
}
