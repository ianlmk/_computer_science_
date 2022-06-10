/*
###################################################################################
# Author:           Ian LaMotte-Kerr
# Assignment:       Assignment 8
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

// constants

// f(x) prototypes
void swapArgs(int *, int *);
void divideArgs(int *, int *);
void powerArgs(int *, int *);

int main () {

  int *ptrA = new int;
  int *ptrB = new int;

  cout<<"Gimme int 1: ";
  cin>>*ptrA;
  cout<<"Gimme int 2: ";
  cin>>*ptrB;
  cout<<endl;

  cout<<"Starting setup before f(x) calls:\n  int 1: "<<*ptrA<<"\n  int 2: "<<*ptrB<<endl;

  if (*ptrA == 0 && *ptrB == 0){
    cout<<"\nNo operations performed.\n Goodbye!\n"<<endl;
    exit(0);
  }

  swapArgs(ptrA,ptrB);
  cout<<"\n"<<setw(50)<<setfill('-')<<""<<endl;
  cout<<"\nAfter call to swapArgs:\n  int 1: "<<*ptrA<<"\n  int 2: "<<*ptrB<<endl;

  divideArgs(ptrA,ptrB);
  cout<<"\n"<<setw(50)<<setfill('-')<<""<<endl;
  cout<<"\nAfter call to divideArgs:\n  int 1: "<<*ptrA<<"\n  int 2: "<<*ptrB<<endl;

  powerArgs(ptrA,ptrB);
  cout<<"\n"<<setw(50)<<setfill('-')<<""<<endl;
  cout<<"\nAfter call to powerArgs:\n  int 1: "<<*ptrA<<"\n  int 2: "<<*ptrB<<endl;

  cout<<"\nGoodbye!"<<endl;

  return 0;
}

  //              name: swapArgs
  //       description: swaps the values between *ptrA and *ptrB
  //  input Parameters: *ptrA: int pointer, *ptrB: int pointer
  // output to console: none
  //            return: none
void swapArgs(int *ptrA, int *ptrB){
  int temp = *ptrA;
  *ptrA = *ptrB;
  *ptrB = temp;
}

  //              name: divideArgs
  //       description: Ron Burgundy of dividing int pointers (if you put in the int pointer numbers, it will divide them)
  //  input Parameters: *ptrA: int pointer, *ptrB: int pointer
  // output to console: none
  //            return: none
void divideArgs(int *ptrA, int *ptrB){
  int a = *ptrA;
  int b = *ptrB;

  *ptrA = a / b;
  *ptrB = a % b;
}

  //              name: powerArgs
  //       description: pointer math to raise ptrA to the power of ptrB
  //  input Parameters: *ptrA: int pointer, *ptrB: int pointer
  // output to console: none
  //            return: none
void powerArgs(int *ptrA, int *ptrB){
  int a = *ptrA;

  if (*ptrB == 0) {
    *ptrA = 1;
  } else if (*ptrB < 0) {
    for (int i = 0; i < *ptrB - 1; i++) {
      *ptrA = (1 / (*ptrA*a));
    }
  } else {
    for (int i = 0; i < *ptrB - 1; i++) {
      *ptrA *= a;
    }
  }

}
