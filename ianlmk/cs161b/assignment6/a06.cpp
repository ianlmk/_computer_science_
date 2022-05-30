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
void findHigh(char occupations[][20], int nums[][2], int rows, char occupationh[], double &highPercent);
void findLow(char occupations[][20], int nums[][2], int rows, char occupationl[], double &lowPercent);

//main function that will call openFile, loadData and calcCalories
int main() {

  ifstream inFile;
  int i = 0;
  char occupations[ITEMS][MAXCHAR];
  int nums[ITEMS][2] = {0};
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
  i = loadData(inFile,occupations,nums);

  // format and output the data from f(x): printData
  printData(occupations, nums, i);


  findHigh(occupations,nums,i,occupationh,highPercent);
  cout<<occupationh<<" has the highest share at: ("<<setprecision(4)<<highPercent<<"%)"<<endl;


  findLow(occupations,nums,i,occupationl,lowPercent);
  cout<<occupationl<<" has the lowest share at: ("<<setprecision(4)<<lowPercent<<"%)"<<endl;

  cout << "Thank you!!" << endl;
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
int loadData(ifstream &inFile, char occupations[][MAXCHAR], int nums[][2]) { 
  int i = 0;

  inFile.getline(occupations[i], MAXCHAR, ';');
  while(!inFile.eof()) {

    inFile >> nums[i][1];
    inFile.ignore(5, ';');
    inFile >> nums[i][2];
    inFile.ignore(5, '\n');

    i++;
    inFile.getline(occupations[i], MAXCHAR, ';');
  }
  return i;
}
		
//         Name:    printData
//  Description:    
// input params:    count, 2 arrays
//       output:    name of each occupatin and percentage of jobs at risk of automation
//       return:    none
void printData(char occupations[][MAXCHAR], int nums[][2], int count) {
  double percentage = 0;
  cout<<setw(25)<<setfill(' ')<<left<<"Occupation Name"<<setw(20)<<left<<"Employed"<<setw(20)<<"Automation"<<left<<"Percent %"<<endl;
  cout<<setw(85)<<setfill('-')<<left<<""<<endl;
  for(int i = 0; i < count; i++) {
    //calculate total calories for each line
    percentage = 100*(static_cast<double>(nums[i][2]) / static_cast<double>(nums[i][1]));
    //output each line
    cout<<setw(25)<<setfill(' ')<<left<<occupations[i];
    cout<<setw(20)<<setfill(' ')<<left<<nums[i][1];
    cout<<setw(20)<<setfill(' ')<<left<<nums[i][2];
    cout<<setw(7)<<setfill(' ')<<left<<fixed<<setprecision(4)<<percentage<<"%"<<endl;
  }
  cout<<endl;
}


void findHigh(char occupations[][20], int nums[][2], int rows, char occupationh[], double &highPercent) {
  highPercent = static_cast<double>(nums[0][2]) / static_cast<double>(nums[0][1]);
  strcpy(occupationh, occupations[0]);
  for ( int i = 0; i < rows; i++) {
    double hp = (static_cast<double>(nums[i][2]) / static_cast<double>(nums[i][1]));
    if (hp > highPercent) {
      highPercent = hp;
      strcpy(occupationh, occupations[i]);
    }
  }
  
  highPercent *= 100;

}

void findLow(char occupations[][20], int nums[][2], int rows, char occupationl[], double &lowPercent) {

  lowPercent = (static_cast<double>(nums[0][2]) / static_cast<double>(nums[0][1]));
  strcpy(occupationl, occupations[0]);
  for ( int i = 0; i < rows; i++) {
    double lp = (static_cast<double>(nums[i][2]) / static_cast<double>(nums[i][1]));
    if ( lowPercent > lp ) {
      lowPercent = lp;
      strcpy(occupationl, occupations[i]);
    }
  }
  lowPercent *= 100;

}
