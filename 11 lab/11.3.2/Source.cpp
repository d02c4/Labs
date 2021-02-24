#include <iostream>
#include <stack>

using namespace std;


void InitSize(int* size)
{
	cout << "������� ������ �����: \t";
	cin >> *size;
	while (*size < 1)
	{
		cout << "������ ������������ ������ �����!" << endl;
		cout << "������� ������ �����: \t";
		cin >> *size;
	}
}

void StackInit(stack<double>& st, int size)
{
	double a;
	for (int i = 0; i < size; i++)
	{
		cout << "������� " << i + 1 << " ������� �����:\t";
		cin >> a;
		st.push(a);
	}
}

void EditStack(stack<double> &st, int *size)
{
	stack<double> Dst;
	for (int i = 0; i < *size; i++)
	{
		Dst.push(st.top());
		st.pop();
	}
	for (int i = 0; i < *size; i++)
	{
		if (Dst.top() < 0)
		{
			st.push(Dst.top());
			st.push(0);
		}
		else
		{
			st.push(Dst.top());
		}
		Dst.pop();
	}
	*size = st.size();
}

void PrintStack(stack<double> st, int size)
{
	cout << endl << endl;
	if (size == 0)
	{
		cout << "���� ����!\n";
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			cout << st.top() << " ";
			st.pop();
		}
	}
}

int main()
{

	setlocale(LC_ALL, "Ru");
	int size;
	InitSize(&size);
	stack<double> st;
	StackInit(st, size);
	PrintStack(st, size);
	EditStack(st, &size);
	PrintStack(st, size);
}