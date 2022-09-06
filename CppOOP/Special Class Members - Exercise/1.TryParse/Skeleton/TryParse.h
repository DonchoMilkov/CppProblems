#ifndef TRYPARSE_H
#define TRYPARSE_H
using namespace std;

bool tryParse(const string& a, int& b)
{
	if (a.empty())
		return false;
	int res = 0;
	bool isNegative = false;
	if (a[0] == '-')
		isNegative = true;
	else if (isdigit(a[0]))
		res = a[0] - '0';

	for (size_t i = 1; i < a.size(); i++)
	{
		if (!isdigit(a[i])){
			return false;
		}
		else
		{
			res = res * 10 + (a[i] - '0');
		}
	}

	if (isNegative)
		res *= -1;

	b = res;
	return true;
}

#endif 