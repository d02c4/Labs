#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Pair.h"
using namespace std;

void DeleteElements(char* fileName, double min)
{
    ifstream streamR; // создание файлового потока из файла
    streamR.open(fileName); // открываем файл для чтения
    ofstream streamW; //  создание файлового потока в файл
    streamW.open("temp.txt"); // открываем файл для записи

    while (!streamR.eof()) // пока не достигнем конца файла 
    {
        Pair element; // создаем объект класса который содержит пары элементов
        streamR >> element; // с помощью перегруженного оператора вывода записываем в объект класса пары чисел
        if (element != Pair()) // проверка на последнюю строку
        {
            // проверка условия удаления элемента
            if (element.GetFirst() >= min || element.GetSecond() >= min) // если элемент больше заданного то он остается
            {
                streamW << element; // записываем в файл те элементы которые удовлетворяют условиям
            }
        }
    }

    streamR.close(); // закрывается файловый поток открытый для чтения
    streamW.close(); // закрывается файловый поток открытый для записи
    // удаление старого файла и замещение его новым
    remove(fileName); // удаление старого файла
    rename("temp.txt", fileName);
}

void IncreaseElement(char* fileName, int valueFirst, double valueSecond, int L) // функция которая увеличивает поля элемента класса
{
    ifstream streamR; //  создаем файловый поток для чтения
    streamR.open(fileName); // открываем файловый поток для чтения
    ofstream streamW; //  создаем файловый пооток для записи
    streamW.open("temp.txt"); // открываем файловый поток для записи

    while (!streamR.eof()) // пока не файл не кончится
    {
        Pair element; // создаем элемент нашего класса
        streamR >> element; // выводим из файлового потока и записываем в поля нашего класса
        if (element != Pair()) // проверка на последнюю строку файла
        {
            // проверка элемента на условия для увеличения
            if (element.GetFirst() == valueFirst && element.GetSecond() == valueSecond)
            {
                element.SetFirst(element.GetFirst() + L); // меняем значение поля с помощью сеттера, увеличиваем элементы на заданную константу
                element.SetSecond(element.GetSecond() + L); // меняем значение поля с помощью сеттара, увеличиваем элемента на заданную константу
            }
            streamW << element; // записываем в файл
        }
    }
    streamR.close(); // закрываем файловый поток для чтения
    streamW.close(); // закрываем файлоый поток для записи
    remove(fileName); // удаление файла
    rename("temp.txt", fileName);
}

void AddElements(char* fileName, vector<Pair> newElements, int ind) // добавление элементов в файл
{
    ifstream streamR; // создаем поток для чтения
    streamR.open(fileName); // открываем поток для чтения
    ofstream streamW; // создаем поток для записи
    streamW.open("temp.txt"); // открываем поток для записи

    int count = 0; // счетчик
    if (ind == 0)
    {
        // добавление элементов в выходной поток
        for (int i = 0; i < newElements.size(); i++) // проходимся по всему вектору
        {
            streamW << newElements[i]; // записываем с помощью перегруженного оператора вывода новые элементы в файл
            newElements[i].SetIndex(i);
        }
    }
    while (!streamR.eof()) // пока не достигли конца файла
    {
        Pair element; // создаем элемент класса Pair
        streamR >> element; // записываем с помощью потока для чтения из файла и записываем в наш новый элемент
        if (element != Pair()) //  проверяем на последнюю строку
        {
            streamW << element; // записываем новый элемент в файл с помощью перегруженного оператора вывода
            count++; // увеличиваем счетчик

            if (ind == count)  // если текущая позиция равна требуемой позиции то 
            {
                for (int i = 0; i < newElements.size(); i++) // проходимся по всему размеру вектора 
                {
                    streamW << newElements[i]; // добавляем с помощью перегруженного оператора вывода новый элемент в файл
                }
            }
        }
    }
    streamR.close(); //  закрываем файловый поток открытый для чтения
    streamW.close(); // закрываем файловый поток открытый для записи
    remove(fileName); //  удаляем файл
    rename("temp.txt", fileName);
}

vector<Pair> ReadFile(string fileName) // чтение пар чисел из файла
{
    vector<Pair> res; // резултирующий вектор

    ifstream streamR; // поток который считывает данные из файла
    streamR.open(fileName); // открываем файл
    int count = 0; // счетчик считанных элементов
    while (!streamR.eof()) // проходимя по всему файлу пока не достигнем конца файла
    {
        Pair element; // объект класса Pair
        streamR >> element; // заполняем поля объекта класса с помощью оператора вывода
        if (element != Pair()) // если пара чисел существует, то
        {
            element.SetIndex(count);
            res.push_back(element); // добавляем объект класса в конец вектора
        }
    }

    streamR.close(); // закрываем файловый поток
    return res; // возвращаем указатель на вектор
}

void Print(vector<Pair> collection) // функция вывода вектора который хранит пары чисел в консоль
{
    for (int i = 0; i < collection.size(); i++) // проходимся по всему вектору
    {
        cout << "  [" << i << "]" << endl; // номер объекта
        cout << collection[i] << endl;; // выводим с помощью перегруженного оператора вывода пару чисел в консоль
        cout << "__________" << endl << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "rus");

    char tmp = '5';
    while (tmp != '0')
    {
        tmp = '5';
        cout << "========================" << endl;
        cout << "0:\tВыход" << endl;
        cout << "1:\tЧтение файла" << endl;
        cout << "2:\tЧтение с удалением" << endl;
        cout << "3:\tЧтение с изменением" << endl;
        cout << "4:\tЧтение с добавлением" << endl;
        cin >> tmp;

        char path[] = "F1.txt";
        vector<Pair> pairs;

        switch (tmp)
        {
        case '1':
        {
            cout << "Чтение из файла без изменений" << endl;
            pairs = ReadFile(path);
        };
        break;
        case '2':
        {
            cout << "Введите минимально возможное значение для пар: \t";
            double min;
            cin >> min;
            cout << "Чтение из файла с удалением элементов меньше " << endl;
            DeleteElements(path, min);
            pairs = ReadFile(path);
        };
        break;
        case '3':
        {
            int f;
            double s;
            cout << "Введите пару, которую нужно увеличить" << endl;
            cin >> f >> s;

            cout << "Чтение из файла с увеличением элементов на 2" << endl;
            IncreaseElement(path, f, s, 2);
            pairs = ReadFile(path);
        };
        break;
        case '4':
        {
            int first1;
            int first2;
            int ind = -1;
            double second1, second2;
            cout << "Введите 2 пары" << endl;
            cout << "Введите первое число типа int:\t";
            cin >> first1;
            cout << "Введите 2 число типа double:\t";
            cin >> second1;
            cout << "Введите первое число типа int:\t";
            cin >> first2;
            cout << "Введите 2 число типа double:\t";
            cin >> second2;
            pairs = ReadFile(path);
            while (ind < 0 || ind > pairs.size())
            {
                cout << "На какое место вставить эти элементы:\t";
                cin >> ind;
            }

            cout << "Чтение из файла с добавлением двух элементов" << endl;
            vector<Pair> newElements = { Pair(first1, second1), Pair(first2, second2) };
            AddElements(path, newElements, ind);
            pairs = ReadFile(path);
        };
        break;
        }
        Print(pairs);
    }
}