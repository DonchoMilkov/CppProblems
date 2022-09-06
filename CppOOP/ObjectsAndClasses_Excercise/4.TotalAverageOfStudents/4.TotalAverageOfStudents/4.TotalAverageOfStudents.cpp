// 4.TotalAverageOfStudents.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class Student
{
private:
	string _name;
	string _surname;
	double _totalAverage;

public:
	void read(string, string, double);

	void print(ostream &);
};

void Student::read(string name, string surname, double average)
{
	_name = name;
	_surname = surname;
	_totalAverage = average;
}

void Student::print(ostream & str)
{
	str << this->_name << " " << this->_surname << " " << this->_totalAverage << endl;
}

int main()
{
	int num;
	cin >> num;
	if (num <= 0)
	{
		cout << "Invalid input" << endl;
		return 0;
	}

	string name, surname;
	double avg;
	double total = 0;
	vector<Student> students;
	students.resize(num);
	for (size_t i = 0; i < num; i++)
	{
		cin >> name >> surname >> avg;
		students[i].read(name, surname, avg);
		total += avg;
	}

	for (Student st : students)
	{
		st.print(cout);
	}


	cout << total / num << endl;
	return 0;
}
