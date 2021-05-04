#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Pair.h"
using namespace std;

void DeleteElements(char* fileName, double min)
{
    ifstream streamR; // �������� ��������� ������ �� �����
    streamR.open(fileName); // ��������� ���� ��� ������
    ofstream streamW; //  �������� ��������� ������ � ����
    streamW.open("temp.txt"); // ��������� ���� ��� ������

    while (!streamR.eof()) // ���� �� ��������� ����� ����� 
    {
        Pair element; // ������� ������ ������ ������� �������� ���� ���������
        streamR >> element; // � ������� �������������� ��������� ������ ���������� � ������ ������ ���� �����
        if (element != Pair()) // �������� �� ��������� ������
        {
            // �������� ������� �������� ��������
            if (element.GetFirst() >= min || element.GetSecond() >= min) // ���� ������� ������ ��������� �� �� ��������
            {
                streamW << element; // ���������� � ���� �� �������� ������� ������������� ��������
            }
        }
    }

    streamR.close(); // ����������� �������� ����� �������� ��� ������
    streamW.close(); // ����������� �������� ����� �������� ��� ������
    // �������� ������� ����� � ��������� ��� �����
    remove(fileName); // �������� ������� �����
    rename("temp.txt", fileName);
}

void IncreaseElement(char* fileName, int valueFirst, double valueSecond, int L) // ������� ������� ����������� ���� �������� ������
{
    ifstream streamR; //  ������� �������� ����� ��� ������
    streamR.open(fileName); // ��������� �������� ����� ��� ������
    ofstream streamW; //  ������� �������� ������ ��� ������
    streamW.open("temp.txt"); // ��������� �������� ����� ��� ������

    while (!streamR.eof()) // ���� �� ���� �� ��������
    {
        Pair element; // ������� ������� ������ ������
        streamR >> element; // ������� �� ��������� ������ � ���������� � ���� ������ ������
        if (element != Pair()) // �������� �� ��������� ������ �����
        {
            // �������� �������� �� ������� ��� ����������
            if (element.GetFirst() == valueFirst && element.GetSecond() == valueSecond)
            {
                element.SetFirst(element.GetFirst() + L); // ������ �������� ���� � ������� �������, ����������� �������� �� �������� ���������
                element.SetSecond(element.GetSecond() + L); // ������ �������� ���� � ������� �������, ����������� �������� �� �������� ���������
            }
            streamW << element; // ���������� � ����
        }
    }
    streamR.close(); // ��������� �������� ����� ��� ������
    streamW.close(); // ��������� ������� ����� ��� ������
    remove(fileName); // �������� �����
    rename("temp.txt", fileName);
}

void AddElements(char* fileName, vector<Pair> newElements, int ind) // ���������� ��������� � ����
{
    ifstream streamR; // ������� ����� ��� ������
    streamR.open(fileName); // ��������� ����� ��� ������
    ofstream streamW; // ������� ����� ��� ������
    streamW.open("temp.txt"); // ��������� ����� ��� ������

    int count = 0; // �������
    if (ind == 0)
    {
        // ���������� ��������� � �������� �����
        for (int i = 0; i < newElements.size(); i++) // ���������� �� ����� �������
        {
            streamW << newElements[i]; // ���������� � ������� �������������� ��������� ������ ����� �������� � ����
            newElements[i].SetIndex(i);
        }
    }
    while (!streamR.eof()) // ���� �� �������� ����� �����
    {
        Pair element; // ������� ������� ������ Pair
        streamR >> element; // ���������� � ������� ������ ��� ������ �� ����� � ���������� � ��� ����� �������
        if (element != Pair()) //  ��������� �� ��������� ������
        {
            streamW << element; // ���������� ����� ������� � ���� � ������� �������������� ��������� ������
            count++; // ����������� �������

            if (ind == count)  // ���� ������� ������� ����� ��������� ������� �� 
            {
                for (int i = 0; i < newElements.size(); i++) // ���������� �� ����� ������� ������� 
                {
                    streamW << newElements[i]; // ��������� � ������� �������������� ��������� ������ ����� ������� � ����
                }
            }
        }
    }
    streamR.close(); //  ��������� �������� ����� �������� ��� ������
    streamW.close(); // ��������� �������� ����� �������� ��� ������
    remove(fileName); //  ������� ����
    rename("temp.txt", fileName);
}

vector<Pair> ReadFile(string fileName) // ������ ��� ����� �� �����
{
    vector<Pair> res; // ������������� ������

    ifstream streamR; // ����� ������� ��������� ������ �� �����
    streamR.open(fileName); // ��������� ����
    int count = 0; // ������� ��������� ���������
    while (!streamR.eof()) // ��������� �� ����� ����� ���� �� ��������� ����� �����
    {
        Pair element; // ������ ������ Pair
        streamR >> element; // ��������� ���� ������� ������ � ������� ��������� ������
        if (element != Pair()) // ���� ���� ����� ����������, ��
        {
            element.SetIndex(count);
            res.push_back(element); // ��������� ������ ������ � ����� �������
        }
    }

    streamR.close(); // ��������� �������� �����
    return res; // ���������� ��������� �� ������
}

void Print(vector<Pair> collection) // ������� ������ ������� ������� ������ ���� ����� � �������
{
    for (int i = 0; i < collection.size(); i++) // ���������� �� ����� �������
    {
        cout << "  [" << i << "]" << endl; // ����� �������
        cout << collection[i] << endl;; // ������� � ������� �������������� ��������� ������ ���� ����� � �������
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
        cout << "0:\t�����" << endl;
        cout << "1:\t������ �����" << endl;
        cout << "2:\t������ � ���������" << endl;
        cout << "3:\t������ � ����������" << endl;
        cout << "4:\t������ � �����������" << endl;
        cin >> tmp;

        char path[] = "F1.txt";
        vector<Pair> pairs;

        switch (tmp)
        {
        case '1':
        {
            cout << "������ �� ����� ��� ���������" << endl;
            pairs = ReadFile(path);
        };
        break;
        case '2':
        {
            cout << "������� ���������� ��������� �������� ��� ���: \t";
            double min;
            cin >> min;
            cout << "������ �� ����� � ��������� ��������� ������ " << endl;
            DeleteElements(path, min);
            pairs = ReadFile(path);
        };
        break;
        case '3':
        {
            int f;
            double s;
            cout << "������� ����, ������� ����� ���������" << endl;
            cin >> f >> s;

            cout << "������ �� ����� � ����������� ��������� �� 2" << endl;
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
            cout << "������� 2 ����" << endl;
            cout << "������� ������ ����� ���� int:\t";
            cin >> first1;
            cout << "������� 2 ����� ���� double:\t";
            cin >> second1;
            cout << "������� ������ ����� ���� int:\t";
            cin >> first2;
            cout << "������� 2 ����� ���� double:\t";
            cin >> second2;
            pairs = ReadFile(path);
            while (ind < 0 || ind > pairs.size())
            {
                cout << "�� ����� ����� �������� ��� ��������:\t";
                cin >> ind;
            }

            cout << "������ �� ����� � ����������� ���� ���������" << endl;
            vector<Pair> newElements = { Pair(first1, second1), Pair(first2, second2) };
            AddElements(path, newElements, ind);
            pairs = ReadFile(path);
        };
        break;
        }
        Print(pairs);
    }
}