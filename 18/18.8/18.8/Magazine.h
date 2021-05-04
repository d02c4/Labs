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
        cout << "Название журнала: " << this->name << endl;
        cout << "Автор: " << this->author << endl;
        cout << "Количество страниц: " << this->pages << endl;
    }

    void Input()
    {
        setlocale(LC_ALL, "Ru");
        cout << "Введите название журнала: ";
        cin >> this->name;
        cout << "Автор: ";
        cin >> this->author;
        cout << "Введите количество страниц в журнале: ";
        cin >> this->pages;
    }
};

