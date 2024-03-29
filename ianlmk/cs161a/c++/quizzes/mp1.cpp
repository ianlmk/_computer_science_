/*
##############################################################################
# Author:           Ian LaMotte-Kerr
# Assignment:       midterm practice quiz
# Date:             $(date -j -f "%a %b %d %T %Z %Y" "`date`" "+%s")
# Description:      Just rock paper scissors vs a computer
# Input:            name, r/p/s selection
# Output:           systemSelection, winner
# Sources:          discussion 3 replit code
##############################################################################
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  // seed rand
  srand(time(0));
  // instantiate variables
  string name = "";
  char playerHand;
  int systemHand;
  int i = 0;
  // clear screen
  cout << "\033[2J\033[1;1H";
  // welcome message
  cout << "#############################################\n"
       << "# Let's play Rock(r), Paper(p), Scissors(s) #\n" 
       << "#############################################\n" << endl;
  cout << "Name please: " << endl;
  // get name, spaces allowed
  getline(cin, name);
  
  // setup input check loop marker
  top:
    cout << "What's your play " << name << "?\n    (R)ock\n    (P)aper\n    (S)cissors\n\n    : ";
    cin >> playerHand;
    cout << "_________________" << endl;
    // conditions for failure, give the user 1 chance to correct, then exit on failure 2. 
    if ((playerHand != 'r') && (playerHand != 'R') && (playerHand != 'p') && (playerHand != 'P') && (playerHand != 's') && (playerHand != 'S')) {
      if (i < 3) {
        i++;
        if (i == 2) {
          cout << "Your play must be \"r\", \"p\", or \"s\". Please start over.\n";
          exit(0);
        }
        cout << "Your play must be \"r\", \"p\", or \"s\". Try again.\n" << endl;
        goto top;
      }
    }
  // assign systemHand to a random number between 0 and 3  
  systemHand = rand() % 3;
  // r = 0
  // p = 1
  // s = 2

  // Compare playerHand and systemHand, then output the result messages. 
  switch (playerHand) {
    case 'r': case 'R':
      if (systemHand == 0) {
        cout << "Computer plays:\n\n    (R)ock\n"
             << "\nIt's a TIE!\n" << endl;
      } else if (systemHand == 1) {
        cout << "Computer plays:\n\n    (P)aper\n"
             << "\nThe Computer won!\n" << endl;
      } else if (systemHand == 2) {
        cout << "\nComputer plays:\n\n    (S)cissors\n\n"
             << name << " Wins!\n" << endl;
      }
      break;
    case 'p': case 'P':
      if (systemHand == 1) {
        cout << "Computer plays:\n\n    (P)aper\n"
             << "\nIt's a TIE!\n" << endl;
      } else if (systemHand == 2) {
        cout << "Computer plays:\n\n    (S)cissors\n"
             << "\nThe Computer won!\n" << endl;
      } else if (systemHand == 0) {
        cout << "\nComputer plays:\n\n    (R)ock\n\n"
             << name << " Wins!\n" << endl;
      }
      break;
    case 's': case 'S':
      if (systemHand == 2) {
        cout << "Computer plays:\n\n    (S)cissors\n"
             << "\nIt's a TIE!\n" << endl;
      } else if (systemHand == 0) {
        cout << "Computer plays:\n\n    (R)ock\n"
             << "\nThe Computer won!\n" << endl;
      } else if (systemHand == 1) {
        cout << "\nComputer plays:\n\n    (P)aper\n\n"
             << name << " Wins!\n" << endl;
      }
      break;
    default:
      break;
  }
  // goodbye message
  cout << "Thanks for playing!" << endl;

  return 0;
}
