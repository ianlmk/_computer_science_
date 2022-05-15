//This program demos scope of variables
//
#include <iostream>
using namespace std;

//constants
const int ROWS = 5;
const int COLS = 4;

//prototypes
void funOne(int &num1, int &num2);
int funTwo(const double &num1);

//main()
int main()
{
	int num1 = 4, num2 = 12;
	int i = 9;
	double dnum1 = 12.5;
	funOne(num1, num2);
	for(int i = num1; i < num2; i++)
	{
		cout << i << " ";
	}
	cout << "\n" << i << endl;
	while(i++ < 10)
	{
		int x = 12;
		cout << x << endl;
	}
	cout << i << endl;
	{
		int i = 45;
		int another = 12;
		cout << another << endl;
	}
	
	return 0;
}

void funOne(int &num1, int &num2)
{
	int temp = 0;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

int funTwo(const double &num1)
{
	cout << num1 << endl;
	return 0;
}
