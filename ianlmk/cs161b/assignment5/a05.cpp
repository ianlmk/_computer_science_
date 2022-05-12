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

// f(x) prototypes


int main () {
  char arr[20][10];
  int arrInt[20][10];
  char word = ' ';
 
  for (int i=0;i<20;i++) {
        cin.get(arr[i], 10);
        strncat(arr[i], &word, 1);
  }
  size_t sz=sizeof(arr)/sizeof(arr[0][0]);

  for (int x = 0; x < 20; x++) {
      cout<<arr[x];
  }

  return 0;
}
