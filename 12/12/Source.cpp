#include <iostream>
#include <string>
#include <list>
#include <ctime>
#include <fstream>

using namespace std;



struct DATA
{
	string Name;
	string Surname;
	string Middle;

	int day;
	int month;
	int year;
	int ind;
	int date;
};

struct DATAHELP
{
	int date;
	int ind;
};

DATA* ptr;


void humanINIT(DATA* human, int size)
{
	string name[] = { "Александр", "Алексей", "Анатолий", "Андрей", "Антон", "Аркадий", "Арсений", "Артём", "Артур", "Борис", "Вадим", "Валентин", "Валерий", "Василий", "Виктор", "Виталий", "Владимир", "Владислав", "Вячеслав", "Георгий", "Глеб", "Григорий", "Даниил", "Денис", "Дмитрий", "Евгений", "Егор", "Иван", "Игорь", "Илья", "Кирилл", "Константин", "Лев", "Леонид", "Максим", "Марк", "Матвей", "Михаил", "Никита", "Николай", "Олег", "Павел", "Пётр", "Роман", "Руслан", "Сергей", "Степан", "Тимур", "Фёдор", "Юрий", "Ярослав" };
	string surname[] = { "Пантелеев", "Чувашев", "Галинов", "Ананина", "Масылюк", "Вострокнутова", "Сабуров", "Исламов", "Шамай", "Филатов", "Сафронов", "Шарпов", "Карелов", "Брейкин", "Копытов", "Солдатов", "Кузнецов", "Пажгин", "Фотин", "Бадретдинов", "Механошин", "Булдаков", "Тулинов", "Тедеев", "Колпаков", "Черных", "Нефедов", "Рябцев", "Пепеляев", "Тарасов", "Аркадьев" };
	string middle[] = { "Романович", "Иосифович", "Аникитевич", "Прохорович", "Архипович", "Александрович", "Мартьянович", "Богданович", "Никифорович", "Георгиевич" , "Прокофиевич" , "Валериевич" , "Владиславович" , "Данилевич" , "Ульянович" , "Кондратиевич" , "Валериевич" , "Сократович" , "Кондратович" , "Евграфович" , "Алексеевич" , "Кондратович" , "Тихонович" , "Игнатиевич" , "Алексеевич" , "Венедиктович" , "Мартьянович" , "Родионович" , "Тимурович" , "Самуилович" , "Климентович" , "Натанович" , "Леонович" , "Игоревич" , "Захарович" , "Андронович" , "Платонович" , "Несторович" , "Модестович" , "Ерофеевич" , "Адамович" };

	for (int i = 0; i < size; i++)
	{
		human[i].ind = i;
		human[i].year = 1903 + rand() % 117;
		human[i].month = 1 + rand() % 12;

		int a = human[i].month;

		switch (a)
		{
		case 1: human[i].day = 1 + (rand() % 31); break;
		case 2: human[i].day = 1 + (rand() % 28); break;
		case 3: human[i].day = 1 + (rand() % 31); break;
		case 4: human[i].day = 1 + (rand() % 30); break;
		case 5: human[i].day = 1 + (rand() % 31); break;
		case 6: human[i].day = 1 + (rand() % 30); break;
		case 7: human[i].day = 1 + (rand() % 31); break;
		case 8: human[i].day = 1 + (rand() % 31); break;
		case 9: human[i].day = 1 + (rand() % 30); break;
		case 10: human[i].day = 1 + (rand() % 31); break;
		case 11: human[i].day = 1 + (rand() % 30); break;
		case 12: human[i].day = 1 + (rand() % 31); break;
		default:
			break;
		}

		int g = rand() % (sizeof(name) / sizeof(name[0]));
		human[i].Name = name[g];

		g = rand() % (sizeof(surname) / sizeof(surname[0]));

		human[i].Surname = surname[g];

		g = rand() % (sizeof(middle) / sizeof(middle[0]));

		human[i].Middle = middle[g];
		human[i].date = human[i].day + human[i].month * 100 + human[i].year * 10000;
	}
}

void PrintH(DATA* human, int size)
{
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << endl;
		cout << "ind: "<< "[" << human[i].ind << "]" << endl;
		cout << human[i].Surname << endl;
		cout << human[i].Name << endl;
		cout << human[i].Middle << endl;
		cout << human[i].day << "." << human[i].month << "." << human[i].year << endl << endl;
	}
}

void PrintH(DATAHELP* H, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "[" << H[i].ind << "]" << endl;
		cout << H[i].date << endl;
	}
}

