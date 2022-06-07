#include "tools.h"
//displayMenu
//outputs the menu to the user
//takes no parameters
//returns nothing
void displayMenu() {
  cout << "(a) Add a number" << endl;
  cout << "(r) Remove a number" << endl;
  cout << "(p) Print the list" << endl;
  cout << "(s) Search the list" << endl;
  cout << "(q) Quit" << endl;
}

//readOption
//reads the option from the user
//takes no parameters
//returns the char value
char readOption() {
  char option;
  cout << "Please pick an option:" << endl;
  cin >> option;
  cin.ignore(100, '\n');
  return option;
}
