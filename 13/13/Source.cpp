#include <iostream>


using namespace std;

int chessboard[8][8];

void DeskInit();
void ChoicePlace(int i, int j);
void Del(int i, int j);
bool SearchPlace(int i);
void PrintDesk();



int main()
{
	DeskInit();
	SearchPlace(0);
	PrintDesk();
}



void PrintDesk()
{
	cout << "__________________" << endl;
	for (int k = 0; k < 8; k++)
	{
		for (int j = 0; j < 8; j++)
		{
			cout << "|";
			switch (chessboard[k][j])
			{
			case -1: cout << "F"; break;
			default: cout << " ";
			}
		}

		cout << "|" << endl;
	}
	cout << "__________________" << endl;
}

void DeskInit()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			chessboard[i][j] = 0;
		}
	}
}


void Del(int i, int j)
{
	for (int k = 0; k < 8; k++)
	{
		chessboard[k][j]--;
		chessboard[i][k]--;
		int diag1 = j - i + k;
		int diag2 = j + i - k;

		if (diag1 >= 0 && diag1 < 8)
		{
			chessboard[k][diag1]--;
		}
		if (diag2 >= 0 && diag2 < 8)
		{
			chessboard[k][diag2]--;
		}
	}
	chessboard[i][j] = 0;
}

void ChoicePlace(int i, int j)
{
	for (int k = 0; k < 8; k++)
	{
		chessboard[k][j]++;
		chessboard[i][k]++;
		int diag1 = j - i + k;
		int diag2 = j + i - k;

		if (diag1 >= 0 && diag1 < 8)
		{
			chessboard[k][diag1]++;
		}
		if (diag2 >= 0 && diag2 < 8)
		{
			chessboard[k][diag2]++;
		}
	}
	chessboard[i][j] = -1;
}


bool SearchPlace(int i)
{

	bool res = false;
	for (int j = 0; j < 8; j++)
	{
		if (chessboard[i][j] == 0)
		{
			ChoicePlace(i, j);
			if (i == 7)
			{
				res = true;

			}
			else if ((res = SearchPlace(i + 1)) == false)
			{
				Del(i, j);
			}
		}

		if (res == true)
		{
			return res;
		}
	}

	return res;
}