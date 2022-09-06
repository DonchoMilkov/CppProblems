// 1.Letters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

void processWord(map<char, set<string>>& dict, string word)
{
	for (char ch : word)
	{
		char a = tolower(ch);
		if (a >= 'a' && a <= 'z')
		{
			auto it = std::remove_if(word.begin(), word.end(), [](char const& c) {
				return !std::isalnum(c);
				});

			word.erase(it, word.end());

			dict[a].insert(word);
		}
	}
}


int main()
{
	string text;
	getline(cin, text);
	cin >> ws;
	queue<char> searchLetters;
	map<char, set<string>> dict;
	char letter;
	while (true)
	{
		cin >> letter;
		if (letter == '.')
			break;
		searchLetters.push(tolower(letter));
	}

	istringstream input(text);
	string word;
	while (input >> word)
	{
		processWord(dict, word);
	}


	while (!searchLetters.empty())
	{
		char searchLetter = searchLetters.front();
		if (dict[searchLetter].empty())
			cout << "---";
		else
		{
			for (string word : dict[searchLetter])
			{
				cout << word << " ";
			}
		}
		cout << endl;
		searchLetters.pop();
	}
	return 0;
}