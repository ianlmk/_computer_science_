//This program demos cin.ignore and when and how to use it
//And do while loops
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
//If I want to read a date in this format - 06/21/2022 from the user
//and print it as day, month and year as 3 integers.
    int day = 0, month = 0, year = 0;
    do
	{
        cout << "Enter a date in this format mm/dd/year: ";
        cin >> month;
        cin.ignore(1, '/');
        cin >> day;
        cin.ignore(1, '/');
        cin >> year;
        cin.ignore(5, '\n');
	 	//output to the user
	 	if(day != 0 && month != 0 && year != 0) {
        	cout << day << "-" << month << "-" << year << endl;
		}
    }while(day != 0 && month != 0 && year != 0);

	return 0;
}
