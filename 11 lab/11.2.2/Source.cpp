#include <iostream>
#include <iterator>
#include <list>

using namespace std;

void EnterSize(int *size)
{
	cout << "������� ������ ������: \t";
	cin >> (*size);

	while ((*size) < 1)
	{
		cout << "������ ������������ ������ ������!\n";
		cout << "������� ������ ������: \t";
		cin >> (*size);
	}
}

void fillLIST(list<int> &LIST, int size)
{
	int el;
	for (int i = 0; i < size; i++)
	{
		cout << "������� " << i + 1 << " ������� ������:\t";
		cin >> el;
		LIST.push_back(el);
	}
	
}

void PrintLIST(list<int> &LIST)
{
	
	for (list<int>::const_iterator it = LIST.cbegin(); it != LIST.cend(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
}


void EditLIST(list<int> &LIST)

{
	list<int>::iterator it = LIST.begin();
	list<int>LIST2;
	int count = 1;
	
	for (list<int>::const_iterator it = LIST.cbegin(); it != LIST.cend(); it++)
	{
		if (count % 2 != 0)
		{
			LIST2.push_back((*it));
		}
		count++;
	}
	LIST.assign(LIST2.begin(), LIST2.end());
	LIST2.clear();
}




int main()
{

	setlocale(LC_ALL, "Ru");
	int size;
	EnterSize(&size);
	list<int> LIST;
	

	fillLIST(LIST, size);
	PrintLIST(LIST);
	EditLIST(LIST);
	PrintLIST(LIST);
	LIST.clear();
}