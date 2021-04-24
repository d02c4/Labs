#include <iostream>

using namespace std;


struct Queue
{
	int inf; // �������������� ����
	Queue* next; // ����, ������� ������ ����� ���������� �������� �������
};

void EnterSize(int* size) // ������� ����� ������� �������
{
	cout << "������� ������ �������: \t";
	cin >> (*size);

	while ((*size) < 1)
	{
		cout << "������ ������������ ������ �������!\n";
		cout << "������� ������ �������: \t";
		cin >> (*size);
	}
}

Queue* InitQueue(Queue* &ptrFirst, int size) // �������� �������
{
	if (size == 0) // �������� �� ������������� �������
	{
		return NULL;
	}
	else
	{
		Queue* ptr = new Queue; //  �������� �������� �������
		ptrFirst = ptr; // ��������� �� ������ ������� ������� ���������� ������ ������ ��������
		ptr->next = NULL; //  ���� �������� ����� ���������� ��������, ����� null
		cout << "������� 1 ������� �������:\t";
		cin >> ptr->inf; //  ������������ ������ ������ ��������������� ����
		for (int i = 2; i <= size; i++) //  ���� �� 2 �� ������� ������
		{
			Queue* h = new Queue; //  �������� ������ �������� �������
			cout << "������� " << i << " ������� �������:\t";
			cin >> h->inf; //  ������������ ������ ������ ��������������� ����
			h->next = NULL; //  ��������� ������ �������� �� ���� ������� ����� null
			ptr->next = h; // ���������� ������� ����������� �� ���������
			ptr = ptr->next; // ��������� � ���������� ��������
		}
		
	}
	return ptrFirst; //  ���������� ��������� �� ������ ������� �������
}

void PrintQueue(Queue* ptrFirst, int size) // ������� ������ � ������� ������
{

	cout << endl;
	Queue* ptr = ptrFirst; //  �������� ��������� �� ������ �������
	while(ptr != NULL) //  ���� ���� ���� �������
	{
		cout << ptr->inf << " "; // ����� ������� � �������
		ptr = ptr->next; //  ������� �� ��������� ������� �������
	}
	cout << endl;
}


void EditQueue(Queue* ptrFirst, int size) //  �������� ������ ��������� �������
{
	int count = 1; // �������� ��������
	Queue* ptr = ptrFirst; //  �������� ��������� ���������� ������ �������� �������� ������
	Queue* old = ptr; //   ��������� ����������, ������� ����� ������� ������ ������� ������
	Queue* D; //  �������� ���������� ���������

	while (ptr != NULL) //  ���� ���� �������� ������
	{
		if (count % 2 == 0) //   ���� ������� ������
		{
			D = ptr; //  ������������ ��������� D � ��������� ����������
			ptr = ptr->next; //  ��������� � ���������� ��������
			old->next = ptr; //  ��������� � ���� �� ��������� ��������� �� ����� �������
			delete D; //   ������� ��������� D
		}
		else
		{
			old = ptr; //  ���������� ����� �������
			ptr = ptr->next; //  ��������� �� ��������� �������
		}
		count++; //  ����������� �������
	}
}


int main()
{
	setlocale(LC_ALL, "Ru");
	int size;
	EnterSize(&size);
	Queue* ptrFirst;
	ptrFirst = InitQueue(ptrFirst, size);
	PrintQueue(ptrFirst, size);
	EditQueue(ptrFirst, size);
	PrintQueue(ptrFirst, size);
}
