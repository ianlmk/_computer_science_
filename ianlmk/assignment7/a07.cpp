/*
Program:       Assignment7
Maintainer:    Ian LaMotte-Kerr
Date created:  2.28.2022
Description:

*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {

  int x=1;
  char catSelection = '';
  char itemSelection = '';
  string category[] = { "Donuts/Muffins/Pastries", "Bagels/Toast/Bread", "Coffee/Tea", "Quit/Exit" };
  string sweets[] = { "Donut", "Muffin", "Pastries" };
  string savories[] = { "Bagel", "Toast", "Bread" };
  string drinks[] = { "Coffee", "Tea" };  

  cout << "Lets get you some coffee!\n" << endl;
  
  cout << "What would you like today?\n";
 

  for (auto i: category) {
    cout << x << ": " << i << endl;
    x++;
  }
  cin >> catSelection;
  
  switch (catSelection) {
    case 1:
      for (auto i: sweets) {
      cout << x << ": " << i;
      x++;
      }
      cin >> itemSelection
    case 2:
     for (auto i: sweets) {
      cout << x << ": " << i;
      x++;
      }      
    case 3: 
     for (auto i: sweets) {
      cout << x << ": " << i;
      x++;
      }
    default:
      break;
  }



  return 0;
}


