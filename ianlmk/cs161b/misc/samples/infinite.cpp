//This program demos gdb with infinite loop
#include <iostream>
using namespace std;

int main()
{
	//read numbers from the user until they enter -1 and output the sum
	int num = 0, sum = 0;
	cout << "Enter a number: ";
	cin >> num;
	while(num != - 1)
	{
		sum += num;
		cout << "Next value: ";
		cin >> num;
	}
	cout << "Sum = " <<sum << endl;
	
	return 0;
}