void add(DATA* human, int *size)
{
	int b;

	cout << "Сколько элементов вы хотите добавить?" << endl;
	cin >> b;

	while (b < 1)
	{
		cout << "Вы можете добавить только натуральное количество элементов!" << endl;
		cout << "Сколько элементов вы хотите добавить?" << endl;
		cin >> b;
	}

	int Size;
	Size = (*size);
	*size = Size + b;
	DATA* HELP = new DATA[(*size)];
	int ch = 0;
	bool f = false;
	while (f == false)
	{
		switch (ch)
		{
		case 1: 
			humanINIT(HELP, b);
			for (int i = b, j = 0; i < (*size); i++, j++)
			{
				HELP[i] = human[j];
			}
			f = true; 
			break;
		case 2: 
			for (int k = 0; k < Size; k++)
			{
				HELP[k] = human[k];
			}
			humanINIT(HELP, (*size));
			f = true; 
			break;
		default:
			cout << "Куда вы хотите добавить элемент?" << endl;
			cout << "1: В начало списка" << endl;
			cout << "2: В конец списка" << endl;
			cin >> ch;
			break;
		}
	}

	PrintH(HELP, *size);
}


int saveH(DATA* human, int size, string path_F)
{
	ofstream fout;

	fout.open(path_F);

	if (!fout.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
		return 0;
	}
	else
	{
		string str;
		cout << "Файл " << path_F << " был успешно открыт!\n";

		for (int i = 0; i < size; i++) {


			fout << human[i].Name << '\n';
			fout << human[i].Surname << '\n';
			fout << human[i].Middle << '\n';
			fout << human[i].day << "." << human[i].month << "." << human[i].year << '\n' << '\n';
		}
	}

	fout.close();
	return 0;
}


void SearchLine(DATA* human, int size, string str, list<DATA> help)
{
	cout << endl << "Введите желаемое ФИО: ";
	cin.ignore();
	getline(cin, str);

	for (int i = 0; i < size; i++)
	{
		string strH = human[i].Surname + " " + human[i].Name + " " + human[i].Middle;
		if (strH == str)
		{
			help.push_back(human[i]);
		}
	}

	int S = help.size();

	ptr = new DATA[S];
	for (int i = 0; i < S; i++)
	{
		ptr[i] = help.front();
		help.pop_front();
	}
	PrintH(ptr, S);
}

void EnterS(DATA* human, int size, list<DATA> help)
{
	string str;
	int foo = 0;
	int f = false;
	while (f == false) {
		switch (foo)
		{
		case 1:  SearchLine(human, size, str, help); f = true; break;

		default:
			cout << "1: Поиск по ФИО" << endl;
			cin >> foo;
			break;
		}
	}
}


void Metod2(DATA* human, int size, string str, list<DATA> help)
{
	string strH;
	cout << endl << "Введите ФИО: ";
	cin.ignore();
	getline(cin, strH);

	bool f = false;
	int j = 0;
	int l = 0;
	int p = 0;
	int count = 0;
	int b = strH.length();
	for (int i = 0; i < size; i++)
	{

		string result = human[i].Surname + " " + human[i].Name + " " + human[i].Middle;
		int a = result.length();
		bool f = 0;
		while (l < strH.length() && j < (a - b) && f != true)
		{
			p = j;
			while (strH[l] == result[j] && f != true)
			{
				count++;
				j++;
				l++;

				if (count == strH.length())
				{
					f = true;
					help.push_back(human[i]);
				}
			}
			j = p;
			count = 0;
			l = 0;
			j++;
		}
		j = 0;
		l = 0;
	}

	int SIZE;
	SIZE = help.size();
	ptr = new DATA[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		ptr[i] = help.front();
		help.pop_front();
	}
	PrintH(ptr, SIZE);
}


void Kostyl(DATA* human, int size, list<DATA> help)
{

	string str;
	int foo = 0;
	int f = false;
	while (f == false) {
		switch (foo)
		{
		case 1:  Metod2(human, size, str, help); f = true; break;

		default:
			cout << "Какой поиск вы хотите выполнить?" << endl;
			cout << "1: Поиск по ФИО" << endl;
			cin >> foo;
			break;
		}
	}
}



