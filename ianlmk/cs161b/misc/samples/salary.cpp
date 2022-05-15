//This program reads from data.txt and outputs total salary
//output the name, salary and total pay separated by space
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//function to open file
bool openFile(ifstream &inFile, char fileName[]);
void calcTotal(ifstream &inFile);

int main()
{
	ifstream inFile;
	char fileName[51];
	//open the file using the function
	cout << "Enter filename: ";
	cin.getline(fileName, 51);
	if(!openFile(inFile, fileName))
	{
		cout << "File did not open! Exiting!!" << endl;
		return 1;
	}
	cout << "File opened!!" << endl;
	calcTotal(inFile);
	inFile.close();
	return 0;
}

bool openFile(ifstream &inFile, char fileName[])
{
	inFile.open(fileName);
	if(!inFile)
	{
		return false;
	}
	return true;
}

void calcTotal(ifstream &inFile)
{
	char name[51];
 	double salary = 0, raise = 0;
	double total = 0;
	cout << fixed << showpoint << setprecision(2);
	inFile >> name >> salary >> raise;
	while(!inFile.eof())
	{
		total = salary + (salary * raise / 100);
		cout << name << " " << salary << " " << total << endl; 
		inFile >> name >> salary >> raise;
	}
}










