#include <iostream>
#include <ctime>
#include <algorithm>
#include <vector>
using namespace std;
struct HELP
{
	int ind1;
	int ind2;
	vector <int> ve1;
	vector <int> ve2;
	vector <int> ve3;
};
struct FIB
{
	int f1[6] = {5, 0, 3, 1, 0, 1};
	int f2[6] = {8, 3, 0, 2, 1, 0};
	int f3[6] = {0, 5, 2, 0, 1, 0};
};
void InitSize(int* size)
{
	cout << "Введите размер массива:\t";
	cin >> *size;
	while ((*size) < 1)
	{
		cout << "Размер должен быть натуральным числом!" << endl;
		cout << "Введите размер массива:\t";
		cin >> *size;
	}
}
void InitArr(int* arr, int* size)
{

	int r;
	cout << "Введите число до которого будут генерироваться числа:\t";
	cin >> r;

	while (r < 1)
	{
		cout << "Число должно быть натуральным числом!" << endl;
		cout << "Введите число до которого будут генерироваться числа:\t";
		cin >> r;
	}

	for (int i = 0; i < (*size); i++)
	{
		arr[i] = rand() % r;
	}

}
void PrintArr(int* arr, int size)
{
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void Balance(int* arr, int size, int l, int r) {
	if (r == l)
	{
		return;
	}
	if ((r - l) == 1) {
		if (arr[r] < arr[l])
		{
			swap(arr[r], arr[l]);
		}
		return;
	}
	int m = (r + l) / 2;
	Balance(arr, size, l, m);
	Balance(arr, size, m + 1, r);
	int* buf = new int[size];
	int xl = l;
	int xr = m + 1;
	int cur = 0;
	while (r - l + 1 != cur) {
		if (xl > m)
		{
			buf[cur++] = arr[xr++];
		}
		else if (xr > r)
		{
			buf[cur++] = arr[xl++];
		}
		else if (arr[xl] > arr[xr])
		{
			buf[cur++] = arr[xr++];
		}
		else
		{
			buf[cur++] = arr[xl++];
		}
	}
	for (int i = 0; i < cur; i++)
	{
		arr[i + l] = buf[i];
	}
}

void printVE(vector<vector<int>> VECT)
{
	cout << endl <<  "Отсортированный массив:\t";
	for (int i = 0; i < VECT.size(); i++)
	{
		for (int j = 0; j < VECT[i].size(); j++)
		{
			cout << VECT[i][j] << " ";
		}
	}
	cout << endl << endl;
}

void Naturalfusion(int* arr, int* size, vector<vector<int>>* VECT)
{
	vector<vector<int>> VHELP;
	int i = 0;
	while (i < *size)
	{
		vector<int> HELP;
		HELP.push_back(arr[i]);
		i++;
		while (i < (*size) && arr[i - 1] < arr[i])
		{
			HELP.push_back(arr[i]);
			i++;
		}
		VHELP.push_back(HELP);
	}

	int k = 0;
	while (VHELP.size() > 1)
	{
		vector<int> splitlist;
		vector<int> list1 = VHELP[k];
		vector<int> list2 = VHELP[k + 1];
		int n1 = 0;
		int n2 = 0;
		while (n1 < list1.size() && n2 < list2.size())
		{
			if (list1[n1] <= list2[n2])
			{
				splitlist.push_back(list1[n1]);
				n1++;
			}
			else
			{
				splitlist.push_back(list2[n2]);
				n2++;
			}
		}
		while (n1 < list1.size())
		{
			splitlist.push_back(list1[n1]);
			n1++;
		}
		while (n2 < list2.size())
		{
			splitlist.push_back(list2[n2]);
			n2++;
		}
		VHELP.push_back(splitlist);
		VHELP.erase(VHELP.begin());
		VHELP.erase(VHELP.begin());
	}
	*VECT = VHELP;
	VHELP.clear();
	printVE(*VECT);
}


vector<vector<int>> Splitser(vector<int> HELP, int size1, int size2)
{
	vector<vector<int>> hsort(size1 + size2);
	int count;
	if (HELP.size() < (size1 + size2))
	{
		count = 1;
	}
	else
	{
		if (HELP.size() % (size1 + size2) == 0)
		{
			count = HELP.size() / (size1 + size2);
		}
		else
		{
			count = HELP.size() / (size1 + size2);;
			count++;
		}
	}

	int c = 0;
	int k = 0;
	while (c < (size1 + size2))
	{
		vector<int> HH(count);
		for (int i = 0; i < count; i++)
		{
			if (k < HELP.size())
			{
				HH[i] = HELP[k];
				k++;
			}
			else
			{
				HH[i] = -1;
			}
		}
		hsort[c] = HH;
		c++;
	}
	return hsort;
}

void Polyphasesort(int* arr, int *size)
{
	vector<int> HELP;
	for (int i = 0; i < *size; i++)
	{
		HELP.push_back(arr[i]);
	}
	FIB SIZE;
	int size1 = SIZE.f1[0];
	int size2 = SIZE.f2[0];
	int size3 = SIZE.f3[0];
	vector<vector<int>> file1(SIZE.f1[0]);
	vector<vector<int>> file2(SIZE.f2[0]);
	vector<vector<int>> file3(SIZE.f3[0]);
	vector<vector<int>> series = Splitser(HELP, size1, size2);
	int j1 = 0;
	int j2 = 0;
	for (int i = 0; i < series.size(); i++)
	{
		for (int j = 0; j < size1; j++)
		{
			file1[j] = series[i];
			i++;
		}
		for (int j = 0; j < size2; j++)
		{
			file2[j] = series[i];
			i++;
		}
	}

	for (int i = 1; i <= 6; i++)
	{

		if (size1 == 0)
		{

		}
		else if (size2 == 0)
		{

		}
		else
		{
			if (size1 < size2)
			{
				for (int k = 0; k < size1; k++)
				{
					vector<int> HH(file1[k].size() + file2[k].size());
					for (int g = 0; g < file1[k].size(); g++)
					{
						HH.push_back(file1[k][g]);
					}
					for (int g = 0; g < file2[k].size(); g++)
					{
						HH.push_back(file2[k][g]);
					}
					file3[k] = HH;
					file1.erase(file1.begin());
					file2.erase(file2.begin());
				}
			}
		}

	}
	
}


void calc()
{
	cout << "Делимое:\t";
	int a;
	cin >> a;
	cout << "Делитель:\t";
	int res;
	cin >> res;


	int result = a % res;

	cout << endl << result << endl;
}







bool Choice(int* arr, int* size, bool f, int foo, int f1, vector<vector<int>> *VECT)
{
	switch (foo)
	{
	case 1:  InitArr(arr, size); break;
	case 2:  PrintArr(arr, *size); break;
	case 3:  Balance(arr, *size, 0, (*size - 1));  break;
	case 4:  Naturalfusion(arr, size, VECT);  break;
	case 5:  Polyphasesort(arr, size);  break;
	case 6: f = true; break;
	default:
		break;
	}
	return f;
}


int main()
{
	setlocale(LC_ALL, "Ru");
	srand(time(NULL));

	int size;
	InitSize(&size);
	int* arr = new int[size];
	vector<vector<int>> VECT;
	int foo = -1;
	bool f = false;
	bool f1 = false;
	while (f == false)
	{
		cout << endl;
		cout << "Выберете действие:" << endl;
		cout << "1: Инициализировать массив" << endl;
		cout << "2: Напечатать массив в консоль" << endl;
		cout << "3: Сортировка сбалансированного слияния" << endl;
		cout << "4: Сортировка методом натурального слияния" << endl;
		cout << "5: Сортировка многофазным слиянием" << endl;
		cout << "6: Выйти из программы" << endl;

		cin >> foo;
		f = Choice(arr, &size, f, foo, f1, &VECT);
	}
	
}
