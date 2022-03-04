// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Angel Vargas and Nolan Otey
# Lab:              Discussion #4
# Date:             Feburary 6, 2022
# Description:      The program will output the change using fewest coins
# Input:            Total change as an integer
# Output:           Total change fewest coins
# Sources:          None
#******************************************************************************/

#include <iostream>

using namespace std;//Setting Different Currencies Values
const int Dollar_worth= 100; 
const int Quarter_worth= 25;
const int Dime_Worth=10;
const int Nickel_Worth=5;
const int Penny_Worth= 1;

int main() {
 int totalChange;//Declaring all variables
 int Dollar;
 int Quarter;
 int Dimes;
 int Nickels;
 int Penny;
 
 std:: cout << "Enter amount of money without a decimal" << std::endl;
 std::cin>>totalChange;

 if(totalChange==0){
 std::cout<<"No change."<<std::endl;}

 Dollar=totalChange/Dollar_worth;

 totalChange = totalChange % 100;

 Quarter =totalChange/Quarter_worth;

 totalChange = totalChange % 25;

 Dimes= totalChange/Dime_Worth;

 totalChange = totalChange % 10;

 Nickels=totalChange/ Nickel_Worth;

 totalChange = totalChange % 5;

 Penny= totalChange/ Penny_Worth;

 totalChange = totalChange % 1;


 if(Dollar==1){
   std::cout<<Dollar<<" Dollar"<<std::endl;
 }
 else if (Dollar==0)
 std::cout <<" ";
 else 
 std::cout <<Dollar<<" Dollars"<<std::endl;

 if(Quarter==1){
   std::cout<< Quarter<<" Quarter"<<std::endl;}
 else if (Quarter==0)
 std::cout <<"";
 
 else
 std::cout<<Quarter<<" Quarters"<<std::endl;

 if(Dimes==1){
   std::cout<<Dimes<<" Dime"<<std::endl;
 }
 else if (Dimes==0)
 std::cout <<"";
 else{
 std::cout<<Dimes<<" Dimes"<< std::endl;}
 
 if(Nickels==1){
   std::cout<< Nickels<<" Nickel"<< std::endl;
 }
 else if (Nickels==0)
 std::cout <<"";
 else{
 std::cout<<Nickels<<" Nickels"<< std::endl;}

 if(Penny==1){
   std::cout<<Penny <<" Penny"<<std::endl;
 }
 else if (Penny==0)
 std::cout <<"";
 else {
 std::cout << Penny<< " Pennies"<< std::endl;}
 
 
 
 

  return 0;
}
