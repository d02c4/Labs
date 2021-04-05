#include <iostream>
#include "Iterator.h"
#include "LIST.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ru");
	LIST list1(10);
	LIST list2(5);
	cout << "Заполните первый LIST\n";
	cin >> list1;
	cout << "Заполните второй LIST\n";
	cin >> list2;
	cout << "___________________________________________________________\n";
	cout << "LIST 1:\t" << list1 << endl;
	cout << "___________________________________________________________\n";
	cout << "LIST 2:\t" << list2 << endl;
	cout << "___________________________________________________________\n";
	LIST list3 = list1 * list2;
	cout << "LIST1 * LIST2 = \t" << list3 << endl;
	Iterator tmp;
	tmp(&list1[0]);
	tmp + 4;
	cout << "___________________________________________________________\n";
	cout << *tmp << endl;
	cout << "___________________________________________________________\n";

	return 0;
}