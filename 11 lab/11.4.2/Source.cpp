#include <iostream>
#include <queue>
using namespace std;

void EnterSize(int* size) //  ������� ����� ������� �������
{
    cout << "������� ������ �������: \t";
    cin >> *size;
    while (*size < 1)
    {
        cout << "������ ������������ ������ �������!" << endl;
        cout << "������� ������ �������: \t";
        cin >> *size;
    }
}


void InitQueue(int size, queue<int> &q) //  ������� �������� �������
{
       int a; //  �������� ��������� ���������� ������� ����� ������� �������� ������ �� ��������� �������
       for (int i = 1; i <= size; i++) //  ���� �� 0 �� ������� ������
       {
           cout << "������� " << i << " ������� �������:\t";
           cin >> a; //  ���� �������� ������
           q.push(a); //  ��������� �������� ������ � ����� �������
       }
}


void PrintQueue(queue<int> q) //  ������ ���� ��������� ������� � �������
{
    cout << endl;
    while (!q.empty()) //  ���� ������ �� ����
    {
        cout << q.front() << " "; //  ����� �������� ������ � �������
        q.pop(); //  �������� ������� �������� ������ �� �������
    }
    cout << endl;
}

void EditQueue(queue<int> &q) //  ������� �������� ������� ������� �������� �������
{
    int count = 1; //  ��������� ��������
    
    queue<int> qd; //  �������� ��������� �������

    while (!q.empty()) //  �������� �� ������� �������
    {
        if (count % 2 != 0) //  ���� ������� ��������
        {
            qd.push(q.front()); //   �� �������� ��� � ����� �������
        }
        q.pop(); // ������� ������ ������� ����������� �������
        count++; //   ����������� �������
    }
    q = qd; //  ������������ ��������� ������� � ������ �������
}

int main()
{
    setlocale(LC_ALL, "Ru");
    int size;
    EnterSize(&size);
	queue<int> q;
    InitQueue(size, q);
    PrintQueue(q);
    EditQueue(q);
    PrintQueue(q);
}
