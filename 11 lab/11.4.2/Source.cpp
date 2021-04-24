#include <iostream>
#include <queue>
using namespace std;

void EnterSize(int* size) //  фукнци€ ввода размера очереди
{
    cout << "¬ведите размер очереди: \t";
    cin >> *size;
    while (*size < 1)
    {
        cout << "¬веден некорректный размер очереди!" << endl;
        cout << "¬ведите размер очереди: \t";
        cin >> *size;
    }
}


void InitQueue(int size, queue<int> &q) //  функци€ создани€ очереди
{
       int a; //  создание временной переменной котора€ будет хранить значение одного из элементов очереди
       for (int i = 1; i <= size; i++) //  цикл от 0 до размера списка
       {
           cout << "¬ведите " << i << " элемент очереди:\t";
           cin >> a; //  ввод элемента списка
           q.push(a); //  помещение элемента списка в конец очереди
       }
}


void PrintQueue(queue<int> q) //  печать всех элементов очереди в консоль
{
    cout << endl;
    while (!q.empty()) //  пока список не пуст
    {
        cout << q.front() << " "; //  вывод элемента списка в консоль
        q.pop(); //  удаление первого элемента списка из очереди
    }
    cout << endl;
}

void EditQueue(queue<int> &q) //  функци€ удалени€ каждого второго элемента очереди
{
    int count = 1; //  создаение счетчика
    
    queue<int> qd; //  создание временной очереди

    while (!q.empty()) //  проверка на пустоту очереди
    {
        if (count % 2 != 0) //  если элемент нечетный
        {
            qd.push(q.front()); //   то помещаем его в новую очередь
        }
        q.pop(); // удал€ем первый элемент изначальной очереди
        count++; //   увеличиваем счетчик
    }
    q = qd; //  приравниваем временную очередь к старой очереди
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
