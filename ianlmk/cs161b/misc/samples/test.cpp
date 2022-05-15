#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	cin >> x;
	while(!cin)
	{
		cin.clear();
		cin.ignore(5, '\n');
		cout << "Bad input!\n";
		cin >> x;
	}
	cout << x << endl;
}
