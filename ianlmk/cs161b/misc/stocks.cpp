//This program reads from a file called stocks.txt
//There are function stubs to loadData and printData
//Just fill them out.

#include <iostream>
#include <fstream>
using namespace std;

//we will load and print the data in the same function
//since we are not storing nay data
//int loadData(ifstream &inFile);
//function to open the file


bool openFile(ifstream &inFile, char fileName[]);
//function to find company with max stock value

double maxStocks(ifstream &inFile, char stkName[51]);
//function to read and print data from file

void readData(ifstream &inFile);

//main
int main() {

  ifstream inFile;
  char fileName[51];

  strcpy(fileName, "stocks.txt");

  openFile(inFile, fileName);

  readData(inFile, fileName);

  return 0;
}

//write the 3 functions here.

bool openFile( ifstream &infile, char fileName[]){
  infile.open(fileName);
  if (!infile.is_open()) {
    cout<<"Could not open the file: "<<fileName<<endl;
    return false;
  }
  return true;
}

double maxStocks(ifstream &inFile, char stkName[51]) {
  double rNum = 0.0;

  
  return 
}

void readData(ifstream &inFile) {
  string word;
  double stockValue;
  double valueChange;

  while (!inFile.eof()) {
    inFile >> word;
    inFile >> stockValue;
    inFile >> valueChange;
  }

}
//
