//This program demos command line arguments
//
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int num1 = 0, num2 = 0, sum = 0;
	cout << "Here is your list of arguments: " << endl;
	for(int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}
	//sum of the arguments - if args are numbers
	num1 = stoi(argv[1]);
	num2 = stoi(argv[2]);
	sum = num1 + num2;
	cout << "Sum = " << sum << endl;
	return 0;
}

