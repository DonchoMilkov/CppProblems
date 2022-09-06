// 03.MachineCommands.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include<string>
#include <sstream>
using namespace std;

bool isNumber(const string& str)
{
	if (!isdigit(str[0]) && str[0] != '-')
		return false;
	for (size_t i = 1; i < str.size(); i++)
	{
		if (!isdigit(str[i])) return false;
	}
	return true;
}

void executeCommand(vector<int>& line, const string& commandName)
{
	if (commandName == "discard")
	{
		line.pop_back();
		return;
	}

	vector<int>::iterator it = line.end();
	it--;
	int a = *it;
	it--;
	int b = *it;
	line.pop_back();
	line.pop_back();
	if (commandName == "sum")
	{
		line.push_back(a + b);
	}
	else if (commandName == "subtract")
	{
		line.push_back(a - b);
	}
	else if (commandName == "concat")
	{
		ostringstream num;

		num << to_string(b) << to_string(a);

		line.push_back(stoi(num.str()));
	}
	return;
}

void endCommand(vector<int>& line)
{
	for (int num : line)
	{
		cout << num << endl;
	}
}

void sth(int arr[],int size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i]++;
	}
}


int main()
{

	for (size_t i = 0; i < 5; i++)
	{
		switch (i)
		{
		case 0: cout << 'a'; break;
		case 1:
		case 2: cout << 'b'; break;
		case 4: cout << 'c'; break;
		default:
			cout << 'd'; break;
		}

	}
	return 0;
	vector<int> sequence;

	while (true)
	{
		string command;

		cin >> command;

		if (isNumber(command))
		{
			sequence.push_back(stoi(command));
		}
		else if (command == "end")
		{
			endCommand(sequence);
			break;
		}
		else
		{
			executeCommand(sequence, command);
		}
	}

	return 0;
}
