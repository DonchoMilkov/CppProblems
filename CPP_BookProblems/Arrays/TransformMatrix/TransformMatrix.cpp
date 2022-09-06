// TransformMatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void writematrix(int n, int m, int arr[][100]);
void readmatrix(int n, int m, int arr[][100]);
void formatmatrix(int n, int m, int arr[][100]);

int main()
{
	int n, m;
	cin >> n >> m;
	int arr[100][100];

	writematrix(n, m, arr);

	readmatrix(n, m, arr);

	formatmatrix(n, m, arr);
	cout << "formated:" << endl;
	readmatrix(n, m, arr);



	return 0;
}

void writematrix(int n, int m, int arr[][100])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void readmatrix(int n, int m, int arr[][100])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void formatmatrix(int n, int m, int arr[][100])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			arr[i][j] -= 5;
		}
		for (int j = i + 1; j < m; j++)
		{
			arr[i][j] += 5;
		}
	}
}
