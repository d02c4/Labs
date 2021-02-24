#include <iostream>
#include <string>
#include <ctime>
#include <algorithm>

using namespace std;

struct index
{
	int countR;
	int countC;
};

void countRC(int* rows, int* cols)
{
	while (*rows <= 0)
	{
		cout << "Введите количество строк: ";
		cin >> *rows;
	}

	while (*cols <= 0)
	{
		cout << "Введите количество столбцов: ";
		cin >> *cols;
	}
}

void FillArr(int** arr, int* rows, int* cols)
{
	for (int i = 0; i < *rows; i++) {

		for (int j = 0; j < *cols; j++) {

			arr[i][j] = rand() % 20;
		}
	}

}

void ShowArr(int** arr, int* rows, int* cols)
{
	cout << endl;
	for (int i = 0; i < *rows; i++)
	{
		for (int j = 0; j < *cols; j++)
		{
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
}


void countMax(int** arr, int* rows, int* cols, int* count, int* Max)
{

	for (int i = 0; i < *rows; i++)
	{
		for (int j = 0; j < *cols; j++)
		{
			if (*Max <= arr[i][j])
			{
				if (*Max == arr[i][j])
				{
					(*count)++;
				}
				else
				{
					*Max = arr[i][j];
					*count = 1;
				}
			}
		}
	}
}

void Search(index* arr3, int Max, int** arr, int rows, int cols, int* countRM, int* countCM)
{
	int c = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] == Max)
			{
				arr3[c].countR = i;
				arr3[c].countC = j;
				c++;
			}
		}
	}

	int* n1 = new int[c];
	int* n2 = new int[c];
	for (int i = 0; i < c; i++) {
		n1[i] = arr3[i].countC;
		n2[i] = arr3[i].countR;
	}
	sort(n1, n1 + c);
	sort(n2, n2 + c);

	for (int i = 1; i < c; i++) {
		if (n1[i] != n1[i - 1]) (*countCM)++;
		if (n2[i] != n2[i - 1]) (*countRM)++;
	}
}

void Del(int** arr, int* rows, int* cols, int** arr2, int* rows2, int* cols2, int* count, index* arr3)
{
	int q = 0;
	int w = 0;
	bool f = 0;

	for (int i = 0; i < *rows; i++)
	{
		w = 0;
		for (int j = 0; j < *cols; j++)
		{
			for (int k = 0; k < *count; k++)
			{
				if (i != arr3[k].countR && j != arr3[k].countC)
				{
					f = false;
				}
				else 
				{
					f = true;
					break;
				}
			}
			if (f == false)
			{
				arr2[q][w] = arr[i][j];
				w++;
			}
		}
		if (w != 0) {
			q++;
		}
	}
}

int main()
{

	setlocale(LC_ALL, "Ru");
	srand(time(0));

	int rows = 0;
	int cols = 0;
	int count = 1;
	int Max = -1;
	int countRM = 1;
	int countCM = 1;

	countRC(&rows, &cols);

	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}


	FillArr(arr, &rows, &cols);
	ShowArr(arr, &rows, &cols);

	countMax(arr, &rows, &cols, &count, &Max);

	index* arr3 = new index[count];

	Search(arr3, Max, arr, rows, cols, &countRM, &countCM);

	int rows2 = rows - countRM;
	int cols2 = cols - countCM;

	if (rows2 == 0 || cols == 0) {
		cout << endl << "В массиве не осталось элементов!" << endl;
		return 0;
	}
	int** arr2 = new int* [rows2];
	for (int i = 0; i < rows2; i++) {
		arr2[i] = new int[cols2];
	}
	Del(arr, &rows, &cols, arr2, &rows2, &cols2, &count, arr3);

	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	ShowArr(arr2, &rows2, &cols2);

	for (int i = 0; i < rows2; i++) {
		delete[] arr2[i];
	}

	delete[] arr2;

	delete[] arr3;
	return 0;
}