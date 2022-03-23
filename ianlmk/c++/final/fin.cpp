/*
author:  Ian LaMotte-Kerr
date:  March 23, 2022
title:  final
purpose: Prompts user for planned bike mileage for the week, and calculates incremental days mileage for comparison

*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

// declare functions

int main();
void message(string);
int perDay(string);

int main() {
  // framework and orchestration for the program
  int total = -1;
  int input;
  int count = 0;
  bool check = false;
  string day = "";

  message("\033[2J\033[1;1H");

  message("Welcome to my mileage tracker\n");

  message("\nHow many miles do you want to ride this week? ");
  do {
    cin >> total;
    if (cin.fail() == true) {
      message("\nWhoops! That wasn't a number\n");
      exit(0);
    }
    if (total <= 0) {
      message("No miles were tracked this week\n\nKeep riding!\n");
      exit(0);
    }
  } while (total < 0);
  message("\n");
  //cout << "total: " << total << endl; 
  for (int i = 0; i < 7; ++i) {
    switch (i) {
      case 0:
        day = "Sunday";
        count += perDay(day);
        break;
      case 1:
        day = "Monday";
        count += perDay(day);
        break;
      case 2:
        day = "Tuesday";
        count += perDay(day);
        break;
      case 3:
        day = "Wednesday";
        count += perDay(day);
        break;
      case 4:
        day = "Thursday";
        count += perDay(day);
        break;
      case 5:
        day = "Friday";
        count += perDay(day);
        break;
      case 6:
        day = "Saturday";
        count += perDay(day);
        break;
      default:
        break;
    }
  } 
  
  message("\nYou rode " + to_string(count) + " miles this week.\n");
  if (count == total) {
    message("Good job! You met your goal.\n");
  } else if (count > total) {
    message("Great job! You exceeded your goal by " + to_string(count - total) + " miles!\n");
  } else if (count < total) {
    message("Uh oh. You missed your goal by " + to_string(total - count) + " miles\n" );
  }
  message("\n Keep riding!\n");
  return 0;
}

void message(string message) {
  // writes messages, cause Im tired of writing cout and arrows
  cout << message;
}


int perDay(string day) {
  // accepts and checks daily mileage inputs, then returns the input to the main function for calculation. 
  int miles = 0;
  do {
    message("How many miles did you ride on " + day + "? ");
    while (!(cin >> miles)) {
      cin.clear();
      cin.ignore();
      message("Mileage has to be greater than 0!\n");
      message("How many miles did you ride on " + day + "? ");
    } 
    if (miles < 0) {
      message("Mileage has to be greater than 0!\n");
    } 
    
  } while (miles < 0);
  if (miles > 0) {
    return miles;
  } else {
    return 0;
  }
}

