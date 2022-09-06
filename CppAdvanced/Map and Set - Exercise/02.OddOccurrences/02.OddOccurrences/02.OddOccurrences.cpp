// 02.OddOccurrences.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	unordered_map<string, int> dict;
	queue<string> myQueue;

	ostringstream output;


	while (inputStream >> word)
	{
		word = toLowerStr(word);
		if (dict.find(word) == dict.end())
		{
			dict.insert(dict.end(),pair<string, int> {word, 1});
			myQueue.push(word);
		}
		else
		{
			dict[word]++;
		}
	}

	while (!myQueue.empty())
	{
		string word = myQueue.front();

		if (dict[word] % 2 != 0)
		{
			output << word << ", ";
		}
		myQueue.pop();
	}

	string result = output.str();
	result.erase(result.length() - 2, string::npos);

	cout << result << endl;

	return 0;
}
