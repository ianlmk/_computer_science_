/******************************************************************************
# Author:           Darth Vadar and Luke Sykwalker
# Lab:              Discussion #xxx
# Date:             April 20, 2021
# Description:      xxx
# Input:            xx
# Output:           xx
# Sources:          None
#******************************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//function prototypes
bool openFile(ifstream& inFile, string fileName);
void ratioCalc(ifstream& inFile);

//main
int main()
{
	ifstream inFile;
	string fileName;
	//cout << "Enter name of input file:";
	//cin >> fileName;
	if (!openFile(inFile, "stem.txt"))
	{
		cout << "file did not open. Program terminating!!!";
		return 0;
	}
	ratioCalc(inFile);
	inFile.close();
}

//function to open file
//returns true if file opens
//returns false if file does not open for any reason
//parameters: file stream variable by reference and fileName

bool openFile(ifstream& inFile, string fileName)
{
	inFile.open(fileName);
	if (!inFile)
	{
		return false;
	}
	return true;
}

//write the ratioCalc function below this
void ratioCalc(ifstream& inFile){
  int majorCode;
  string major;
  string category;
  int total;
  int men;
  int women;
  int annual;
  int salary;
  
  

}
