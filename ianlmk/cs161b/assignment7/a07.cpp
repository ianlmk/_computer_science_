/*
###################################################################################
# Author:           Ian LaMotte-Kerr
# Assignment:       Assignment 6
# Date:             $(date -j -f "%a %b %d %T %Z %Y" "`date`" "+%s")
# Description:
# Input:            aidata.txt 
# Output:          
# Sources:          
###################################################################################
*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>

using namespace std;

//constant for number of items
const int ITEMS = 25;
//constant for number of characters
const int MAXCHAR = 20;

// struct
// format: 
/* struct item {
     char occupation[MAXCHAR];
     int employed;
     int automation;
   };
*/
item jobs[ITEMS];

//function prototypes
bool openFile(ifstream &inFile);
int loadData(ifstream &inFile, item jobs[]);
void printData(item jobs[], int count);
void findHigh(item jobs[], char occupationh[], double &highPercent);
void findLow(item jobs[], char occupationl[], double &lowPercent);

//main function that will call openFile, loadData and calcCalories
int main() {

  ifstream inFile;
  int i = 0;
  double highPercent = 0.0;  
  double lowPercent = 0.0;
  char occupationh[MAXCHAR];  
  char occupationl[MAXCHAR];  

  cout << "\033[2J\033[1;1H";
  if(!openFile(inFile)) {
    cout << "File did not open! Program terminating!!" << endl;
    exit(1);
  }

  // init data from file
  i = loadData(inFile,jobs);

  // format and output the data from f(x): printData
  printData(jobs, i);


  findHigh(jobs,occupationh,highPercent);
  cout<<occupationh<<" has the highest share at: ("<<setprecision(4)<<highPercent<<"%)"<<endl;


  findLow(jobs,occupationl,lowPercent);
  cout<<occupationl<<" has the lowest share at: ("<<setprecision(4)<<lowPercent<<"%)"<<endl;

  cout << "Thank you!!" << endl;
  return 0;
}
