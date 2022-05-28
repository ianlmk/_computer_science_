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

//function prototypes
bool openFile(ifstream &inFile);
int loadData(ifstream &inFile, char occupations[][MAXCHAR], int nums[][2]);
void printData(char occupations[][MAXCHAR], int nums[][2], int count);



//main function that will call openFile, loadData and calcCalories
int main() {

  ifstream inFile;
  int i = 0;
  char items[ITEMS][MAXCHAR];
  int nums[ITEMS][2] = {0};

  if(!openFile(inFile)) {
    cout << "File did not open! Program terminating!!" << endl;
    exit(1);
  }

  i = loadData(inFile, items, nums);

  printData(items, nums, i);

  return 0;
}

//         Name:    openFile
//  Description:    accepts a filename from the user, opens the file and returns true or false
// input params:    istream &inFile, input:filename
//        ouput:    none
//       return:    true or false
bool openFile(ifstream &inFile) {
  string filename;
  cout<<"Give me the filename: ";     
  cin>>filename;
  cout<<endl;
  inFile.open(filename);
  if(!inFile) {
    return false;
  }
  return true;
}

//         Name:    loadData
//  Description:    loads data from file
// input params:    char array for item names, and int array for other data (2 dim arrays)
//       output:    none
//       return:    count of the number of items.
int loadData(ifstream &inFile, char items[][MAXCHAR], int nums[][2]) { 
  int i = 0;

  inFile.getline(items[i], MAXCHAR, ';');
  while(!inFile.eof()) {

    inFile >> nums[i][1];
    inFile.ignore(5, ';');
    inFile >> nums[i][2];
    inFile.ignore(5, '\n');

    i++;
    inFile.getline(items[i], MAXCHAR, ';');
  }
  return i;
}
		
//         Name:    printData
//  Description:    
// input params:    count, 2 arrays
//       output:    name of each occupatin and percentage of jobs at risk of automation
//       return:    none
void printData(char items[][MAXCHAR], int nums[][2], int count) {
  double percentage = 0;
  cout<<setw(25)<<setfill(' ')<<left<<"Occupation Name"<<setw(20)<<left<<"Employed"<<setw(20)<<"Automation"<<left<<"Percent %"<<endl;
  cout<<setw(85)<<setfill('-')<<left<<""<<endl;
  for(int i = 0; i < count; i++) {
    //calculate total calories for each line
    percentage = 100*(static_cast<double>(nums[i][2]) / static_cast<double>(nums[i][1]));
    //output each line
    cout<<setw(25)<<setfill(' ')<<left<<items[i];
    cout<<setw(20)<<setfill(' ')<<left<<nums[i][1];
    cout<<setw(20)<<setfill(' ')<<left<<nums[i][2];
    cout<<setw(7)<<setfill(' ')<<left<<fixed<<setprecision(4)<<percentage<<"%"<<endl;
  }
  cout << "Thank you!!" << endl;
}
