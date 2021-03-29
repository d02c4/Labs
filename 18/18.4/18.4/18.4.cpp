#include <iostream> 
#include "PERSON.h" 
#include "Student.h" 
using namespace std;

// глобальные функции 
void f1(STUDENT&c)
{
	c.Set_name("Maxim");
	cout << c;

}

PERSON f2()
{
	STUDENT l("Alex", 18, 2, "inform"); 
	cout << l;
	l.Check_Mark(l);
	return l;
}

void main()
{
	setlocale(LC_ALL, "Ru");

	//работа с классом PERSON 
	PERSON a;
	cin >> a; 
	cout << a;
	PERSON b("Pavel", 18); 
	cout << b;
	a = b; 
	cout << a;

	//работа с классом STUDENT 
	STUDENT c;
	cin >> c; 
	cout << c;
	c.Check_Mark(c);
	//принцип подстановки 
	f1(c);//передаем объект класса STUDENT
	c.Check_Mark(c);
	f2();//создаем в функции объект класса STUDENT 
}
