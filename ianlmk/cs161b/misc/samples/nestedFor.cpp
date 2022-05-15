//This is a program that demos nested for loops
//
#include <iostream>

using namespace std;

//constants
const int ROWS = 5;
const int COLS = 3;

//main
int main()
{
	for(int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			cout <<"* ";
		}
		cout << endl;
	}
	return 0;
}