void SORT(DATA* human, int size, list<DATA> help, DATAHELP* H)
{
	int MAX = 0;
	DATAHELP HP;
	int IND;
	DATAHELP foo;
	bool f = false;
	for (int j = size - 1; j >= 0; j--) {
		for (int i = 0; i <= j; i++)
		{
			if (MAX < H[i].date)
			{
				MAX = H[i].date;
				HP = H[i];
				IND = i;
				f = true;
			}
		}
		if (f == true)
		{
			foo = H[j];
			H[j] = HP;
			H[IND] = foo;
			f = false;
			MAX = 0;
		}
	}
}


void Edit(DATA* human, int size, list<DATA> help, DATAHELP* H)
{
	DATA Save;
	int N;
	list<DATA> Assistant;
	for (int i = 0; i < size; i++)
	{
		N = H[i].ind;
		Assistant.push_back(human[N]);
	}

	for (int i = 0; i < size; i++)
	{
		human[i] = Assistant.front();
		Assistant.pop_front();
	}
}

int InterSearch(DATA* human, int size, int S)
{
	int mid;
	int left = 0;
	int right = size - 1;
	while (human[left].date <= S && human[right].date >= S)
	{
		mid = left + ((S - human[left].date) * (right - left)) / (human[right].date - human[left].date);
		if (human[mid].date < S)
		{
			left = mid + 1;
		}
		else if (human[mid].date > S)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	if (human[left].date == S)
	{
		return left;
	}
	else
	{
		return -1;
	}
}

void Interp(DATA* human, int size, list<DATA> help)
{
	int n1;
	int n2;
	int n3;
	cout << "Введите Год: ";
	cin >> n3;
	while (n3 < 1903 || n3 > 2021)
	{
		cout << "Введите Год: ";
		cin >> n3;
	}
	n2 = 0;
	while (n2 < 1 || n2 > 12)
	{
		cout << "Введите Месяц: ";
		cin >> n2;
	}
	n1 = 0;
	bool f = false;
	while (f == false)
	{
		switch (n2)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			while (n1 < 1 || n1 > 31)
			{
				cout << "Введите День: ";
				cin >> n1;
			}
			f = true;
			break;
		case 4: case 6: case 9: case 11:
			while (n1 < 1 || n1 > 30)
			{
				cout << "Введите День: ";
				cin >> n1;
			}
			f = true;
			break;
		case 2:
			while (n1 < 1 || n1 > 28)
			{
				cout << "Введите День: ";
				cin >> n1;
			}
			f = true;
			break;
		default:
			cout << "Введите День: ";
			cin >> n1;
			break;
		}
	}
	int S = n3 * 10000 + n2 * 100 + n1;
	DATAHELP* H = new DATAHELP[size];
	for (int i = 0; i < size; i++)
	{
		H[i].date = human[i].day + human[i].month * 100 + human[i].year * 10000;
		H[i].ind = i;
	}
	SORT(human, size, help, H);
	PrintH(H, size);
	Edit(human, size, help, H);
	PrintH(human, size);

	int result = InterSearch(human, size, S);
	if (result == -1)
	{
		cout << "Такой даты рождения нет!" << endl;
	}
	else
	{
		DATA* RES = new DATA[1];
		RES[0] = human[result];
		cout << "________________________________5" << endl;
		PrintH(RES, 1);
	}
}



bool Choice(DATA* human, int *size, int foo, bool f, string path_F, list<DATA> help)

{
	switch (foo)
	{
	case 1: humanINIT(human, *size); break;
	case 2: PrintH(human, *size); break;
	case 3: saveH(human, *size, path_F); break;
	case 4: EnterS(human, *size, help);  break;
	case 5: Kostyl(human, *size, help); break;
	case 6: Interp(human, *size, help); break;
	case 7: add(human, size); break;
	case 8: f = true; break;
	default:
		break;
	}
	return f;
}


int main()
{
	system("chcp 1251>nul");
	srand(time(NULL));
	int size;
	size = 100;
	DATA* human = new DATA[size];
	list<DATA> help;
	bool f = false;
	int foo = -1;
	string path_F = "DATA.txt";
	while (f == false)
	{
		cout << endl;
		cout << "Выберете действие:" << endl;
		cout << "1: Инициализировать массив" << endl;
		cout << "2: Напечатать массив в консоль" << endl;
		cout << "3: Сохранить изменения" << endl;
		cout << "4: Линейный поиск" << endl;
		cout << "5: Поиск подстроки в строке" << endl;
		cout << "6: Интерполяционный поиск" << endl;
		cout << "7: Добавить элемент в список" << endl;
		cout << "8: Выйти из программы" << endl;

		cin >> foo;
		f = Choice(human, &size, foo, f, path_F, help);
	}

}