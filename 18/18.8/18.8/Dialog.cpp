#include "Dialog.h"
#include "Events.h"
#include <string>
#include <iostream>
using namespace std;


Dialog::Dialog() : Vector()
{
	EndState = 0;
}

Dialog::~Dialog() {}

void Dialog::GetEvent(TEvent& event)
{
	string OpInt = "m+-szqh"; // строка содержащая коды операций
	string s = "";
	cout << "Ваше действие: ";
	getline(cin, s);
	if (OpInt.find(s[0]) != -1) // является ли символ кодом операции
	{
		event.what = evMessege;
		switch (s[0])
		{
		case 'm': event.command = cmdMake; break; // создать группу
		case '+': event.command = cmdAdd; break; // добавить объект в группу
		case '-': event.command = cmdDel; break; // удалить объект из группы
		case 's': event.command = cmdShow; break; // вывод в консоль
		case 'z': event.command = cmdName; break; // вывод имени объектов группы в консоль
		case 'q': event.command = cmdQuit; break; // выход из программы
		case 'h': event.command = cmdHelp; break; // вывод списка команд
		}
		if (s.length() > 1)
		{
			string param = s.substr(1, s.length() - 1); //строка без первого символа
			event.parameter = stoi(param); // достаем числа из строки
		}
		else
		{
			event.parameter = 0;
		}
	}
	else
	{
		event.what = evNothing;
	}
}


void Dialog::HandleEvent(TEvent& event)
{
	if (event.what == evMessege)
	{
		switch (event.command)
		{
		case cmdMake: // кейс создания группы
		{
			int size = event.parameter;
			this->begin = new Object * [size];
			this->size = size;
			this->current = 0;
			ClearEvent(event);
			break;
		}
		case cmdAdd: // кейс добавления объекта в группу
		{
			add();
			ClearEvent(event);
			break;
		}
		case cmdDel: // кейс удалениия объекта из группы
		{
			del();
			ClearEvent(event);
			break;
		}
		case cmdShow: // кейс вывода всех элементов в консоль
		{
			show();
			ClearEvent(event);
			break;
		}
		case cmdQuit: // кейс выхода из программы
		{
			EndState = 1;
			ClearEvent(event);
			break;
		}
		case cmdHelp:
		{
			cout <<endl << "Список команд:" << endl;
			cout << "m<size>: Создание группы размера size, по умолчанию size = 0" << endl;
			cout << "<+>:     Добавление элемента в группу" << endl;
			cout << "<->:     Удаление элемента группы" << endl;
			cout << "<s>:     Вывод полной информации о всех элементах" << endl;
			cout << "<z>:     Вывод названий всех элементов" << endl;
			cout << "<q>:     Выход из программы" << endl;
			cout << "<h>:     Список команд" << endl;
			ClearEvent(event);
			break;
		}
		default:
			Vector::HendleEvent(event);
		}
	}
}


void Dialog::Execute()
{
	TEvent event;
	do
	{
		GetEvent(event);
		HandleEvent(event);
		if (event.what != evNothing)
		{
			ClearEvent(event);
		}
	} 	while (EndState == 0);
}

void Dialog::ClearEvent(TEvent& event)
{
	event.what = evNothing;
}