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
	string OpInt = "m+-szqh"; // ������ ���������� ���� ��������
	string s = "";
	cout << "���� ��������: ";
	getline(cin, s);
	if (OpInt.find(s[0]) != -1) // �������� �� ������ ����� ��������
	{
		event.what = evMessege;
		switch (s[0])
		{
		case 'm': event.command = cmdMake; break; // ������� ������
		case '+': event.command = cmdAdd; break; // �������� ������ � ������
		case '-': event.command = cmdDel; break; // ������� ������ �� ������
		case 's': event.command = cmdShow; break; // ����� � �������
		case 'z': event.command = cmdName; break; // ����� ����� �������� ������ � �������
		case 'q': event.command = cmdQuit; break; // ����� �� ���������
		case 'h': event.command = cmdHelp; break; // ����� ������ ������
		}
		if (s.length() > 1)
		{
			string param = s.substr(1, s.length() - 1); //������ ��� ������� �������
			event.parameter = stoi(param); // ������� ����� �� ������
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
		case cmdMake: // ���� �������� ������
		{
			int size = event.parameter;
			this->begin = new Object * [size];
			this->size = size;
			this->current = 0;
			ClearEvent(event);
			break;
		}
		case cmdAdd: // ���� ���������� ������� � ������
		{
			add();
			ClearEvent(event);
			break;
		}
		case cmdDel: // ���� ��������� ������� �� ������
		{
			del();
			ClearEvent(event);
			break;
		}
		case cmdShow: // ���� ������ ���� ��������� � �������
		{
			show();
			ClearEvent(event);
			break;
		}
		case cmdQuit: // ���� ������ �� ���������
		{
			EndState = 1;
			ClearEvent(event);
			break;
		}
		case cmdHelp:
		{
			cout <<endl << "������ ������:" << endl;
			cout << "m<size>: �������� ������ ������� size, �� ��������� size = 0" << endl;
			cout << "<+>:     ���������� �������� � ������" << endl;
			cout << "<->:     �������� �������� ������" << endl;
			cout << "<s>:     ����� ������ ���������� � ���� ���������" << endl;
			cout << "<z>:     ����� �������� ���� ���������" << endl;
			cout << "<q>:     ����� �� ���������" << endl;
			cout << "<h>:     ������ ������" << endl;
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