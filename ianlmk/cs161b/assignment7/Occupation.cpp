//a07.h
//function definitions for a07.cpp

#pragma once
#include <fstream>
#include <iostream>
#include <cstring>
#include <iomanip>
#include "Occupation.h"

using namespace std;

/*
from Occupation.h: 

    struct item {
      char occupation[MAXCHAR];
      int employed;
      int automation;
    };

*/ 



// f(x) prototypes
bool openFile(ifstream &inFile);
int loadData(ifstream &inFile, char occupations[][MAXCHAR], int nums[][2]);
void printData(char occupations[][MAXCHAR], int nums[][2], int count);
void findHigh(char occupations[][20], int nums[][2], int rows, char occupationh[], double &highPercent);
void findLow(char occupations[][20], int nums[][2], int rows, char occupationl[], double &lowPercent);

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
int loadData(ifstream &inFile, char jobs[ITEMS], int nums[][2]) {
  int i = 0;

  inFile.getline(jobs[i], MAXCHAR, ';');
  while(!inFile.eof()) {

    inFile >> jobs[i].occupation;
    inFile.ignore(5, ';');
    inFile >> jobs[i].employed;
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
