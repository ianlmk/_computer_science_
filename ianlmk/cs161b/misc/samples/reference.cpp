//This is a demo for reference params
//
#include <iostream>
#include <memory>
using namespace std;

int main()
{
	double treeHeightFt = 7.1;
	double number = 3.4;
	double& heightRef = treeHeightFt;
	
	heightRef = 12.2;
	cout << treeHeightFt << endl;
	cout << &treeHeightFt << endl;
	cout << heightRef << endl;
	cout << &heightRef << endl;
	heightRef = &number;
	heightRef = 25.4;
	cout << number << endl;
	return 0;
}
