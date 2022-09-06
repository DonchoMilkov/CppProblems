// 06.CinemaTickets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string movie;
	int freeSeats,seatsLeft;
	string ticketType;
	double occupiedCapacity = 0.0;
	int totalMovieTickets = 0,
		standardTickets = 0,
		kidsTickets = 0,
		studentTickets = 0,
		totalTickets;
	cout.setf(ios::fixed);
	cout.precision(2);
	while (true)
	{
		getline(cin >> ws, movie);

		if (movie == "Finish")
		{
			totalTickets = kidsTickets + standardTickets + studentTickets;
			cout << "Total tickets: " << totalTickets << endl;
			cout << studentTickets * 100.00 / totalTickets << "% student tickets." << endl;
			cout << standardTickets * 100.00 / totalTickets << "% standard tickets." << endl;
			cout << kidsTickets * 100.00 / totalTickets << "% kids tickets." << endl;
			return 0;
		}
		totalMovieTickets = 0;
		cin >> freeSeats;
		seatsLeft = freeSeats;

		while (seatsLeft > 0)
		{
			cin >> ticketType;
			if (ticketType == "End")
			{
				break;
			}
			totalMovieTickets++;
			seatsLeft--;
			if (ticketType == "kid")
			{
				kidsTickets++;
			}
			else if (ticketType == "student")
			{
				studentTickets++;
			}
			else if (ticketType == "standard")
			{
				standardTickets++;
			}
		}
		if (seatsLeft == 0)
		{
			occupiedCapacity = 100.00;
		}
		else
		{
			occupiedCapacity = totalMovieTickets * 100.00 / freeSeats;
		}
		cout << movie << " - " << occupiedCapacity << "% full." << endl;
	}
	return 0;
}
