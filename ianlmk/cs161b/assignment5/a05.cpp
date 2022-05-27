/*
###################################################################################
# Author:           Ian LaMotte-Kerr
# Assignment:       Assignment 5
# Date:             $(date -j -f "%a %b %d %T %Z %Y" "`date`" "+%s")
# Description:      Reads in words, then outputs the words and their counts
# Input:            
# Output:          
# Sources:          
###################################################################################
*/

#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdio.h>
#include <cmath>

using namespace std;

// constants
const int rows = 20;
const int maxChars = 50;


// f(x) prototypes
void cStringCounter(char chArr[][maxChars], int chSize,int count[]);


  //              name: main
  //       description: main function that calls to the counter/deleter
  //  input Parameters: none
  // output to console: welcome, beforeList, afterList
  //            return: none
int main () {

  char chArr[rows][maxChars] = {0};
  int count[rows] = {0};
  
  size_t chSize;
  int intSize;
  cout<<"Lets count some strings"<<endl;

  cin>>chSize;
  cin.ignore();
  for (int i = 0; i < chSize; i++) {
    cin >> chArr[i];
    count[i]++;
  } 

  cout<<"\nBefore list: "<<endl;
  for (int i = 0; i < chSize; i++) {
    cout<<i<<": "<<chArr[i]<<" "<<count[i]<<endl;
  }
 
 
  cStringCounter(chArr,chSize,count);

  cout<<"\nAfter list: "<<endl;
  for (int i = 0; i < chSize; i++) {
    if (chArr[i][0] != '\0') {
      cout<<i<<": "<<chArr[i]<<" "<<count[i]<<endl;
    }
  }

  cout<<endl;

  return 0;
}

 
  //              name: cStringCounter
  //       description: counts strings from input and dedupes the populated array
  //  input Parameters: chArr[][],chSize,count[]
  // output to console: none unless debugging
  //            return: array reference: container shifts/updates on chArr and count
void cStringCounter(char chArr[][maxChars], int chSize, int count[]) {

  for (int i = 0; i < chSize; i++) {
    for (int j = i+1; j < chSize; j++) {
      if(strcmp(chArr[i],chArr[j]) == 0) {
        count[i]++;
        chArr[j][0] = '\0'; 
        for( int x = j; x < chSize-1; x++) {
          strcpy(chArr[x],chArr[x+1]);
        }
        chArr[chSize][0] = '\0'; 
        chSize--;
        i--;
        //cout<<"\nIth iteration #: "<<i<<" | Jth iteration #: "<<j<<endl;
        //for (int x = 0; x < chSize; x++) {
        //  cout<<x<<": "<<chArr[x]<<" "<<count[x]<<endl;
        //} cout<<endl;
      }
    }
  }
}
