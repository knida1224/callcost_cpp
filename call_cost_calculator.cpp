/*****HEADER
Kyle Nida
Z 23410025
Due Date: 5/30/2017
Course: COP3014
Assignment: Assignment 1
Professor: Dr. Lofton Bullard
Description:	Implement a program
				called "call_cost_calculator.cpp" that calculates the net cost of a call (net_cost), the
				tax on a call (call_tax) and the total cost of the call (total_cost). The program
				should accept a cell phone number (cell_num), the number of
				relay stations(relays), and the length in minutes of the cal (call_length) from a
				user.
************************************************************/ 
#include <iostream> //standard library for i/o
#include <string>
using namespace std;
int main()
{
	string user_response = "y";
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	while (user_response == "y" || user_response == "Y")
	{
		//declarations and user prompts
		double net_cost, call_tax, tax_rate, total_cost;
		int cell_num, relays, call_length;
		cout << "Please enter the 7-digit cell phone number: ";
		cin >> cell_num;
		cout << "Please enter the number of relay stations: ";
		cin >> relays;
		cout << "Please enter the cell length in minutes: ";
			cin >> call_length;

		//if-else
		if (1 <= relays && relays <= 5)
			tax_rate = .01;
		else if (6 <= relays && relays <= 11)
			tax_rate = .03;
		else if (12 <= relays && relays <= 20)
			tax_rate = .05;
		else if (21 <= relays && relays <= 50)
			tax_rate = .08;
		else if (relays > 50)
			tax_rate = .12;

		//Calculations
		net_cost = relays / 50.0 * 0.40 * call_length;
		call_tax = net_cost * tax_rate;
		total_cost = net_cost + call_tax;

		//Print Results
		cout << endl << endl << "======================================" << endl;
		cout << "Cell Phone: " << cell_num << endl;
		cout << "Number of Relay Stations: " << relays << endl;
		cout << "Minutes Used: " << call_length << endl;
		cout << "Net Cost: $" << net_cost << endl;
		cout << "Call Tax: $" << call_tax << endl;
		cout << "Total Cost of Call: $" << total_cost << endl << endl;
		cout << "Would you like to do another calculation (Y or N): ";
		cin >> user_response;
		cout << endl;
	}

	cout << "Goodbye!" << endl;
	return 0;
}