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


item jobs[ITEMS];

bool openFile(ifstream &inFile) {
  string filename = "aidata.txt";
  inFile.open(filename);
  if(!inFile) {
    return false;
  }
  return true;
}

int loadData(ifstream &inFile){
  cout<<"Loading Data"<<endl;
  int i = 0;
  inFile.getline(jobs[i].occupation,MAXCHAR, ';');
//  cout<<"Test: "<<i<<" "<<jobs[i].occupation<<endl;
  while(!inFile.eof()){
    inFile>>jobs[i].employed;
//  cout<<"Test: "<<i<<" "<<jobs[i].employed<<endl;
    inFile.ignore(5,';');
    inFile>>jobs[i].automation;
//  cout<<"Test: "<<i<<" "<<jobs[i].automation<<endl;
    inFile.ignore(5,'\n');
    i++;
    inFile.getline(jobs[i].occupation,MAXCHAR,';');
  }
  return i;
}


void printData(int i) {
  double percentage = 0;
  cout<<setw(25)<<setfill(' ')<<left<<"Occupation Name"<<setw(20)<<left<<"Employed"<<setw(20)<<"Automation"<<left<<"Percent %"<<endl;
  cout<<setw(85)<<setfill('-')<<left<<""<<endl;
  for(int x = 0; x < i; x++) {
    //calculate total calories for each line
    percentage = 100*(static_cast<double>(jobs[x].automation) / static_cast<double>(jobs[x].employed));
    //output each line
    cout<<setw(25)<<setfill(' ')<<left<<jobs[x].occupation;
    cout<<setw(20)<<setfill(' ')<<left<<jobs[x].employed;
    cout<<setw(20)<<setfill(' ')<<left<<jobs[x].automation;
    cout<<setw(7)<<setfill(' ')<<left<<fixed<<setprecision(4)<<percentage<<"%"<<endl;
  }
  cout<<endl;
}

void findHigh(int rows, char occupationh[], double &highPercent) {
  highPercent = static_cast<double>(jobs[0].automation) / static_cast<double>(jobs[0].employed);
  strcpy(occupationh, jobs[0].occupation);
  for ( int i = 0; i < rows; i++) {
    double hp = (static_cast<double>(jobs[i].automation) / static_cast<double>(jobs[i].employed));
    if (hp > highPercent) {
      highPercent = hp;
      strcpy(occupationh, jobs[i].occupation);
    }
  }

  highPercent *= 100;

}

void findLow(int rows, char occupationl[], double &lowPercent) {

  lowPercent = (static_cast<double>(jobs[0].automation) / static_cast<double>(jobs[0].employed));
  strcpy(occupationl, jobs[0].occupation);
  for ( int i = 0; i < rows; i++) {
    double lp = (static_cast<double>(jobs[0].automation) / static_cast<double>(jobs[0].employed));
    if ( lowPercent > lp ) {
      lowPercent = lp;
      strcpy(occupationl, jobs[i].occupation);
    }
  }
  lowPercent *= 100;

}
