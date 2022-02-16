/*
##############################################################################
# Author:           Ian LaMotte-Kerr
# Assignment:       Assignment 5
# Date:             $(date -j -f "%a %b %d %T %Z %Y" "`date`" "+%s")
# Description:
#
# Input:
# Output:
# Sources:          assignment5.pdf
##############################################################################
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {

  const double LOAD_FACTOR = 0.64;
  const double PI = M_PI;

  double gumballRadius;
  double containerSize;
  double gumballVolume;
  int gumballCount;
  char response;

  // Clear the screen
  cout << "\033[2J\033[1;1H";
  // Program header
  cout << "Welcome to my gumball guesser program!" << endl;
  // loop setup
  top:  
    cout << "Enter the radius of a gumball (cm) and the volume of a jar (mL) separated by a space: ";
    cin >> gumballRadius >> containerSize;
    gumballVolume = (4.0 / 3.0) * M_PI * pow(gumballRadius, 3.0);
    gumballCount = (containerSize * LOAD_FACTOR ) / gumballVolume;

    cout << "Estimate of gumballs in the jar: " << fixed << setprecision(2) << gumballCount << endl;
    cout << "\nDo you want to enter more (y/n): ";

    cin >> response;
      if (response == 'y') {
        goto top;
      } else {
        cout << "Thank you for using my program!\n" << endl;
        exit(0);
      }

  return 0;
}
