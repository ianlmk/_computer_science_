//This program demos inc and dec - post and pre
//
#include <iostream>
using namespace std;

int main()
{
	int x = 0, y = 0;
	x = 6, y = 9;
	++x;
	y++;
	cout << "y = " << y-- << endl;
	cout << "x = " << --x << endl;
	for(int i = 0, num = 0; i < 5;i++, num += 2)
	{
		cout << i << " " << num << endl;
	}

	return 0;
}
