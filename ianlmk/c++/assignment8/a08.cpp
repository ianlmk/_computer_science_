/*
Program:       Assignment8
Maintainer:    Ian LaMotte-Kerr
Date created:  3.19.2022
Description:   refactor of cafe assignment (#7) to include functions

*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <string.h>
#include <vector>

using namespace std;


// declare function list
int main();
void welcomeMessage();
void menuDisplay(string,int);
char readOption(string);
double getTip(double);

void welcomeMessage() {
  cout << "\033[2J\033[1;1H";
  cout << "Welcome to my Coffee Shop\n" << endl;
}

void menuDisplay(string menu[],int size) {
  string item;
  if (size == 4) {
    cout << "Please pick an option below:" << endl;
    for (int x = 0; x < size; x++) {
      cout << x + 1 << ": " << menu[x] << endl;
    }
  } else if (size < 4) {
    for (int x = 0; x < size; x++) {
      item = menu[x];
      cout << "    " << item.at(0) << ":" << item << endl;
    }
  }
  cout << endl << " >> ";
}

char readOption(string checks) {
  char option;
  cin >> option;
  cout << endl;
  while (checks.find(tolower(option)) == string::npos) {
    cout << "Invalid Option!" << endl;
    break;
  }
  cout << endl;
    
  return option;
}

void added(string stuff) {
  cout << "  " <<  stuff << " added" << endl;  
}

int main() {
  // variables used to call functions

  string category[] = { "Donuts/Muffins/Pastries", "Bagels/Toast/Bread", "Coffee/Tea", "Done" };
  string sweets[] = { "Donut", "Muffin", "Pastries" };
  string savories[] = { "Bagel", "Toast" };
  string drinks[] = { "Coffee", "Tea" };
  char itemSelect;
  char catSelect;
  char order = 'y';
  double price = 0.0;
  double total = 0.0;
  double tip = 0.0;
  vector<string> itemList;

  // call welcome function
  welcomeMessage();

  // orchestration while loop   
  while (order == 'y') {

    menuDisplay(category,4);
    catSelect = readOption("1234");

    switch (catSelect) {
      case '1': 
        menuDisplay(sweets,3);
        itemSelect = readOption("dmp");
        switch (itemSelect) {
          case 'd':
            price = 4.00;
            total += price;
            added(sweets[0]);
            itemList.push_back(sweets[0]);
            break;
          case 'm':
            price = 4.50;
            total += price;
            added(sweets[1]);
            itemList.push_back(sweets[1]);
            break;
          case 'p':
            price = 5.50;
            total += price;
            added(sweets[2]);
            itemList.push_back(sweets[2]);
            break;
          default:
            break;
        }
        break;
      case '2':
        menuDisplay(savories,2);
        itemSelect = readOption("bt");
        switch (itemSelect) {
          case 'b':
            price = 3.75;
            total += price;
            added(savories[0]);
            itemList.push_back(savories[0]);
            break;
          case 't':
            price = 2.25;
            total += price;
            added(savories[1]);
            itemList.push_back(savories[1]);
            break;
          default:
            break;
        }
        break;
      case '3':
        menuDisplay(drinks,2);
        itemSelect = readOption("ct");
        switch (itemSelect) {
          case 'c':
            price = 3.50;
            total += price;
            added(drinks[0]);
            itemList.push_back(drinks[0]);
            break;
          case 't':
            price = 2.50;
            total += price;
            added(drinks[1]);
            itemList.push_back(drinks[1]);
            break;
          default:
            break;
        }
        break;
      case '4':
        order = 'n'; 
      default:
        break;
    }
    cout << "  Total:" << setw(16) << right << "$" << fixed << setprecision(2) << total << "\n" << endl;
    
  }
  cout << setfill (' ') << "Items ordered: \n" << endl;

  for (int i = 0; i < itemList.size(); i++) {
    cout << "    " << itemList[i] <<  "\n";
  }



  cout << "\n  Total:" << setw(16) << right << "$" << fixed << setprecision(2) << total << "\n" << endl;
  
  tip = getTip(total);

  total += tip;

  cout <<"Grand total " << setw(10) << right << "$" << fixed << setprecision(2) << total << "\n" << endl;
  cout << "Have a great day!\n" << endl;
  
  return 0;
}

double getTip(double total) {
  double tip;
  cout << "\nWould you like to add a tip?\n\n";
  cout << setw(10) << "10%: " << total * .10 << endl;
  cout << setw(10) << "15%: " << total * .15 << endl;
  cout << setw(10) << "20%: " << total * .20 << endl;
  cout << "\n" << setw(10) << setfill(' ') << right << "Enter tip: $";
  cin >> tip;
  while (tip < 0) {
    cout << "Tip cannot be negative. Please enter an amount greater than or equal to 0: ";
    cin >> tip;
  }

  return tip;
}

