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
#define LOG(x) std::cout << std::fixed << std::setprecision(2) << x << std::endl

int main();
void display();
char menuSelect();
double dataUse(int);
void billing(char);

int main () {
  char selection = '\0';
  double data;
  LOG("\033[2J\033[1;1H");
  LOG("***** Welcome to Mint Mobile *****\n\nLet's calculate your monthly bill.\n");  

  selection = menuSelect();
  billing(selection);
 
  LOG("\nThank you for choosing Mint Mobile.\nGoodbye!");
 
  return 0;
}

void display() {
  // Display the plan menu
  std::vector<std::string> planList = {"S: 2GB $35/mo*", "M: 4GB $50/mo*", "L: 8GB $70/mo*", "U: Unlimited $75/mo"}; 
  int len = planList.size();
  for (int i = 0; i < len; i++) {
    LOG(planList[i]);
  }
  LOG("\n*Overage charges $15 per GB\n");

}

char menuSelect() {
  // Have user select the plan type and validate input
  int count = 0;
  char selection = '\0';
  std::string compareSelection = "smlu";
  display();
  LOG("Which plan are you on? (S/M/L/U): ");
  std::cin >> selection;
  std::size_t test = compareSelection.find(tolower(selection));
  while (test == std::string::npos){
    display();
    LOG("Nope. Try again. |  Selection: ");
    std::cin >> selection;
    if (count == 0) {
      continue;
    } else if (count > 0) {
      LOG("Invalid plan!\n");
    } 
    count++;
  } 

  return tolower(selection);
}

double dataUse(int limit) {
  // calculate dataUsage
  double amountData = 0;
  do {
    std::cin.clear();
    std::cin.ignore();
    LOG("How many GB of data did you use last month? ");
    std::cin >> amountData; 
    amountData = amountData - limit;
  } while (!std::cin);
  if (amountData == static_cast<int>(amountData)) {
    return amountData * 15 ;
  } else {
    // amountData = ceil(amountData);
    amountData = static_cast<int>(((amountData * 10) / 10)) + 1;
    return amountData * 15;
  }
}

void billing(char selection){
  // logic and output billing numbers
  double data;
  double limit = 0.0;;
  double planCharges = 0.0;
  double total = 0.0;
  
  switch (selection) {
    case 's':
      planCharges = 35.00;
      limit = 2;   
      break;
    case 'm':
      planCharges = 50.00;
      limit = 4;
      break;
    case 'l':
      planCharges = 70.00;
      limit = 8;
      break;    
    case 'u':
      planCharges = 75.00;
      break;
    default:
      break;
  }
  data = dataUse(limit);

  std::cout << "\nPlan Charges: $" << std::fixed << std::setprecision(2) << planCharges << std::endl;
  std::cout << "Overage Charges: $" << std::fixed << std::setprecision(2) << data << std::endl;
  std::cout << "Total Cost: $" << std::fixed << std::setprecision(2) << planCharges + data << std::endl;

  if (selection == 'l') {
    std::cout << "\nUpgrade to Unlimited and save $" << std::fixed << std::setprecision(2) << data - 5 << std::endl;
  }
}
