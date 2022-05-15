//This program demos cin.ignore and when and how to use it
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
//If I want to read a date in this format - 06/21/2022 from the user
//and print it as day, month and year as 3 integers.
	int day = 0, month = 0, year = 0;
	string firstName, lastName, subject;
	cout <<  "Enter a date in this format mm/dd/year: ";
    cin >> month;
    cin.ignore(1, '/');
    cin >> day;
    cin.ignore(1, '/');
    cin >> year;
    cin.ignore(5, '\n');
	while(day != 0 && month != 0 && year != 0)
	{
		//output to the user
		cout << day << "-" << month << "-" << year << endl;
		cout << "Enter a date in this format mm/dd/year: ";
		cin >> month;
		cin.ignore(1, '/');
		cin >> day;
		cin.ignore(1, '/');
		cin >> year;
		cin.ignore(5, '\n');
	}
//read a string from the user in this format
//firstname;last name;subject
	cout << "Enter your f name, l name and subject separated by \";\" : ";
	getline(cin, firstName, ';');
	getline(cin, lastName, ';');
	getline(cin, subject);
	//output the 3 strings separately
	cout << firstName << endl;
	cout << lastName << endl;
	cout << subject << endl;
	//end
	return 0;
}
