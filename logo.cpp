#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>
#include<iomanip>
#include <Windows.h>
using namespace std;
// خلى بالك لازم تستخدم المكتبات دى + البتاعه اللى ف السطر العاشر اللى تحت الكلام بالظبط
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
void logo()
{
	SetConsoleTextAttribute(console, 4532);
	cout << " .----------------.  .----------------.  .----------------.  .---------------- ." << endl;
	cout << "| .--------------. || .--------------. || .--------------. || .--------------. |" << endl;
	cout << "| |    _____     | || |     ____     | || |   _    _     | || |     ____     | |" << endl;
	cout << "| |   / ___ `.   | || |   .'    '.   | || |  | |  | |    | || |   .' __ '.   | |" << endl;
	cout << "| |  |_/___) |   | || |  |  .--.  |  | || |  | |__| |_   | || |   | (__) |   | |" << endl;
	cout << "| |   .'____.'   | || |  | |    | |  | || |  |____   _|  | || |   .`____'.   | |" << endl;
	cout << "| |  / /____     | || |  |  `--'  |  | || |      _| |_   | || |  | (____) |  | |" << endl;
	cout << "| |  |_______|   | || |   '.____.'   | || |     |_____|  | || |  `.______.'  | |" << endl;
	cout << "| |              | || |              | || |              | || |              | |" << endl;
	cout << " '----------------'  '----------------'  '----------------'  '----------------' " << endl;
	cout << "\n";
	SetConsoleTextAttribute(console, 0);
}
void wait(int seconds)
{
	int endwait;
	endwait = clock() + seconds * CLOCKS_PER_SEC;
	while (clock() < endwait){}
}
void start()
{
	logo();
	SetConsoleTextAttribute(console, 7);
	cout << "\n\n\n\n\tLOADING.....\n\t";
	SetConsoleTextAttribute(console, 4634);
	cout << "||||||||||||||||";
	wait(1);
	cout << "||||||||||||||";
	wait(1);
	cout << "||||||||||||||";
	wait(1);
	cout << "|||||||||||||";
	wait(1);
	SetConsoleTextAttribute(console, 0);
	system("cls");

}
int** createBoard()
{
	//creating dynamically allocated 2d array
	int **array2 = new int*[4];

	for (int i = 0; i < 4; ++i)
		array2[i] = new int[4];

	//initializing array2
	int check = 0;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			array2[i][j] = 0;
			if (check < 2 && (rand() % 4 == i || rand() % 4 == j))
			{
				array2[i][j] = 2;
				check++;
				continue;
			}
			else if (check == 2 && (rand() % 4 == i || rand() % 4 == j))
			{
				array2[i][j] = 4;
				check++;
			}
		}
	}
}
int main()
{   
  	start();
    createBoard();
	SetConsoleTextAttribute(console, 7);
	cout << "SCORE   ";
	SetConsoleTextAttribute(console, 165);
	cout << "  " << 50  << " / 2048   ";
	SetConsoleTextAttribute(console, 7);
	cout << "\t\t\t\n";
	cout<<"khaled";
}

