/*
###################################################################################
# Author:           Ian LaMotte-Kerr
# Assignment:       Assignment 6
# Date:             $(date -j -f "%a %b %d %T %Z %Y" "`date`" "+%s")
# Description:
# Input:            gumballRadius, containerSize
# Output:           gumballCount, gumballAverage,largestGumball,largestGumballJar
# Sources:          assignment6.pdf
###################################################################################
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {

  const double LOAD_FACTOR = 0.64;
  const double PI = M_PI;

  double gumballRadius = 0.0;
  double containerSize = 0.0;
  double gumballVolume = 0.0;
  double totalGumballs = 0.0;
  double gumballAverage = 0.0;
  double largestGumball = 0.0;
  double largestGumballJar = 0.0;
  int gumballCount = 0;
  int iterCount = 0;
  char selection ='y';

  // Clear the screen
  cout << "\033[2J\033[1;1H";
  // Program header
  cout << "##########################################################\n"
       << "#         Welcome to my gumball guesser program!         #\n" 
       << "##########################################################" 
       << endl;

  // loop setup on a 'y' selection
  while (selection != 'n') { 
    iterCount++;
    cout << "\nEnter the radius of a gumball (cm): "; 
    cin >> gumballRadius;
    cout << "Enter the volume of the jar (mL) holding the gumballs: ";
    cin >> containerSize;
  
    // volume stuff and jar size stuff
    gumballVolume = (4.0 / 3.0) * M_PI * pow(gumballRadius, 3.0);
    if (largestGumball < gumballVolume) {
      largestGumball = gumballVolume;
      largestGumballJar = containerSize;
    }  

    //gumball count, total, and average over all iterations
    gumballCount = (containerSize * LOAD_FACTOR ) / gumballVolume;
    totalGumballs = totalGumballs + gumballCount;
    gumballAverage = totalGumballs / iterCount;  

    // iteration output
    cout << "\nEstimated number of gumballs in the jar: " << fixed << setprecision(2) << gumballCount << endl;
    cout << "\n=========================================\n";
    // update selection
    cin.ignore();
    cout << "\nDo you want to enter more (y/n): ";
    selection = cin.get();
    cout << "\n=========================================";
    // Invalid input condition    
    if ((selection != 'y') && (selection !='n')) {
      cout << "\nInvalid selection. Thank you for using my program!\n" << endl;
      exit(0);
    }
  }

    cout << setw(50) << left << "\nNumber of plays: " << right << iterCount << endl;
    cout << setw(50) << left << "\nAverage gumball count: " << right << gumballAverage;
    cout << setw(50) << left << "\nLargest gumball: " << right << largestGumball << "cm^3";
    cout << setw(50) << left << "\nJar size holding the largest gumballs: " << right << largestGumballJar << "mL";
    cout << "\n_________________________________________________________\n"; 
    cout << "\nThank you for using my program!" << endl;; 

  return 0;
}
