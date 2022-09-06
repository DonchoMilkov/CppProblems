// 1.ReverseWords.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
	vector<string> words;
	string word;
	while (true)
	{
		cin >> word;
		if (word=="end")
			break;
		words.push_back(word);
	}

	if (word.size() == 0)
	{
		cout << "" << endl;
		return 0;
	}

	int length = words.size();
	for (size_t i = 0; i < length; i++)
	{
		cout << words[length - 1 - i] << " ";
	}
	cout << endl;

	return 0;
}
