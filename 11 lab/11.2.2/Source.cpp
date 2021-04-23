#include <iostream>
#include <iterator>
#include <list>

using namespace std;

void EnterSize(int *size) // вводим размер списка
{
	cout << "¬ведите размер списка: \t";
	cin >> (*size);

	while ((*size) < 1) // провер€ем правильнось введенных пользователем данных
	{
		cout << "¬веден неправильный размер списка!\n";
		cout << "¬ведите размер списка: \t";
		cin >> (*size);
	}
}

void fillLIST(list<int> &LIST, int size) // заполнение списка
{
	int el; // переменна€ котора€ будет временно хранить данные которые мы будем заность в список
	for (int i = 0; i < size; i++) // проходимс€ от 0 до размера списка и заполн€ем список
	{
		cout << "¬ведите " << i + 1 << " элемент списка:\t";
		cin >> el; //  ввод эмемента списка
		LIST.push_back(el); //  введенный элемент кладетс€ в конец списка
	}
	
}

void PrintLIST(list<int> &LIST) // вывод всех элементов списка
{
	
	for (list<int>::const_iterator it = LIST.cbegin(); it != LIST.cend(); it++) //  проходимс€ с помощью итератора списка по всему списку
	{
		cout << *it << "\t"; // выводим элементы списка в консоль
	}
	cout << endl;
}


void EditLIST(list<int> &LIST) //  удаление четных элементов

{
	list<int>::iterator it = LIST.begin(); //  создание итератора, которому присваиваетс€ начальный элемент списка
	list<int>LIST2; //  создаетс€ вспомогательный список
	int count = 1; //  создаетс€ счетчик
	
	for (list<int>::const_iterator it = LIST.cbegin(); it != LIST.cend(); it++) //  с помощью итератора проходимс€ по всем элементам списка
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
