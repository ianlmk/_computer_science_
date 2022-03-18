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
#include <string.h>
#include <vector>

using namespace std;

int main() {

  int catSelection;
  int itemSelection;
  double price;
  double total;
  double tip = 0.0;
  string category[] = { "Donuts/Muffins/Pastries", "Bagels/Toast/Bread", "Coffee/Tea", "Done" };
  string sweets[] = { "Donut: $4.00", "Muffin: $4.50", "Pastries: $5.50" };
  string savories[] = { "Bagel: $3.75", "Toast: $2.25", "Bread $2.00" };
  string drinks[] = { "Coffee: $3.50", "Tea: $2.50" };
  string item = "";
  char addOrder = 'y';

  vector<string> itemList;


  cout << "\033[2J\033[1;1H";

  cout << "Lets get you some coffee!\n" << endl;

  cout << "What would you like today?\n\n";

do { //big loop start
    for (int x = 0; x < sizeof(category)/sizeof(category[0]); x++) {
      cout << x + 1 << ": " << category[x] << endl;
    }
    cout << setw(40) << setfill('=') << "" << endl;
    cout << setw(36) << setfill(' ') << right << " selection: ";
    cin >> catSelection;
    while (cin.fail() == true) {
      cout << "\nInvalid selection. >>cin.fail()<< Try again: ";
      cin.clear();
      cin.ignore(256,'\n');
      cin >> catSelection;
    }
    while ((catSelection  <= 0) or (catSelection >= 5)) {
      cout << "\nInvalid selection. >>numberTest failed<< Try again: ";
      cin.clear();
      cin.ignore(256,'\n');
      cin >> catSelection;
    }

    switch (catSelection) {
      case 1:
        cout  << setw(40) << setfill('=') << "\n" << endl;
        for (int x = 0; x < sizeof(sweets)/sizeof(sweets[0]); x++) {
          cout << x + 1 << ": " << sweets[x] << endl;
        }
        cout << setw(40) << setfill('=') << "" << endl;
        cout << setw(36) << setfill(' ') << right << " item: ";
        cin.ignore();
        cin >> itemSelection;
        if ((itemSelection  <= 0) or (itemSelection >= 4)) {
          cout << "\nInvalid selection. Try again: ";
          cin.clear();
          cin.ignore(256,'\n');
          cin >> catSelection;
        }
        cout << setw(40) << setfill('=') << "\n" << endl;
        if (itemSelection == 1) {
          item = sweets[0];
          price = 4.00;
        }
        if (itemSelection == 2) {
          item = sweets[1];
          price = 4.50;
        }
        if (itemSelection == 3) {
          item = sweets[2];
          price = 5.00;
        }
        total += price;
        itemList.push_back(item);
        break;
      case 2:
        cout << setw(40) << setfill('=') << "\n" << endl;
        for (int x = 0; x < sizeof(savories)/sizeof(savories[0]); x++) {
          cout << x + 1 << ": " << savories[x] << endl;
        }
        cout << setw(40) << setfill('=') << "" << endl;
        cout << setw(36) << setfill(' ') << right << " item: ";
        cin >> itemSelection;
        if ((itemSelection  <= 0) or (itemSelection >= 4)) {
          cout << "\nInvalid selection. Try again: ";
          cin.clear();
          cin.ignore(256,'\n');
          cin >> catSelection;
        }
        cout << setw(40) << setfill('=') << "\n" << endl;
        if (itemSelection == 1) {
          item = savories[0];
          price = 3.75;
        }
        if (itemSelection == 2) {
          item = savories[1];
          price = 2.25;
        }
        if (itemSelection == 3) {
          item = savories[2];
          price = 2.00;
        }
        total += price;
        itemList.push_back(item);
        break;
      case 3:
        cout << "\n" << setw(40) << setfill('=') << "" << endl;
        for  (int x = 0; x < sizeof(drinks)/sizeof(drinks[0]); x++) {
          cout << x + 1 << ": " << drinks[x] << endl;
        }
        cout << setw(40) << setfill('=') << "" << endl;
        cout << setw(36) << setfill(' ') << right << " item: ";
        cin >> itemSelection;
        if ((itemSelection  <= 0) or (itemSelection >= 3)) {
          cout << "\nInvalid selection. Try again: ";
          cin.clear();
          cin.ignore(256,'\n');
          cin >> catSelection;
        }
        cout << setw(40) << setfill('=') << "" << endl;
        if (itemSelection == 1) {
          item = drinks[0];
          price = 3.50;
        }
        if (itemSelection == 2) {
          item = drinks[1];
          price = 2.50;
        }
        total += price;
        itemList.push_back(item);
        break;
      case 4:
        addOrder = 'n';
        break;
      default:
        break;
    } //main switch end
    
    //cout << "\nItems in order: \n"; 
    //for (int i = 0; i < itemList.size(); i++) {
    //  cout << setw(20) << setfill(' ') << right << itemList[i] << "\n";
    //}
    cout << setw(35) << setfill(' ') << right << "Current total: $" << fixed << setprecision(2) << total << "" << endl;
    cout << setw(40) << setfill('_') << "" << endl;
  } while (addOrder == 'y'); // big loop end

  cout << setw(40) << setfill('-') << "" << endl;
  cout << setfill (' ') << "Items ordered: \n" << endl;
  for (int i = 0; i < itemList.size(); i++) {
    cout << setw(40) << setfill(' ') << right << itemList[i] << "\n";
  }
  cout << setw(22) << setfill(' ') << "  " << setw(20) << setfill('-') << "\n" << endl;
  cout << setw(20) << setfill(' ') << left << "  Total:" << setw(16) << right << "$" << fixed << setprecision(2) << total << "\n" << endl;

  cout << "\n    Suggested tip amounts:\n\n";
  cout << setw(20) << "10%: " << total * .10 << endl;
  cout << setw(20) << "15%: " << total * .15 << endl;
  cout << setw(20) << "20%: " << total * .20 << endl;
  cout << "\n" << setw(36) << setfill(' ') << right << "Tip: $";
  cin >> tip;
  while (tip < 0) {
    cout << "Tip cannot be negative. Please enter an amount greater than or equal to 0: ";
    cin >> tip;
  }
  cout << "\n";
  if (tip >= (total * .2)) {
    cout << setw(20) << right << "You can literally have a free coffee." << endl;
  } else if (tip > 0 && tip < (total * .2)) {
    cout << setw(20) << right << "Thanks" << endl;
  } else if (tip == 0) {
    cout << setw(20) << right << "..." << endl;
  }
  cout << "\n";
  total += tip;

  cout << setw(20) << setfill('.') << left << "  Grand total " << setw(16) << right << "$" << fixed << setprecision(2) << total << "\n" << endl;
  cout << "Have a great day!\n" << endl;
  return 0;
}
