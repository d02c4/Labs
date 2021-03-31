#include<iostream>
#include<string>
#include<ctime>
#include<stack>

using namespace std;

struct DATA
{
	int circulation;
	string name;
	int  numb;
};

void Init(DATA* newspaper, int size)
{
	string str[] = { "��������� � ����� ������","��������","THE ART NEWSPAPER RUSSIA","����� PRESSA.RU","������������� ������ ������������ ����","�� ���������� ����������","������������� ������. ������","����������� (�������)","�������� ������","����������� (�����������-�������)","���������� ������","���������� ������ - ������","�����","��� �����, �������������� ������","������������ ������","����� ������" };
	int count = sizeof(str) / sizeof(str[0]);

	for (int i = 0; i < size; i++)
	{
		int r = rand() % count;
		newspaper[i].name = str[r];
		newspaper[i].numb = i + 1;
		newspaper[i].circulation = 10000 + (rand() % 10000);
		
	}

}


void PrintH(DATA* newspaper, int size)
{
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "[" << newspaper[i].numb << "]" << endl;
		cout << "��������: " << newspaper[i].name << endl;
		cout << "�����: " << newspaper[i].circulation << endl;
		cout << endl << endl;
	}

}


void SHELL(DATA* newspaper, int size)
{

	int temp1;
	DATA temp2;
	int j;
	for (int step = size / 2; step > 0; step /= 2)
	{
		for (int i = step; i < size; i++)
		{
			temp1 = newspaper[i].circulation;
			temp2 = newspaper[i];
			for (j = i; j >= step; j -= step)
			{
				if (temp1 < newspaper[j - step].circulation)
				{
					newspaper[j] = newspaper[j - step];
				}
				else {
					break;
				}
			}
			newspaper[j] = temp2;
		}
	}
}


void HOAR(DATA* newspaper, int L, int R)
{
	int i = L;
	int	j = R;
	DATA tmp;
	int pivot = newspaper[(L + R) / 2].circulation;

	do {
		while (newspaper[i].circulation < pivot)
			i++;
		while (newspaper[j].circulation > pivot)
			j--;

		if (i <= j)
		{
			if (i < j)
			{
				tmp = newspaper[i];
				newspaper[i] = newspaper[j];
				newspaper[j] = tmp;
			}
			i++;
			j--;
		}
	} while (i <= j);

	if (i < R)
		HOAR(newspaper, i, R);
	if (L < j)
		HOAR(newspaper, L, j);
}

void AddChoice(DATA* newspaper, int size)
{
	int foo1 = 0;
	bool f1 = false;
	while (f1 == false) {
		switch (foo1)
		{
		case 1: SHELL(newspaper, size);  f1 = true;  break;
		case 2: HOAR(newspaper, 0, (size - 1));  f1 = true;  break;
		default: cout << endl <<  "�������� ��������:" << endl;
			cout << "1: ���������� ������� �����" << endl;
			cout << "2: ���������� ������� �����" << endl;
			cin >> foo1;
			cout << endl << endl;
			break;
		}
	}
}

bool Choice(DATA* newspaper, int size, int foo, bool f)
{

	switch (foo)
	{
	case 1: PrintH(newspaper, size); break;
	case 2: AddChoice(newspaper, size); break;
	case 3: f = true; break;
	default:
		break;
	}
	return f;
}

int main()
{
	setlocale(LC_ALL, "Ru");
	srand(time(NULL));

	int size = 0;

	while (size < 1)
	{
		cout << "������� ���������� �����: \t";
		cin >> size;
	}
	DATA* newspaper = new DATA[size];
	Init(newspaper, size);
	bool f = false;
	int foo = 0;
	while (f == false)
	{
		cout << endl;
		cout << "�������� ��������:" << endl;
		cout << "1: ���������� ������ � �������" << endl;
		cout << "2: ������������� ������" << endl;
		cout << "3: Exit" << endl;
		cin >> foo;
		f = Choice(newspaper, size, foo, f);
		cout << endl << endl;
	}


}