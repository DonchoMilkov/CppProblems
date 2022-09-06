// 04.LowerandUpper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <string.h>

using namespace std;

const size_t N = 512;

void transformAndPrint(char* arr, size_t len, int (*f)(int))
{
	for (size_t i = 0; i < len; i++)
	{
		arr[i] = f(arr[i]);
	}

	cout << arr<<endl;
}

int main()
{
	char* input = new char[N];

	cin.get(input, N);

	size_t len = strlen(input);

	transformAndPrint(input, len, tolower);
	transformAndPrint(input, len, toupper);



	return 0;
}
