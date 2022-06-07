/*
##############################################################################
# Author:           Ian LaMotte-Kerr
# Assignment:       Assignment 4
# Date:             $(date -j -f "%a %b %d %T %Z %Y" "`date`" "+%s")
# Description:      This program calculates fair for a trimet ticket and 
#                   decides if a user has earned free rides for the month.
# Input:            passType, ticketCount
# Output:           freeToRide, totalSpend, amountToFree
# Sources:          assignment4.pdf
##############################################################################
*/


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

  string noteOne = "\nRide for 2 hours and 30 minutes with each ticket.";
  string noteTwo = "\nRide free for the rest of the month after spending $100\nwith an Adult pass, or $28 with an Honored Citizen or\nYouth pass!";

  double youthPrice = 1.25;
  double adultPrice = 2.5000001;
  double seniorPrice = 1.25;
  double ticketPrice;
  double totalSpend;

  char passType;
  int ticketCount;
  bool freeRides;
  double amountToFree;

  cout << "\033[2J\033[1;1H";
  cout << "Welcome to TriMet Hop FastPass!\n\n"
       << left << setfill(' ') << setw(40) << "Fastpass Choices" << setw(8) << "Ticket $" << endl;

  cout << right << setfill('-') << setw(40) << "  " << setfill('-') <<  setw(8) << "" << endl;  

  cout << left << setfill(' ') << setw(40) << "A. Adult (ages 18-64)" << right << setw(1) << " $2.50" << endl;
  cout << left << setfill(' ') << setw(40) << "H. Honored Citizen (65+, disabilities)" << right << setw(1) << " $1.25" << endl;
  cout << left << setfill(' ') << setw(40) << "Y. Youth (ages 7-17)" << right << setw(1) << " $1.25" << endl;
  cout << left << setfill(' ') << setw(60) << noteOne << endl; 
  cout << left << setfill(' ') << setw(60) << noteTwo << endl;
  
  cout << "Enter Fastpass type (A, H, Y): " << endl;
  cin >> passType;
  switch (passType) {
    case 'A': case 'a':
      ticketPrice = adultPrice;
      break;
    case 'H': case 'h':
      ticketPrice = seniorPrice;
      break;
    case 'Y': case 'y':
      ticketPrice = youthPrice;
      break;
    default:
      cout << "Invalid Fastpass choice! Try again." << endl;
      exit(1);
      break;
  }
  
  cout << "\nEnter the number of tickets purchased this month: " << endl;
  cin >> ticketCount;

  totalSpend = ticketCount * ticketPrice;

  if ((ticketPrice < 2.00) && (totalSpend >= 28.00)) {
    freeRides = true;
  } else if ((ticketPrice >= 2.50) && (totalSpend >= 100.00)) {
    freeRides = true;
  } else {
    freeRides = false;
  }
  

  if (ticketCount == 1 ) {
    cout << "\nYou have purchased " << ticketCount << " ticket!" << endl;
  } else {
    cout << "\nYou have purchased " << ticketCount << " tickets!" << endl;
  }

  cout << "You have paid $ " << fixed << setprecision(2) << totalSpend / 1.00 << endl;

  if (freeRides == false && ticketPrice < 2.00) {
    amountToFree = 28.00 - totalSpend;
    cout << "Spend $" << amountToFree << " more to earn free rides for the rest of the month!" << endl;
  } else if (freeRides == false && ticketPrice >= 2.50) {
    amountToFree = 100 - totalSpend;                                                                           cout << "Spend $" << amountToFree << " more to earn free rides for the rest of the month!" << endl;
  } else if (freeRides == true) {                                      
    cout << "You have earned free rides for the rest of this month!" << endl;
  } else {
    cout << "something went wrong. Fix the program" << endl;
  }
  
  cout << "\nThank you for riding TriMet!\n" << endl;

  return 0;
}
