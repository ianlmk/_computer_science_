/*
###################################################################################
# Author:           Ian LaMotte-Kerr
# Assignment:       Assignment 2
# Date:             $(date -j -f "%a %b %d %T %Z %Y" "`date`" "+%s")
# Description:
# Input:            
# Output:          
# Sources:          
###################################################################################
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

// prototypes

void welcome();
void menu();
char readOption(string);
void executeOption(char);
double simpleInterest(double,double,double);
double compoundInterest(double,double,double,int);
double input(string);


int main () {
  cout << "\033[2J\033[1;1H";
  char selection = '\0';
  string option = "";

  welcome();
  
  do {
    menu();
    option = "selection: "; 
    selection = readOption(option);
    cout << "\n";
    executeOption(selection);
  } while (selection == '1' or selection =='2' or selection == '3');

  return 0;
}

void welcome() {
  // description:        clear screen and write "Welcome" to stdout
  // input Parameters:   n/a
  // output to console:  "Welcome"
  // return:             n/a
  cout << setw(60) << setfill('#') << "\n"; 
  cout << setw(18) << setfill(' ') << left << "#" << right << "Lets count some MONEY!!" << setw(18) << right << "#" << endl;
  cout << setw(60) << setfill('#') << "\n" << setfill (' '); 
}

void menu() {
  // description:        menu print function
  // input Parameters:   n/a
  // output to console:  menu text
  // return:             n/a

  const char *arr[3] = {"Calculate Simple Interest","Calculate Compound Interest","Quit"}; 
  cout << "What would you like to do today?" << endl;
  for (int i=0; i < 3; i++) {
    cout << setw(10) << right << i + 1 << ". " << arr[i] << endl;
  }
}

char readOption(string option) {
  // description:        accepts and validates menu selection
  // input Parameters:   n/a
  // output to console:  "select <option>: "
  // return:             selection of menu char
  char selection = '\0';

  cout << option;
  cin >> selection;
  while (selection != '1' and selection != '2' and selection != '3') {
    cin.ignore();
    cin.clear();
    cout << "\nSadly, that is not an acceptable selection. Try again." << endl;
    cout << option;
    cin >> selection;
  }

  return selection;
}

void executeOption(char selection) {
  // description:        executes the math on the selected option
  // input Parameters:   selection from readOption to determine which math to perform
  // output to console:  
  // return:             n/a
  double totals = 0.0;
  double principal = 0.0;
  double rate = 0.0;
  double years = 0.0;
  int periodCount;

  switch (selection) {
    case '1':
      principal = input("Enter the principal amount in dollars: $");
      rate = input("Enter the interest rate (ex, for 3.75\% enter: 3.75): ");      
      rate = rate / 100;
      years = input("Enter the number of years: ");
      totals = simpleInterest(principal,years,rate);
      break;
    case '2':
      principal = input("Enter the principal amount in dollars: $");
      rate = input("Enter the interest rate (ex, for 3.75% enter: 3.75): ");
      rate = rate / 100;
      years = input("Enter the number of years: ");
      periodCount = input("Enter the number of times to compound: "); 
      totals = compoundInterest(principal,years,rate,periodCount);
      break;
    case '3':
      cout << "Thanks for banking with us. Come again!" << endl;
      cout << setw(60) << setfill('#') << "\n"; 
      exit(0);
    default:
      break;
  }
    cout << "\nInterest Accrued: " << totals - principal << endl;
    cout << "Total Accrued Amount (principal + interest): " << totals;
    cout << "\n" << setw(60) << setfill('-') << "\n" << setfill(' ') << "\n"; 
   
}

double input(string saySomething) {
  // description:        double input acceptance and type check function > 0
  // input Parameters:   string: description of var to accept and check
  // output to console:  n/a
  // return:             double: greater than zero. 
  double var;
  do {
    cin.clear();
    cin.ignore();
    cout << saySomething;
    cin >> var;
    if (var < 0) {
      cout << "you entered a value less than zero. Please retry." << endl;
    }
  } while (!cin or var < 0);

  return var;
}

double simpleInterest(double principal, double years, double rate) {
  // description:        accept var values and calculates simple interest, then returns the calculation
  // input Parameters:   doubles-[principal, rate, years]
  // output to console:  n/a
  // return:             total: calculated interest + principal
  double total = 0.0;
  total = principal * (1 + (rate * years));
  return total;
}

double compoundInterest(double principal, double years, double rate, int periodCount) {
  double total = 0.0;
  total = principal * pow((1 + (rate / periodCount)),(periodCount * years));
  return total;
}

