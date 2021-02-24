#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int DataF(int count, string path_F1)
{
    cout << "������� ���������� ����� ����������� � ����� " << path_F1 << " :\t";
    cin >> count;

    while (count < 3)
    {
        cout << "����������� ���������� ����� � ����� ������ ���� �� ������ 3!" << endl;
        cout << "������� ���������� ����� ����������� � ����� " << path_F1 << " :\t";
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

        cout << "������ �������� �����!" << endl;
        *f = true;
    }
    else
    {
        string str;
        cout << "���� " << path_F1 << " ��� ������� ������!\n";

        for (int i = 1; i <= count; i++) {
            cout << "������� " << i << " ������ � ����� " << path_F1 << endl;
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

        cout << "������ �������� �����!" << endl;
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
    cout << "����� ������ ��������� ������ ������ ����������?" << endl;
    cout << "������� ����� ������ ������: ";
    cin >> *N1;

    while (*N1 < 1 || *N1 >= count)
    {
        cout << "������ ������������ �����!" << endl;
        cout << "������� ����� ������ ������: ";
        cin >> *N1;
    }

    cout << "������� ����� ������ ������: ";
    cin >> *N2;
    while (*N2 < 1 || *N2 > count || ((*N2 - *N1) <= 1))
    {
        if ((*N2 - *N1) == 1)
        {
            cout << "����� ������� �������� ��� �����!" << endl;
            *f = true;
            return *f;
        }
        cout << "������ ������������ �����!" << endl;
        cout << "������� ����� ������ ������: ";
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
            cout << "������ �������� �����!" << endl;
            *f = true;
            return 0;
        }

        else
        {
            cout << "���� " << path_F1 << " ������ ��� ������!" << endl;

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
        cout << "������ �������� �����!" << endl;
        *f = true;
        return 0;
    }

    else
    {
        cout << "���� " << path_F2 << " ������ ��� ������!" << endl;

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
    cout << "������ ��� ������� " << numb << " � ����� " << path_F2;
    cout << " � ���������� ����������� �������� '�' � '�' ";
    cout << "� ������ " << countS2 << endl;
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
        cout << "�� � ����� ������ �� ����������� �� ������ ������� Aa";
        return 0;
    }
    STR_F2(path_F2, &f, count);
    if (f == true) {
        cout << "�� � ����� ������ �� ����������� �� ������ ������� Aa";
        return 0;
    }
    return 0;
}