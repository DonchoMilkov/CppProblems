#include <iostream>
#include <cmath>
using namespace std;

const unsigned maxLength = 200;

int main()
{
	char arr[maxLength] = {};
	int i = 0;
	int number = 0;
	int charToInt = 0;

	i = -1;
	do
	{
		i++;
		cin >> arr[i];
	} while (arr[i] != '.');

	i = 0;

	while (arr[i] != '.')
	{
		if (arr[i] >= '0' && arr[i] <= '9')
		{
			charToInt = int(arr[i] - '0');
			number = number * 10 + charToInt;
		}
		i++;
	}
	cout << sqrt(number);

	return 0;
}
