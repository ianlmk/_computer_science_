//This program demos basic for loops
//Read 2 nums from the user and print all numbers between the 2 numbers inclusive
//
#include <iostream>
using namespace std;

//constants
const int NUM = 6;

//main()
int main()
{
	int firstNum = 0, secondNum= 0;
	cout << "Please enter 2 numbers (the first less than the second): ";
	cin >> firstNum >> secondNum;
	for(int i = firstNum; i <= secondNum; i++)
	{
		if(i % 2 == 0)
		{
			cout << "Fizz!!" << endl;
		}
		else if(i % 5 == 0)
		{
			cout << "Buzz!!" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	return 0;
}
