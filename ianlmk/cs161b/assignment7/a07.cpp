/*
###################################################################################
# Author:           Ian LaMotte-Kerr
# Assignment:       Assignment 7
# Date:             $(date -j -f "%a %b %d %T %Z %Y" "`date`" "+%s")
# Description:
# Input:            aidata.txt 
# Output:          
# Sources:          
###################################################################################
*/

#include "Occupation.h"

int main() {

  ifstream inFile;
  double highPercent = 0.0;  
  double lowPercent = 0.0;
  int i = 0;
  char occupationl[MAXCHAR];
  char occupationh[MAXCHAR];


  if(!openFile(inFile)) {
    cout << "File did not open! Program terminating!!" << endl;
    exit(1);
  } else {
    cout<<"File opened."<<endl; 
  }

  i = loadData(inFile);

  printData(i);
  
  findHigh(i,occupationh,highPercent);
  cout<<occupationh<<" has the highest share at: ("<<setprecision(4)<<highPercent<<"%)"<<endl;
  findLow(i,occupationl,lowPercent);
  cout<<occupationl<<" has the lowest share at: ("<<setprecision(4)<<lowPercent<<"%)"<<endl;

  cout << "Thank you!!" << endl;
  return 0;
}

