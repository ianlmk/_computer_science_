/*
##############################################################################
# Author:           Ian LaMotte-Kerr
# Assignment:       Assignment 3: Counting Cookies
# Date:             $(date -j -f "%a %b %d %T %Z %Y" "`date`" "+%s")
# Description:      This program prompts a user for how many oreos they've
#                   eaten and prints the serving size and calories to screen.
# Input:            cookieCount
# Output:           cookiesCount,totalCalories,totalServings
# Sources:          assignment3.pdf
##############################################################################
*/


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

  int servingSize = 3;
  int caloriesPerCookie = 53;
  double cookieCount;
  int totalCalories;
  double totalServings;

  cout << "Welcome to the Oreo calculator!\n"
       << "\nEnter the number of Oreos eaten: ";
  cin >> cookieCount;

  while (cookieCount < 0){
    cin.clear();
    cin.sync();
    cout << "\nYou seem to have eaten negative cookies. Go eat some more and let me know how many: ";
    cin >> cookieCount;
  }
  cout << endl;

  totalCalories = cookieCount * caloriesPerCookie;
  totalServings = cookieCount / servingSize;

  cout << "\n" << cookieCount << " Oreos equals " << fixed << setprecision(1) << totalServings << " servings!\n"
       << "You consumed " << totalCalories << " calories." << endl;

  return 0;



}
