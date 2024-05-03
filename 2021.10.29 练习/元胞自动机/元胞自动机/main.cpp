//"生命游戏"V1.0
//李国良于2017年1月1日编写完成

#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

const int LineSize = 60;
const int ColumnSize = 100;

void initGame(int arr[LineSize][ColumnSize]);
void printMap(int arr[LineSize][ColumnSize]);
int getLivingNum(int arr[LineSize][ColumnSize], int x, int y);
void run(int arr[LineSize][ColumnSize]);

int main()
{
	SetConsoleTitle("生命游戏");
	system("mode con cols=200");
	int map[LineSize][ColumnSize];
	initGame(map);
	printMap(map);
	cin.get();
	system("cls");
	while (true)
	{
		run(map);
		printMap(map);
		cin.get();
		system("cls");
	}
	return 0;
}

void initGame(int arr[LineSize][ColumnSize])
{
	//随机生成
	//srand((unsigned)time(NULL));
	//for (int i = 0; i < LineSize; ++i)
	//{
	//	for (int j = 0; j < ColumnSize; ++j)
	//	{
	//		arr[i][j] = rand() % 2;
	//	}
	//}

	//脉冲星
	//for (int i = 0; i < LineSize; ++i)
	//{
	//	for (int j = 0; j < ColumnSize; ++j)
	//	{
	//		arr[i][j] = 0;
	//	}
	//}
	//arr[14][16] = 1;
	//arr[14][17] = 1;
	//arr[14][18] = 1;
	//arr[14][22] = 1;
	//arr[14][23] = 1;
	//arr[14][24] = 1;
	//arr[16][14] = 1;
	//arr[16][19] = 1;
	//arr[16][21] = 1;
	//arr[16][26] = 1;
	//arr[17][14] = 1;
	//arr[17][19] = 1;
	//arr[17][21] = 1;
	//arr[17][26] = 1;
	//arr[18][14] = 1;
	//arr[18][19] = 1;
	//arr[18][21] = 1;
	//arr[18][26] = 1;
	//arr[19][16] = 1;
	//arr[19][17] = 1;
	//arr[19][18] = 1;
	//arr[19][22] = 1;
	//arr[19][23] = 1;
	//arr[19][24] = 1;
	//arr[21][16] = 1;
	//arr[21][17] = 1;
	//arr[21][18] = 1;
	//arr[21][22] = 1;
	//arr[21][23] = 1;
	//arr[21][24] = 1;
	//arr[22][14] = 1;
	//arr[22][19] = 1;
	//arr[22][21] = 1;
	//arr[22][26] = 1;
	//arr[23][14] = 1;
	//arr[23][19] = 1;
	//arr[23][21] = 1;
	//arr[23][26] = 1;
	//arr[24][14] = 1;
	//arr[24][19] = 1;
	//arr[24][21] = 1;
	//arr[24][26] = 1;
	//arr[26][16] = 1;
	//arr[26][17] = 1;
	//arr[26][18] = 1;
	//arr[26][22] = 1;
	//arr[26][23] = 1;
	//arr[26][24] = 1;

	//滑翔者
	//for (int i = 0; i < LineSize; ++i)
	//{
	//	for (int j = 0; j < ColumnSize; ++j)
	//	{
	//		arr[i][j] = 0;
	//	}
	//}
	//arr[1][1] = 1;
	//arr[2][2] = 1;
	//arr[2][3] = 1;
	//arr[3][1] = 1;
	//arr[3][2] = 1;

	//轻量级飞船
	//for (int i = 0; i < LineSize; ++i)
	//{
	//	for (int j = 0; j < ColumnSize; ++j)
	//	{
	//		arr[i][j] = 0;
	//	}
	//}
	//arr[1][2] = 1;
	//arr[1][3] = 1;
	//arr[1][4] = 1;
	//arr[1][5] = 1;
	//arr[2][1] = 1;
	//arr[2][5] = 1;
	//arr[3][5] = 1;
	//arr[4][1] = 1;
	//arr[4][4] = 1;

	//滑翔者枪
	for (int i = 0; i < LineSize; ++i)
	{
		for (int j = 0; j < ColumnSize; ++j)
		{
			arr[i][j] = 0;
		}
	}
	arr[1][25] = 1;
	arr[2][23] = 1;
	arr[2][25] = 1;
	arr[3][13] = 1;
	arr[3][14] = 1;
	arr[3][21] = 1;
	arr[3][22] = 1;
	arr[4][12] = 1;
	arr[4][16] = 1;
	arr[4][21] = 1;
	arr[4][22] = 1;
	arr[4][35] = 1;
	arr[4][36] = 1;
	arr[5][11] = 1;
	arr[5][17] = 1;
	arr[5][21] = 1;
	arr[5][22] = 1;
	arr[5][35] = 1;
	arr[5][36] = 1;
	arr[6][1] = 1;
	arr[6][2] = 1;
	arr[6][11] =1;
	arr[6][15] = 1;
	arr[6][17] = 1;
	arr[6][18] = 1;
	arr[6][23] = 1;
	arr[6][25] = 1;
	arr[7][1] = 1;
	arr[7][2] = 1;
	arr[7][11] = 1;
	arr[7][17] = 1;
	arr[7][25] = 1;
	arr[8][12] = 1;
	arr[8][16] = 1;
	arr[9][13] = 1;
	arr[9][14] = 1;

}

void printMap(int arr[LineSize][ColumnSize])
{
	int num = 0;
	for (int i = 0; i < LineSize; ++i)
	{
		for (int j = 0; j < ColumnSize; ++j)
		{
			if (arr[i][j])
			{
				cout << " *";
				++num;
			}
			else
			{
				cout << "  ";
			}
		}
	}
	cout << "当前活细胞数量为：" << num << endl;
}

int getLivingNum(int arr[LineSize][ColumnSize], int x, int y)
{
	int num = 0;
	for (int i = x - 1; i <= x + 1; ++i)
	{
		if (i < 0 || i >= LineSize)
		{
			continue;
		}
		for (int j = y - 1; j <= y + 1; ++j)
		{
			if (j < 0 || j >= ColumnSize)
			{
				continue;
			}
			if (arr[i][j] == 1)
			{
				++num;
			}
		}
	}
	if (arr[x][y] == 1)
	{
		--num;
	}
	return num;
}

void run(int arr[LineSize][ColumnSize])
{
	int num = 0;
	int maps[LineSize][ColumnSize];
	for (int i = 0; i < LineSize; ++i)
	{
		for (int j = 0; j < ColumnSize; ++j)
		{
			num = getLivingNum(arr, i, j);
			if (num < 2 || num > 3)
			{
				maps[i][j] = 0;
			}
			else if (num == 3)
			{
				maps[i][j] = 1;
			}
			else
			{
				maps[i][j] = arr[i][j];
			}
		}
	}
	for (int i = 0; i < LineSize; ++i)
	{
		for (int j = 0; j < ColumnSize; ++j)
		{
			arr[i][j] = maps[i][j];
		}
	}
}
