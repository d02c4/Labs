#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int DataF(int count, string path_F1)
{
    cout << "Введите количество строк находящихся в файле " << path_F1 << " :\t";
    cin >> count;

    while (count < 3)
    {
        cout << "Минимальное количество строк в файле должно быть не меньше 3!" << endl;
        cout << "Введите количество строк находящихся в файле " << path_F1 << " :\t";
        cin >> count;
    }

    return count;

}



void fill_F1(string path_F1, bool *f, int count)
{
    ofstream fout;

    fout.open(path_F1);

    if (!fout.is_open())
    {

        cout << "Ошибка открытия файла!" << endl;
        *f = true;
    }
    else
    {
        string str;
        cout << "Файл " << path_F1 << " был успешно открыт!\n";

        for (int i = 1; i <= count; i++) {
            cout << "Введите " << i << " строку в файле " << path_F1 << endl;
            if (i == 1) {
                cin.ignore();
            }
            getline(cin, str);
            fout << str << '\n';
        }
        
    }

    fout.close();
}

int cpy_F2(string str, string path_F2)
{
    ofstream fout;

    fout.open(path_F2, ofstream::app);

    if (!fout.is_open())
    {

        cout << "Ошибка открытия файла!" << endl;
        return 0;
    }
    else
    {
        int size;
        size = str.length();


        if (str[size - 1] == 'a' || str[size - 1] == 'A')
        {
            fout << str << '\n';
        }

    }
    fout.close();
    return 0;
}


int FillN(int *N1, int *N2, int count, bool *f)
{
    cout << "Между какими строчками хотите искать совпадения?" << endl;
    cout << "Введите номер первой строки: ";
    cin >> *N1;

    while (*N1 < 1 || *N1 >= count)
    {
        cout << "Введен некорректный номер!" << endl;
        cout << "Введите номер первой строки: ";
        cin >> *N1;
    }

    cout << "Введите номер второй строки: ";
    cin >> *N2;
    while (*N2 < 1 || *N2 > count || ((*N2 - *N1) <= 1))
    {
        if ((*N2 - *N1) == 1)
        {
            cout << "Между данными строками нет строк!" << endl;
            *f = true;
            return *f;
        }
        cout << "Введен некорректный номер!" << endl;
        cout << "Введите номер второй строки: ";
        cin >> *N2;
    }
    return 0;

}


int countSTR_F1(string path_F1, string path_F2, bool *f, int count, int N1, int N2)
{

    string str;
    ifstream fin;

        count = 0;

        fin.open(path_F1);

        if (!fin.is_open())
        {
            cout << "Ошибка открытия файла!" << endl;
            *f = true;
            return 0;
        }

        else
        {
            cout << "Файл " << path_F1 << " открыт для чтения!" << endl;

            while (!fin.eof())
            {

                str = "";
                getline(fin, str);
                count++;
                if (count > N1 && count < N2)
                {
                    cpy_F2(str, path_F2);
                }
            }
        }
        fin.close();

        return 0;
 }

int STR_F2(string path_F2, bool *f, int count)
{
    count = 0;
    int countS1;
    int countS2 = 0;
    char symb;
    int numb = 0;

    ifstream fin;

    fin.open(path_F2);

    if (!fin.is_open())
    {
        cout << "Ошибка открытия файла!" << endl;
        *f = true;
        return 0;
    }

    else
    {
        cout << "Файл " << path_F2 << " открыт для чтения!" << endl;

        string str;

        while (!fin.eof())
        {
            count++;
            countS1 = 0;
            str = "";
            getline(fin, str);

            for (int i = 0; i < str.length(); i++)
            {
                symb = str[i];
                if (symb == 'a' || symb == 'A')
                {
                    countS1++;
                }
            }
            if (countS2 < countS1)
            {
                countS2 = countS1;
                numb = count;
            }
        }
    }
    fin.close();

    if (numb == 0) {
        *f = true;
        return 0;
    }
    cout << "Строка под номером " << numb << " в файле " << path_F2;
    cout << " с наибольшим количеством символов 'А' и 'а' ";
    cout << "а именно " << countS2 << endl;
    return 0;
}

int main()
{
    remove("F1.txt");
    remove("F2.txt");

    setlocale(LC_ALL, "Ru");
    string path_F1 = "F1.txt";
    string path_F2 = "F2.txt";

    int count = 0;
    int N1;
    int N2;

    count = DataF(count, path_F1);
    bool f = 0;
    FillN(&N1, &N2, count, &f);

    if (f == true)
    {
        return 0;
    }

    fill_F1(path_F1, &f, count);
    if (f == true) {
        return 0;
    }

    countSTR_F1(path_F1, path_F2, &f, count, N1, N2);
    if (f == true) {
        cout << "Ни в одной строке не встретилось ни одного символа Aa";
        return 0;
    }
    STR_F2(path_F2, &f, count);
    if (f == true) {
        cout << "Ни в одной строке не встретилось ни одного символа Aa";
        return 0;
    }
    return 0;
}
