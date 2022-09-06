// 2.Distance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

class Point {
private:
	double _x, _y;

public:
	Point(double x, double y);

	double getX();
	double getY();

	double DistanceToPoint(Point& target);

};

Point::Point(double x, double y)
{
	_x = x;
	_y = y;
}

double Point::getX()
{
	return _x;
}

double Point::getY()
{
	return _y;
}

double Point::DistanceToPoint(Point & target)
{
	double dist;

	dist = sqrt(pow(this->_x - target.getX(), 2) + pow(this->_y - target.getY(), 2));

	return dist;
}


int main()
{
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	Point A(x1, y1), B(x2, y2);

	cout.setf(ios::fixed);
	cout.precision(3);
	cout << A.DistanceToPoint(B) << endl;

	return 0;
}
