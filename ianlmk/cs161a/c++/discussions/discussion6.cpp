// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Ian
# Lab:              Discussion 6 
# Date:             Feb 27th, 2022
# Description:      Accepts line of ints, and spits out statistics about them
# Input:            input
# Output:           sum, average, min, max
# Sources:          Discussion 6 topic
#******************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

const int CURRENT_YEAR = 2021;

int main() {

  int i = 0;
  int byte;
  int sum = 0;
  int min = std::numeric_limits<int>::max();
  int max = std::numeric_limits<int>::min();
  double average = 0.0;

  cout << "\033[2J\033[1;1H";

  cout << "\nEnter a list of integers separated by spaces.\nWhen you are done entering integers, type any non number char and press return:\n    ";
  do {
    i++;
    cin >> byte; 
    if (i == 1) {
      cout << setw(40) << setfill('=') << "" << endl;
      cout << setw(15) << setfill(' ') << right << "INDEXES\n" << endl;
    }
    if (cin.fail() == true) {
      break;
    } else if (cin.fail() == false) {
      sum += byte;
      average = sum / i;
      // define min
      if (byte < min) {
        min = byte;
      }
      // define max
      if (byte > max) {
        max = byte;
      }
    cin.ignore();
    }
    cout << "iteration count: " << i << " | "; 
    cout << "number: " << byte << endl;
  } while (cin.peek() != '\n');
 
  cout << "" << setw(40) << setfill('=') << "" << endl;
  cout << setw(15) << setfill('.');  
  cout << left << "\n  sum: " << right << " " << sum;
  cout << setw(15);  
  cout << left << "\n  average: " << right << " " << average;
  cout << setw(15);  
  cout << left << "\n  min: " << right << " " << min;
  cout << setw(15);  
  cout << left << "\n  max: " << right << " " << max << "\n" << endl;
  

  return 0;
}
