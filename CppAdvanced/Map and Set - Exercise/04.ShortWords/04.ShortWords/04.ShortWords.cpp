// 04.ShortWords.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <unordered_map>
#include <set>
#include <string>
#include <sstream>
#include <queue>

using namespace std;

string toLowerStr(string word)
{
	for (size_t i = 0; i < word.length(); i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
		{
			word[i] = word[i] - 'A' + 'a';
		}
	}
	return word;
}


int main()
{
	string input;
	getline(cin, input);

	istringstream inputStream(input);
	string word;

	set<string> dict;
	queue<string> myQueue;

	ostringstream output;


	while (inputStream >> word)
	{
		word = toLowerStr(word);
		if (word.length() < 5)
		{
			dict.insert(word);
		}
	}

	for (set<string>::iterator it = dict.begin(); it != dict.end(); it++)
	{
		output << *it << ", ";
	}


	string result = output.str();
	result.erase(result.length() - 2, string::npos);

	cout << result << endl;

	return 0;
}
