// 07.Miners.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <queue>

using namespace std;
int main()
{
	string resource;
	int quantity;
	map<string, int> dict;
	queue<string> resourceOrder;
	while (true)
	{
		cin >> resource;
		if (resource =="stop")
			break;
		cin >> quantity;

		if (dict.find(resource) == dict.end())
		{
			dict[resource] = quantity;
			resourceOrder.push(resource);
		}
		else
		{
			dict[resource] += quantity;
		}
	}

	while (!resourceOrder.empty())
	{
		string current = resourceOrder.front();
		cout << current<< " -> " << dict[current] << endl;
		resourceOrder.pop();
	}
	
	return 0;
}
