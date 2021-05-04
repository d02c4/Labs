#include "PRINT.h"


PRINT::PRINT()
{
	this->name = "";
	this->author = "";
}

PRINT::PRINT(string name, string author)
{
	this->name = name;
	this->author = author;
}

PRINT::PRINT(const PRINT& other)
{
	this->name = other.name;
	this->author = other.author;
}

PRINT::~PRINT()
{

}

string PRINT::getName()
{
	return name;
}

string PRINT::getAuthor()
{
	return author;
}

void PRINT::setName(string name)
{
	this->name = name;
}

void PRINT::setAuthor(string author)
{
	this->author = author;
}

PRINT& PRINT::operator=(const PRINT& other)
{
	if (&other == this) // �������� �� ����������������
	{
		return *this;
	}
	else
	{
		this->name = other.name;
		this->author = other.author;
		return *this;
	}
}

void PRINT::Show()
{
	setlocale(LC_ALL, "Ru");
	cout << "�������� ��������� �������: " << this->name << endl;
	cout << "�����: " << this->author << endl;
}


void PRINT::Input()
{
	cout << "������� �������� ��������� �������: ";
	cin >> this->name;
	cout << "������� ������: ";
	cin >> this->author;
}

void PRINT::HandleEvent(TEvent& event)
{
	setlocale(LC_ALL, "Ru");
	if (event.what == evMessege)
	{
		switch (event.command)
		{
		case cmdName: cout << "�������� �������: " << getName() << endl; break;
		}
	}
}