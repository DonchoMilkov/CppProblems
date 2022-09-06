#include "BigInt.h"
#include <string>
#include<iostream>
using namespace std;


int main()
{
	string line1, line2;
	cin >> line1 >> line2;

	BigInt from(line1);
	BigInt to(line2);
	int factor = 1;
	while (from<to)
	{
		if (factor == 45)
		{
			cout << from << endl;
			from += factor;
			continue;
		}
		string digits = from.getDigits();
		char lastDigit = digits[digits.length() - 1];
		if (lastDigit == '0' || lastDigit == '5')
		{
			int digitSum = 0;
			for (char digit : digits)
			{
				digitSum = digitSum + (digit - '0');
			}
			if (digitSum % 9 == 0)
			{
				cout << from << endl;
				factor = 45;
			}
		}
		from+=factor;
	}

	return 0;
}