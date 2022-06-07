/******************************************************************************
# Author:           Ian LaMotte-Kerr
# Lab:              Discussion 5
# Date:             June 4th
# Description:      palindrome checker
# Input:            char array: c-string
# Output:           
# Sources:          
#******************************************************************************/

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <iomanip>

using namespace std;

// constants

const int MAXCHAR = 50;

bool palindrome(char input[MAXCHAR], int& sizea);
int main();


int main() {
  char input[MAXCHAR] = {0};
  bool status = false;
  char run = 'y';
  int sizea;
  int count = 0;
  // clear screen to start
  //cout << "\033[2J\033[1;1H";
  cout << "Lets check your input to see if its a palindrome.\n";
  // NOTE: could have been a do while loop
  while (run == 'y') {
    status = palindrome(input,sizea);

    if (status == true) {
      cout << "\"" << input << "\"" << " is a palindrome."  << endl;
    } else if (status != true) {
      cout << "\"" << input << "\"" << " is not palindrome."  << endl;
    }

    // continue/end confirmation
    cout << "\nAnother? (y/n): ";
    cin >> run;
    cout << endl;
    for (int x = 0; x < sizea; x++){
      input[x] = '\0';
    }
    cin.clear();
    cin.ignore();
  }

  return 0;
}

  //              name: palindrome
  //       description: smashed too many actions into the function, but gets chars, and tests for a palindrome
  //  input Parameters: char array: input[MAXCHAR], int reference: sizea
  // output to console: asks for a word or phrase
  //            return: true/false

bool palindrome(char input[MAXCHAR], int& sizea) {
  int count = 0;
  char ch;
  cout << "\nEnter what you want to test for palindrome status (pressing enter starts the test): ";
  cin.get(ch);
  while (ch != '\n') {
    input[count] = tolower(ch);
    count++;
    cin.get(ch);
  }
  sizea = count;
  cout<<endl;
  for (int i = 0; i < sizea; ++i) {
    if (input[i] == ' '){
      for(int x = i; x < sizea-1; x++){
        input[x] = input[x+1];
        input[x+1] = '\0';
        //for (int i = 0; i < sizea; i++) {
        //  cout<<input[i];
        //}
        //cout<<endl;
      }
      count--;
      sizea--;
      i--;
    }
  }

  for (int i = 0;  i <= sizea / 2 && sizea != 0; i++){
    if (input[i] != input[sizea - i - 1]) {
      return false;
      break;
    }
  }
  
  return true;
}
