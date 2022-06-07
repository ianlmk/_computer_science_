// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Darth Vadar and Luke Sykwalker
# Lab:              Discussion #1
# Date:             April 20, 2021
# Description:      This progam prompts for an age and calculates birth year
# Input:            string name, integer age
# Output:           integer birth year
# Sources:          None
#******************************************************************************/

#include <iostream>

using namespace std;

const int CURRENT_YEAR = 2021;

int main() {
  string first = ""; 
  string last = ""; 
  string pin_string = "";
  string uid = "";
  int pin;

  top:
    cout << "First, last, and 4 digit pin please: " << endl;
  
    cin >> first >> last >> pin;
    
    if (cin.fail()) {
      cout << "Something went wrong with your input, try again. " << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      goto top;
    } 
    
    pin_string = to_string(pin);

    for (int i = 0; i < 5; i++) {
      if ( isdigit(pin_string.at(i)) ) {
        cout << "uid: " << last.substr(0,5) << first.substr(0,1) << pin_string.substr(2,4) << endl;
        break;
      } 
    }

  return 0;
}
