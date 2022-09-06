// SortAndMergeArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void writearray(int, int[]);
void readarray(int, int[]);
void sortarray(int, int[]);
void mergearrays(int, int[], int, int[], int, int[]);


int main()
{
	int n;
	cin >> n;
	int arr1[100];
	writearray(n, arr1);

	int m;
	cin >> m;
	int arr2[100];
	writearray(m, arr2);

	sortarray(n, arr1);
	sortarray(m, arr2);

	int p = m + n;
	int mergedArray[200];

	mergearrays(n, arr1, m, arr2, p, mergedArray);

	cout << "Merged:" << endl;

	readarray(p, mergedArray);
	cout << endl;

	return 0;
}

void writearray(int n, int arr[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "]= ";
		cin >> arr[i];
	}
}

void readarray(int n, int arr[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "]= ";
		cout << arr[i] << endl;
	}
}

void sortarray(int n, int arr[])
{
	int min, minIndex;
	for (int i = 0; i < n - 1; i++)
	{
		min = arr[i];
		minIndex = i;

		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				minIndex = j;
			}
		}

		if (minIndex != i) {
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
}

void mergearrays(int n, int arr1[], int m, int arr2[], int p, int mergedArr[])
{
	int p1 = 0,
		p2 = 0,
		mp = 0;
	while (p1 < n && p2 < m)
	{
		if (*(arr1 + p1) < *(arr2 + p2))
		{
			*(mergedArr + mp) = *(arr1 + p1);
			p1++;
		}
		else
		{
			*(mergedArr + mp) = *(arr2 + p2);
			p2++;
		}
		mp++;
	}

	for (int i = p1; i < n; i++, mp++)
		*(mergedArr + mp) = *(arr1 + i);

	for (int i = p2; i < m; i++, mp++)
		*(mergedArr + mp) = *(arr2 + i);
}
