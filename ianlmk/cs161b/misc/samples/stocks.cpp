//This program reads from a file called stocks.txt
//There are function stubs to loadData and printData
//Just fill them out.

#include <iostream>
#include <fstream>
using namespace std;

//we will load and print the data in the same function
//since we are not storing nay data
int loadData(ifstream &inFile);
//function to open the file
bool openFile(ifstream &inFile, char fileName[]);

//main
int main()
{
	ifstream inFile;
	char fileName[51];
	strcpy(fileName, "stocks.txt");
	openFile(inFile, fileName);
	loadData(inFile, fileName);
	return 0;
}

//write the 2 functions here.
//
