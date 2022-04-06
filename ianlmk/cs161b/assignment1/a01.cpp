/*
########################################################################################
# Author:           Ian LaMotte-Kerr
# Assignment:       Assignment 1
# Date:             $(date -j -f "%a %b %d %T %Z %Y" "`date`" "+%s")
# Description:      calculates a cell phone bill based on user plan selection and usage
# Input:            
# Output:          
# Sources:          This program is strange cause I worked at mint mobile as a site
                    reliability engineer.
########################################################################################
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#define LOG(x) std::cout << x << std::endl

int main();
void display();
char menuSelect();
double dataUse();
void billing(char,double);

int main () {
  char selection = '\0';
  double data;
  LOG("***** Welcome to Mint Mobile *****\n\nLet's calculate your monthly bill.\n");  

  selection = menuSelect();
  data = dataUse();
  billing(selection, data);
  
  LOG(selection);
  return 0;
}

void display() {
  // Display the plan menu
  std::vector<std::string> planList = {"S: 2GB $35/mo*", "M: 4GB $50/mo*", "L: 8GB $70/mo*", "U: Unlimited $75/mo"}; 
  int len = planList.size();
  for (int i = 0; i < len; i++) {
    LOG(planList[i]);
  }
  LOG("\n");

}

char menuSelect() {
  // Have user select the plan type and validate input
  int count = 0;
  char selection = '\0';
  std::string compareSelection = "smlu";
  display();
  LOG("Selection: ");
  std::cin >> selection;
  std::size_t test = compareSelection.find(tolower(selection));
  while (test == std::string::npos){
    display();
    LOG(test + " |  Selection: ");
    std::cin >> selection;
    if (count == 0) {
      continue;
    } else if (count > 0) {
      LOG("Invalid plan!\n");
    } 
    count++;
  } 

  return selection;
}

double dataUse() {
  int amountData = 0;
  LOG("How many GB of data did you use last month? ");
  std::cin >> amountData; 
  return amountData;
}

void billing(char selection, double dataUse = 0){
  double overages = dataUse * 15;
  double planCharges = 0.0;
  double total = 0.0;



}
