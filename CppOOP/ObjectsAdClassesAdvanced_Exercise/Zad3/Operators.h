#ifndef OPERATORS_H
#define OPERATORS_H
#include <ostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string>& operator << (vector<string>& a, const string b) {
	a.push_back(b);
	return a;
}

string operator + (string a, int b) {
	return a + to_string(b);
}

ostream& operator << (ostream& str, const vector<string>& a) {
	for (string line : a) {
		str << line << endl;
	}
	return str;
}
#endif // !OPERATORS_H