// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Carlos Casarez, Surafel Regea, Ian LaMotte-Kerr 
# Lab:              Discussion #7
# Date:             March 8, 2022
# Description:      This progam prompts for a string and checks if its a palindrome
# Input:            string userStr
# Output:           palindromeConfirmation
# Sources:          discussion7 assignment
#******************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

int palindrome(string);
int main();


int main() {
  string input;
  bool status = false;
  char run = 'y';
  // clear screen to start
  cout << "\033[2J\033[1;1H";
  cout << "Lets check your word to see if its a palindrome.\n";
  // NOTE: could have been a do while loop
  while (run == 'y') {
    cout << "\nEnter string: ";
    getline(cin, input, '\n');
    cout << endl;
    // run palindrome function on the input
    status = palindrome(input);
    // condition for response. Could be another function, could be in the palindrome function
    if (status == true) {
      cout << "\"" << input << "\"" << " is a palindrome."  << endl;
    } else if (status != true) {
      cout << "\"" << input << "\"" << " is not palindrome."  << endl;
    }
    // continue/end confirmation
    cout << "\nAnother? ";
    cin >> run;
    cout << endl;
    cin.ignore();
  }

  return 0;
}

int palindrome(string input) {
  // var for local string manipulation
  string inputp = input;
  // remove spaces from func string
  for (int i = 0; i < inputp.length(); ++i) {
    inputp.erase(find(inputp.begin(), inputp.end(), ' '));
  }
  // declare func vars
  bool confirmed = false;
  int x = inputp.size() - 1;
  // output string with no spaces
  if (input.find(' ') == true) {
    cout << "spaces removed: " << inputp << "\n" << endl;
  }
  // palindrome comparitor and bool assignment
  for (int i = x; i >= 0; i--) {
    cout << "      " << inputp.at(i) << " | " << inputp.at(x-i) << endl;
  }
  for (int i = x; i >= 0; i--) {
    if (tolower(inputp.at(i)) == tolower(inputp.at(x-i)) ) {
      confirmed = true;
    } else {
      confirmed = false;
      break;
    }
    // output the comparison made
  }

  cout << endl;

  return confirmed;
}
