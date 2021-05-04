#include <iostream>
#include "Dialog.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Список команд:" << endl;
	cout << "m<size>: Создание группы размера size, по умолчанию size = 0" << endl;
	cout << "<+>:     Добавление элемента в группу" << endl;
	cout << "<->:     Удаление элемента группы" << endl;
	cout << "<s>:     Вывод полной информации о всех элементах" << endl;
	cout << "<z>:     Вывод названий всех элементов" << endl;
	cout << "<q>:     Выход из программы" << endl;
	cout << "<h>:     Список команд" << endl;
	Dialog D;
	D.Execute();
}