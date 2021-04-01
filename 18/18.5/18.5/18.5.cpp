#include <iostream> 
#include "PERSON.h" 
#include "Student.h" 
#include "Object.h"
#include "Vector.h"
using namespace std;


int main()
{
	system("chcp 1251>nul");
	Vector vec(5); // вектор состоящий из 5 элементов
	PERSON a;// Создание объекта класса Car
	cin >> a;// Заполнение полей объекта класса Car
	STUDENT b;// Создание объекта класса STUDENT
	cin >> b;// Заполнение полей объекта класса STUDENT
	Object* ptr = &a;// Постановка указателя на объект класса Car
	vec.Add(ptr);// Добавляем объект в вектор
	ptr = &b;// Ставим указатель на объект класса STUDENT
	vec.Add(ptr);// Добавляем объект класса STUDENT в вектор
	cout << vec;// Вывод всех элементов вектора со всеми полями
	return 0;
}
