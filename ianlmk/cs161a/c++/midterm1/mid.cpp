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

const int NUM_PLAYERS = 3;

int main() {

  int rocks1 = 0;
  int rocks2 = 0;
  int rocks3 = 0;

  string player1 = "";
  string player2 = "";
  string player3 = "";
  string winnar = "";
  string firstLoser = "";
  string last = "";
  bool tie = false;  
  bool topTie = false;

  cout << "\033[2J\033[1;1H";

  cout << "###############################################\n"
       << "# Welcome to the Rock Collector Champoinship! #\n"
       << "###############################################\n" << endl;



  cout << "Enter the name of Player 1: ";
  getline(cin, player1);
  cout << "How many rocks did " << player1 << " collect? ";
  cin >> rocks1;
  if (rocks1 < 0) {
    rocks1 = 0;
    cout << "You entered a number less than 0. Your count has been set to 0." << endl;
  }


  cout << "\nEnter the name of Player 2: ";
  cin.ignore();
  getline(cin, player2);
  cout << "How many rocks did " << player2 << " collect? ";
  cin >> rocks2;
  if (rocks2 < 0) {
    rocks2 = 0;
    cout << "You entered a number less than 0. Your count has been set to 0." << endl;
  }

  cout << "\nEnter the name of Player 3: ";
  cin.ignore();
  getline(cin, player3);
  cout << "How many rocks did " << player3 << " collect? ";
  cin >> rocks3;
  if (rocks3 < 0) {
    rocks3 = 0;
    cout << "You entered a number less than 0. Your count has been set to 0." << endl;
  }

  double averageNumberOfRocks = static_cast<double>(rocks1 + rocks2 + rocks3) / NUM_PLAYERS;

 // if ((rocks1 == rocks2) && (rocks1 == rocks3) && (rocks2 == rocks3)) {
 //   cout << "We have ourselves a good old fashioned TIE!!\n" << endl;
 //   goto Bottom;
 // }
 


 


  if ((rocks1 > rocks2) && (rocks1 > rocks3))  {
    winnar = player1;
    if (rocks2 > rocks3) {
      firstLoser = player2;
      last = player3;
    } else if (rocks3 > rocks2) {
      firstLoser = player3;
      last = player2;
    } else if (rocks2 == rocks3){
      tie = true;
      firstLoser = player2;
      last = player3;
    }
  }
  else if ((rocks2 > rocks1) && (rocks2 > rocks3)) {
    winnar = player2;
    if (rocks1 > rocks3) {
      firstLoser = player1;
      last = player3;
    } else if (rocks3 > rocks1) {
      firstLoser = player3;
      last = player1;
    } else if (rocks3 == rocks1) {
      tie = true;
      firstLoser = player3;
      last = player1;
    }
  }
  else if ((rocks3 > rocks1) && (rocks3 > rocks2)) {
    winnar = player3;
    if (rocks1 > rocks2) {
      firstLoser = player1;
      last = player2;
    } else if (rocks2 > rocks1) {
      firstLoser = player2;
      last = player1;
    } else if (rocks1 == rocks2) {
      tie = true;
      firstLoser = player2;
      last = player1;
    }
  }
  else if ((rocks1 == rocks2) && (rocks1 > rocks3)) {
    topTie = true;
    winnar = player1;
    firstLoser = player2;
    last = player3;
  } 
  else if (( rocks1 == rocks3) && (rocks1 > rocks2)) {
    topTie = true;
    winnar = player1;
    firstLoser = player3;
    last = player2;
  } else if (( rocks2 == rocks3) && (rocks2 > rocks1)) {
    topTie = true;
    winnar = player2;
    firstLoser = player3;
    last = player1;
  } else if ((rocks1 == rocks2) && (rocks2 == rocks3)) {
    cout << "We have ourselves a good old fashioned TIE!!\n" << endl;
    goto Bottom;
  }

  if (winnar != "" && tie == false && topTie == false) {
    cout << "\n-----------------------------------------------\n" 
         << winnar << " is in first place!" << endl;
    cout << firstLoser << " is in tie place." << endl; 
    cout << last << " is in third place.\n" << endl;
  } else if (winnar != "" && tie == true) {
    cout << "\n-----------------------------------------------\n"
         << winnar << " is in first place!" << endl;
    cout << firstLoser << " and " << last << " are TIED for second place!" << endl;
  } else if (topTie == true) {
    cout << "\n-----------------------------------------------\n"
         << winnar << " and " << firstLoser << " are TIED for first plece!" << endl;
    cout << last << "is in last place." << endl;
  }
 
  Bottom:
  cout << "The average number of rocks collected by all 3 players is: " << fixed << setprecision(2) << averageNumberOfRocks << endl;
  cout << "\nCongratulations Rock Collectors!" << endl;
  return 0;
}
