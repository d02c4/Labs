#pragma once
#include "PRINT.h"
class Magazine :
    public PRINT
{
protected:
    int pages;
public:
    Magazine() :PRINT() 
    {
        this->pages = 0;
    }

    Magazine(string name, string author, int pages) : PRINT(name, author)
    {
        this->pages = pages;
    }

    ~Magazine(){}

    void Show()
    {
        setlocale(LC_ALL, "Ru");
        cout << "�������� �������: " << this->name << endl;
        cout << "�����: " << this->author << endl;
        cout << "���������� �������: " << this->pages << endl;
    }

    void Input()
    {
        setlocale(LC_ALL, "Ru");
        cout << "������� �������� �������: ";
        cin >> this->name;
        cout << "�����: ";
        cin >> this->author;
        cout << "������� ���������� ������� � �������: ";
        cin >> this->pages;
    }
};

