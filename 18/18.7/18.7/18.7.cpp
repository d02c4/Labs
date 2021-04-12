#include <iostream>
#include "LIST.h"
#include "Pair.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ru");
	LIST<double> list1(10);
	LIST<double> list2(5);
	cout << "Заполните первый LIST\n";
	cin >> list1;
	cout << "Заполните второй LIST\n";
	cin >> list2;
	cout << "___________________________________________________________\n";
	cout << "LIST 1:\t" << list1 << endl;
	cout << "___________________________________________________________\n";
	cout << "LIST 2:\t" << list2 << endl;
	cout << "___________________________________________________________\n";
	LIST<double> list3 = list1 * list2;
	cout << "LIST1 * LIST2 = \t" << list3 << endl;
	LIST<Pair> list4(5);
	cout << "Список пар чисел:\n" << list4 << endl;
	return 0;
}
