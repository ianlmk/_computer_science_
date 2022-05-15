/*
###################################################################################
# Author:           Ian LaMotte-Kerr
# Assignment:       Assignment 3
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

// f(x) prototypes
void welcome();
void menu(char& select);
char readOptionCH();
int readOptionINT();
void userInput(char& clubType, int& months, int& sessions);
void calcCost(char clubType, int months, int sessions);

// constants
const double SPORT_MEM = 20.0;
const double ULTRA_MEM = 30.0;
const double SESH = 10.0;
const double YEAR_DISCOUNT = .90; 
const double SESH_DISCOUNT = .80; 

int main () {
  char select = ' ';
  char clubType = ' ';
  int months = 0;
  int sessions = 0;


  welcome();
  do {
    menu(select);
    if (tolower(select) == 'c') {
      userInput(clubType,months,sessions);
      calcCost(clubType,months,sessions);
    } else if (tolower(select) == 'q') {
      cout<<"Thanks for poking at my program!\n"<<endl;
      exit(0);
    } else {
      cout<<"Sorry, that just isn't an option. Have a great day!"<<endl;
      exit(0);
    }
  } while (select == 'c'); 
  return 0;
}

  // name:               welcome()
  // description:        prints a welcome message
  // input Parameters:   na
  // output to console:  "Welcome message"
  // return:             na
void welcome() {
  cout << "\033[2J\033[1;1H";
  cout<<"Welcome to the assignment3 gym membership program\n"<<endl;
  cout<<"Costs for becoming a member are as follows:\n"<<endl;
  cout<<"        Sports Club:"<< setw(20)<< setfill(' ')<<right<<"$20.00"<<endl;
  cout<<"    UltraSport Club:"<< setw(20)<< setfill(' ')<<right<<"$30.00"<<"\n"<<endl;
  cout<<"**Prepaid annual memberships get 10% off the total**\n"<<endl;
  cout<<"Personal training is $10.00 per session\n"<<endl;
  cout<<"**Prepaid blocks of personal training sessions (5 minimum) get 20% off**\n"<<endl;
}

  // name:               menu()
  // description:        prints a menu
  // input Parameters:   
  // output to console:  menu options
  // return:             na
void menu(char& select) {
  cout<<"Please pick an option:\n"<<endl;
  cout<<"\n    (C/c) Calculate membership costs"<<endl;
  cout<<"    (Q/q) quit this program.\n"<<endl;
  //cout<<select;
  cout<<">> ";
  select = readOptionCH();
}

  // name:               readOptionsCH()
  // description:        accept a char and return it to the calling f(x)
  // input Parameters:   selection
  // output to console:  na
  // return:             selection
char readOptionCH() {
  char selection = ' ';
  cin>>selection;
  //cout<<"\nCHAR selection = "<<selection<<endl;
  return selection;
}


  // name:               readOptionsINT()
  // description:        accept an int and return it to the calling f(x)
  // input Parameters:   selection
  // output to console:  na
  // return:             selection
int readOptionINT() {
  int selection = ' ';
  cin>>selection;
  //cout<<"\nINT selection = "<<selection<<endl;
  return selection;
}
  // name:               <
  // description:        <
  // input Parameters:   <
  // output to console:  <
  // return:             <
void userInput(char& clubType, int& months, int& sessions) {
  cout<<"\nWould you prefer (s)port or (u)ltraSport? ";
  do {
    clubType = readOptionCH();
    if (cin.fail() or (clubType != 's' and clubType != 'u')) {
      cout<<"Invalid memebership type. Try again: ";
    }
  } while (clubType != 's' and clubType != 'u');

  cout<<"For how many months would you like to pay for? ";
  do {
    months = readOptionINT();
    if (cin.fail() or months < 0) {
      cout<<"Invalid number of months. Try again: ";
    }
  } while (cin.fail() or months < 0);

  cout<<"How many personal training sessions do you want? ";
  do {
    sessions=readOptionINT();
    if (cin.fail() or sessions < 0) {
      cout<<"Invalid number of sessions. Try again: ";
    }
  } while (cin.fail() or sessions < 0);

}

  // name:               <
  // description:        <
  // input Parameters:   <
  // output to console:  <
  // return:             <
void calcCost(char clubType, int months, int sessions) {
  double session_cost = 0.0;
  double total = 0.0;

  if (clubType == 'u') {
    total = months * ULTRA_MEM;
    cout<<setw(50)<<setfill(' ')<<left<<fixed<<setprecision(2)<<"Your ULTRASPORTS membership cost is: "<<right<<"$"<<total<<endl;
  } else if (clubType == 's') {
    total = months * SPORT_MEM;
    cout<<setw(50)<<setfill(' ')<<left<<fixed<<setprecision(2)<<"Your SPORTS membership cost is: "<<right<<"$"<<total<<endl;
  }
  if (months > 11) {
    total *= YEAR_DISCOUNT;
    cout<<setw(50)<<setfill(' ')<<left<<fixed<<setprecision(2)<<"With the annual discount, the total is: "<<right<<"$"<<total<<endl;
  }  


  session_cost = SESH * sessions;
  if (sessions < 5) {\
    cout<<fixed<<setprecision(2)<<"Your personal training cost for "<<sessions<<setw(17)<<setfill(' ')<<left<<" sessions is: "<<right<<"$"<<session_cost<<endl;
  }
  if (sessions > 4) {
    session_cost *= SESH_DISCOUNT;
    cout<<fixed<<setprecision(2)<<"Your personal training cost for "<<sessions<<setw(17)<<setfill(' ')<<left<<" sessions is: "<<right<<"$"<<session_cost<<endl;
  }

  total += session_cost;
  cout<<setw(50)<<setfill(' ')<<left<<fixed<<setprecision(2)<<"That brings your total membership cost today to: "<<right<<"$"<<total<<endl;
}
