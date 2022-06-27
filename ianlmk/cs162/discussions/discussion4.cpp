
/******************************************************************************
# Author:           Ian LaMotte-Kerr
# Lab:              Discussion 4
# Date:             today
# Description:      
# Input:            
# Output:           
# Sources:          
#******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

const int MAXCHAR = 5;

int main() {

  srand(time(0));
  int randfill; 
  int rarr[MAXCHAR] = {0};
  int arr[MAXCHAR] = {0};
  bool match = false;
  
  cout<<"gonna need some ints please. 1 at a time, press enter between each number (0-9): \n";
  
  for (int i = 0;i < MAXCHAR; i++) {
    int num;
    cout<<"index: "<<i<<" : ";
    cin>>num;
    if (num > 0 and num < 10 ) {
    arr[i] = num;
    } else {
      cout<<"yeah, thats not gonna work. Try again: ";
      i--;
    }
  }
  cout<<setw(25)<<setfill('_')<<"\n";
  cout<<"\nYour picks: ";  
  for (int i = 0; i < MAXCHAR; i++) {
    cout<<arr[i]<<" ";
    randfill = rand() % 10;
    rarr[i] = randfill;
  }

  cout<<"\nRand picks: ";
  for (int i = 0; i < MAXCHAR; i++) {
    cout<<rarr[i]<<" ";
  }

  cout<<endl;
  cout<<"\nLets compare: "<<endl;
  cout<<setw(25)<<setfill('_')<<"\n";

  for (int i = 0; i < MAXCHAR; i++) {
    if (arr[i] == rarr[i]) {
      cout<<"index "<<i<<" match: "<<arr[i]<<" | "<<rarr[i]<<endl;
      match = true; 
    } else {
      match = false;
      cout<<"index "<<i<<" knope: "<<arr[i]<<" | "<<rarr[i]<<endl;
      cout<<"\nUnfortunately, you did not win. Better luck next time.\n";
      break;
    }
  }
  cout<<endl;
  
  return 0;
}

