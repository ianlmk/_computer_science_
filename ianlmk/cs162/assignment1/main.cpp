/*
########################################################################################
# Author:           Ian LaMotte-Kerr
# Assignment:       Assignment 1
# Date:             $(date -j -f "%a %b %d %T %Z %Y" "`date`" "+%s")
# Description:      
# Input:            
# Output:          
# Sources:          https://docs.google.com/document/d/1mFnt-mmAtxRxJL7Z8QrVBRcYx1pgisIMPlTPAzspyrU/edit
########################################################################################
*/

#include <iostream>
#include <iomanip>
#include <string>
#define LOG(x) std::cout << std::fixed << std::setprecision(2) << x << std::endl

int main () {
  LOG("\033[2J\033[1;1H");
 
  return 0;
}

