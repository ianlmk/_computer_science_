/*
Program:       Assignment 8
Maintainer:    Ian LaMotte-Kerr
Date created:  2.28.2022
Description:

*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

// Function Declarations
int main();
void welcome();
void itemDisplay(string,string,int);
int categorySelect();
int itemSelect(int,string,int);
int failCondition(int, int, int);

void welcome() {
//  cout << "\033[2J\033[1;1H";
  cout << "Lets get you some coffee!\n" << endl;
  cout << "What would you like today?\n\n";
}

// Function Definitions
void itemDisplay(string menu[], string price[], int size) {
  cout  << setw(40) << setfill('=') << "" << endl;
  for (int x = 0; x < size; x++) {
    cout << setw(10) << setfill(' ') << right << "";
    cout << x + 1 << ": " << menu[x] << endl;
  }
  cout << setw(40) << setfill('=') << "" << endl; 
}

int failCondition(int decisionVar, int minimum, int maximum) {
  while (cin.fail() == true) {
    cout << "\nInvalid selection. Try again: ";
    cin.clear();
    cin.ignore(256,'\n');
    cin >> decisionVar;
  }
  while ((decisionVar  <= minimum) or (decisionVar >= maximum)) {
    cout << "\nInvalid selection. Try again: ";
    cin.clear();
    cin.ignore(256,'\n');
    cin >> decisionVar;
  }
  return decisionVar;
}

int categorySelect() {
  int catSelection;
  cout << setw(10) << setfill(' ') << right << "  Selection: ";
  cin >> catSelection;
  catSelection = failCondition(catSelection,0,5);
  return catSelection;
}

int itemSelect(int catSelection, string menu[], string price[], int size) {
  int itemSelection;
  itemDisplay(menu, price, size);
  cout << setw(10) << setfill(' ') << right << " item: ";
  cin >> itemSelection;
  failCondition(itemSelection,0,size);

  return itemSelection;
}

int main() {

  int catSelection;
  int itemSelection;
  int catSize;
  int sweetSize;
  int savoriesSize;
  int drinkSize;
  string category[] = { "Donuts/Muffins/Pastries", "Bagels/Toast/Bread", "Coffee/Tea", "Done" };
  string sweets[] = { "Donut", "Muffin", "Pastries" };
  string savories[] = { "Bagel", "Toast", "Bread" };
  string drinks[] = { "Coffee", "Tea" };
  float sweetPrice[] = {4.00, 4.50, 5.00};
  float savoryPrice[] = {3.75, 2.25, 2.00};
  float drinkPrice[] = {3.50,2.50};
  float price = 0.0;
  float total = 0.0;
  catSize = sizeof(category)/sizeof(category[0]);
  sweetSize = sizeof(sweets)/sizeof(sweets[0]);
  savoriesSize = sizeof(savories)/sizeof(savories[0]);
  drinkSize = sizeof(drinks)/sizeof(drinks[0]);
  char order = 'y';
  vector<string> itemList;

  // welcome function
  welcome();
  // display function

  while (order == 'y') {
    itemDisplay(category,price = 0,catSize);
    catSelection = categorySelect();
    cout << catSelection << endl;
    switch (catSelection) {
      case 1:
        itemSelection = itemSelect(catSelection,sweets,sweetPrice, sweetSize);
        cout << "\nSelection: " << itemSelection << endl; 
        price = sweetPrice[itemSelection - 1];      
        total += price;
        cout << "Price: " << price << endl;
        cout << "Current total: " << total << endl;
        itemList.push_back(sweets[itemSelection - 1]);
        
        break;

      case 2:
        itemSelection = itemSelect(catSelection,savories,savoryPrice,savoriesSize);
        cout << "\nSelection: " << itemSelection << endl;
        price = savoryPrice[itemSelection - 1];      
        total += price;
        cout << "Price: " << price << endl;
        cout << "Current total: " << total << endl;
        itemList.push_back(savories[itemSelection-1]);
        break;

      case 3:
        itemSelection = itemSelect(catSelection,drinks,drinkPrice,drinkSize);
        cout << "\nSelection: " << itemSelection << endl;
        price = drinkPrice[itemSelection - 1];      
        total += price;
        cout << "Price: " << price << endl;
        cout << "Current total: " << total << endl;
        itemList.push_back(drinks[itemSelection -1]);
        break;

      case 4:
        order = 'n';
        break;
      default:
        break;
    }
  }
  cout << setw(40) << setfill('-') << "" << endl;
  cout << setfill (' ') << "Items ordered: \n" << endl;

  for (int i = 0; i < itemList.size(); i++) {
    cout << setw(40) << setfill(' ') << right << itemList[i] <<  "\n";
  }
  cout << setw(22) << setfill(' ') << "  " << setw(20) << setfill('-') << "\n" << endl;
  cout << setw(20) << setfill(' ') << left << "  Total:" << setw(16) << right << "$" << fixed << setprecision(2) << total << "\n" << endl;

  
  return 0;
}
