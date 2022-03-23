/*
author:  Ian LaMotte-Kerr
date:  March 23, 2022
title:  final
purpose: 

*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

// declare functions

int main();
int getLargest(int,int);
int getSmallest(int,int);
void killNine(string);
string found(string,string);

int main() {
  int max = std::numeric_limits<int>::min();
  int min = std::numeric_limits<int>::min();
  int input;
  int countCheck = 0;
  bool check = false;

  cout << "Enter positive integers separated by newlines (0 to quit)" << endl;

  do {
    cin >> input;

    if (input > 0) {
      max = getLargest(max, input);
      countCheck += input;
    }
   
  } while (input != 0); 

  if (countCheck > 0) {
    check = true;
  }
  if (check == false) {
    killNine("No positive integers entered");
  }
  cout << "largest number you entered was: " << max << endl;

  return 0;
}

int getLargest(int max, int number) {
  // find largest number passed through the variable "number"
  if (number > max) {
    max = number;
  }
  return max;
}

int getSmallest(int min, int number) {
  // find smallest number passed through the variable "number"
  if (number < min) {
    min = number;
  }
  return min;
}

void killNine(string message){
  // exit the program
  cout << message << endl;
  exit(0);
}

string found(string fStr, string mainStr) {
  // search mainStr for fStr
  string founded = "";
  founded = mainStr.find(fstr);
  if(founded != std::string::npos) {
    return founded
  }
}
