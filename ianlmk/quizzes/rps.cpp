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
  srand(time(0));
  string name = "";
  char playerHand;
  int systemHand;
  int i = 0;


  cout << "\033[2J\033[1;1H";

  cout << "Let's play Rock(r), Paper(p), Scissors(s)" << endl;
  cout << "Name please: " << endl;
  getline(cin, name);
  
  top:
    cout << "What's your play " << name << "\nRock(r), Paper(p), or Scissors(s): ";
    cin >> playerHand;
    
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
    
  systemHand = rand() % 3;
  // r = 0
  // p = 1
  // s = 2

  switch (playerHand) {
    case 'r': case 'R':
      if (systemHand == 0) {
        cout << "Computer plays R(ock)\n"         
             << "\nIt's a TIE!\n" << endl;
      } else if (systemHand == 1) {
        cout << "Computer plays P(aper)\n"
             << "\nThe Computer won!\n" << endl;
      } else if (systemHand == 2) {
        cout << "\nComputer plays S(cissors)\n"
             << name << " Wins!\n" << endl;
      }
      break;
    case 'p': case 'P':
      if (systemHand == 1) {
        cout << "Computer plays P(aper)\n"
             << "\nIt's a TIE!\n" << endl;
      } else if (systemHand == 2) {
        cout << "Computer plays S(cissors)\n"
             << "\nThe Computer won!\n" << endl;
      } else if (systemHand == 0) {
        cout << "\nComputer plays R(ock)\n"
             << name << " Wins!\n" << endl;
      }
      break;
    case 's': case 'S':
      if (systemHand == 2) {
        cout << "Computer plays S(cissors)\n"
             << "\nIt's a TIE!\n" << endl;
      } else if (systemHand == 0) {
        cout << "Computer plays R(ock)\n"
             << "\nThe Computer won!\n" << endl;
      } else if (systemHand == 1) {
        cout << "\nComputer plays P(aper)\n"
             << name << " Wins!\n" << endl;
      }
      break;
    default:
      break;
  }
  cout << "Thanks for playing!" << endl;

  return 0;
}
