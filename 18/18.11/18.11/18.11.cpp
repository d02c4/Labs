#include <iostream>
#include <list>
#include "LIST.h"
#include <vector>
#include "Pair.h"
#include <queue>

using namespace std;


template<typename T>
void Print(list<T> l)
{
    cout << endl << "=========================================================================================\n\n";
    while (l.empty()!= true)
    {
        cout << l.front() << " \t";
        l.pop_front();
    }
    cout << endl << "=========================================================================================\n\n\n";
}

void Print(priority_queue<double> q)
{
    cout << endl << "=========================================================================================\n\n";
    while (q.empty() != true)
    {
        cout << q.top() << " \t";
        q.pop();
    }
    cout << endl << "=========================================================================================\n\n\n";
}

int SIZE(double *size)
{
    while (*size < 1)
    {
        cout << "Введите размер : ";
        cin >> *size;
    }
    return *size;
}

template<typename T>
list<T> increase(list<T> *l)
{
    list<T> lcopy;
    copy(l->begin(), l->end(), back_inserter(lcopy)); // функция копирования списка
    T max;
    max = -1;
    T min;
    min = 101;
    while (lcopy.empty() != true)
    {
        if (max < lcopy.front())
        {
            max = lcopy.front();
        }
        if (min > lcopy.front())
        {
            min = lcopy.front();
        }
        lcopy.pop_front();
    }
    cout << endl << "min: " << min << endl;
    cout << endl << "max: " << max << endl;
    T res = min + max;
    while (l->empty() != true)
    {
        lcopy.push_back(l->front() + res);
        l->pop_front();
    }
    return lcopy;
}

priority_queue<double> increase(priority_queue<double>* q)
{
    priority_queue<double> qcopy = *q;
    double max;
    max = -1;
    double min;
    min = 101;
    while (qcopy.empty() != true)
    {
        if (max < qcopy.top())
        {
            max = qcopy.top();
        }
        if (min > qcopy.top())
        {
            min = qcopy.top();
        }
        qcopy.pop();
    }
    cout << endl << "min: " << min << endl;
    cout << endl << "max: " << max << endl;
    double res = min + max;
    while (q->empty() != true)
    {
        qcopy.push(q->top() + res);
        q->pop();
    }
    return qcopy;
}

template <typename T>
void Del(list<T> *l)
{
    cout << "Введите диапазон\n";
    int left = -1;
    while (left < 0 || left > 15)
    {
        cout << "Левая граница: ";
        cin >> left;
    }
    int right = -1;
    while (right < left || right > l->size())
    {
        cout << "Правая граница граница: ";
        cin >> right;
    }
    vector<T> tmp;
    while (l->empty() != true)
    {
        tmp.push_back(l->front());
        l->pop_front();
    }
    tmp.erase(tmp.begin() + left, tmp.begin() + right);
    for (int i = 0; i < tmp.size(); i++)
    {
        l->push_back(tmp[i]);
    }
    tmp.clear();
}

void Del(priority_queue<double> *q)
{
    cout << "Введите диапазон\n";
    int left = -1;
    while (left < 0 || left > 15)
    {
        cout << "Левая граница: ";
        cin >> left;
    }
    int right = -1;
    while (right < left || right > q->size())
    {
        cout << "Правая граница граница: ";
        cin >> right;
    }
    vector<double> tmp;
    while (q->empty() != true)
    {
        tmp.push_back(q->top());
        q->pop();
    }
    tmp.erase(tmp.begin() + left, tmp.begin() + right);
    for (int i = 0; i < tmp.size(); i++)
    {
        q->push(tmp[i]);
    }
    tmp.clear();
}

void average(list<double>* l)
{
    list<double> lcopy;
    copy(l->begin(), l->end(), back_inserter(lcopy)); // функция копирования списка
    double AVG = 0;
    while (lcopy.empty() != true) // пока в новом списке есть элементы
    {
        AVG += lcopy.front();
        lcopy.pop_front();
    }
    AVG = AVG / l->size();
    l->push_back(AVG);
}

void average(list<Pair>* l)
{
    list<Pair> lcopy;
    copy(l->begin(), l->end(), back_inserter(lcopy)); // функция копирования списка
    Pair AVG;
    while (lcopy.empty() != true) // пока в новом списке есть элементы
    {
        AVG = AVG + lcopy.front();
        lcopy.pop_front();
    }
    AVG.set_first(AVG.get_first() / l->size());
    AVG.set_second(AVG.get_second() / l->size());
    l->push_back(AVG);
}

void average(priority_queue<double>* q)
{
    priority_queue<double> qcopy = *q;
    double AVG = 0;
    while (qcopy.empty() != true)
    {
        AVG += qcopy.top();
        qcopy.pop();
    }
    AVG = AVG / q->size();
    q->push(AVG);
}

void List()
{
    cout << "СПИСОК ИЗ 1 ЗАДАНИЯ\n";
    list<double> l;
    double size = 0;
    SIZE(&size);
    for (int i = 0; i < (int)size; i++)
    {
        double tmp = rand() % 100 / 2.123;
        l.push_back(tmp);
    }
    Print(l);
    average(&l);
    Print(l);
    Del(&l);
    Print(l);
    l = increase(&l);
    Print(l);
}

void LISTPAIR()
{
    cout << "СПИСОК ИЗ 2 ЗАДАНИЯ\n";
    list<Pair> l;
    double size = 0;
    SIZE(&size);
    for (int i = 0; i < (int)size; i++)
    {
        Pair tmp(rand() % 100, rand() % 100 / 2.123); // инициализация объекта класса
        l.push_back(tmp);
    }
    Print(l);
    average(&l);
    Print(l);
    Del(&l);
    Print(l);
    l = increase(&l);
    Print(l);
}

void InitLIST()
{
    cout << "Параметризированный список" << endl;
    double size = 0;
    SIZE(&size);
    LIST<double> l(size);
    cout << l;
    l.AVG();
    cout << l;
    l.LR();
    cout << l;
    l.PLUS_MIN_MAX();
    cout << l;
  
}

void QUEUE()
{
    cout << "ОЧЕРЕДЬ С ПРИОРИТЕТАМИ ИЗ 4 ЗАДАНИЯ\n";
    priority_queue<double> q;
    double size = 0;
    SIZE(&size);
    for (int i = 0; i < (int)size; i++)
    {
        q.push(rand() % 100 / 2.123);
    }

    Print(q);
    average(&q);
    Print(q);
    Del(&q);
    Print(q);
    q = increase(&q);
    Print(q);
}

void QUEUELIST()
{
    //priority_queue<double, LIST<double>> l;
    //l.push(10);
    //cout << l.top();
}

int main()
{
    setlocale(LC_ALL, "Ru");
    List();
    LISTPAIR();
    InitLIST();
    QUEUE();
    QUEUELIST();
}

