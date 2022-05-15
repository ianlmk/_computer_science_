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


  string words = "Hey Hi Hey Priya How are you Priya";
  char arr[10][20];
 
  for (int x = 0; x< sizeof(words)/sizeof(words.at(0)); x++) {
    for(int i = 0;i< sizeof(words)/sizeof(words.at(0)); i++) {
      if (words[i] != ' ') {
        arr[x][i] = words[i];
      } else if (words[i] == ' ') {
        continue;
      }
    }
  }

  cout<<arr<<endl; 

  return 0;
}
