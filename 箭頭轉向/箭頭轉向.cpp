// 箭頭轉向.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int a = 4;
	bool moveO=false;
	char shape[16][16];
	//顯示圖一
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			if (0 <= i && i < 7)
			{
				if (j <= i)
				{
					shape[j][i] = 'O';
					cout << shape[j][i];
				}
				else
				{
					shape[j][i] = '*';
					cout << shape[j][i];
				}
			}
			else if (7 <= i && i <= 8)
			{
				if (j < 5)
				{
					shape[j][i] = 'O';
					cout << shape[j][i];
				}
				else
				{
					shape[j][i] = '*';
					cout << shape[j][i];
				}
			}
			else if (i == 9)
			{
				if (j == 0 || j == 3 || j == 4)
				{
					shape[j][i] = 'O';
					cout << shape[j][i];
				}
				else
				{
					shape[j][i] = '*';
					cout << shape[j][i];
				}
			}
			else if (10 <= i && i < 16)
			{
				if (j == a || j == a + 1) {
					shape[a][i] = 'O';
					shape[a + 1][i] = 'O';
					cout << shape[j][i];
				}
				else
				{
					shape[j][i] = '*';
					cout << shape[j][i];
				}

				if (i % 2 == 1 && j==15)
				{
					a++;
				}
				
			}

			
		}
		cout << endl;
	}

	cout<<"////////////////////////////////////////////////////////////////////////////////////////////"<<endl<<endl;
	//垂直翻轉轉
	for (int i = 15; i >= 0; i--)
	{
		for (int j = 0; j < 16; j++)
		{
			cout << shape[j][i];
		}
		cout << endl;	//\n
	}

	cout << endl << endl;

	//水平翻轉後，逆時針轉90度
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			cout << shape[i][j];
		}
		cout << endl;
	}
}
