/*GD has a coffee shop. Write a program to sell 3 different sizes of coffee (small, med and large).
Get the size from the user and quantity from the user. 
If they buy more than 5 coffees, then they get 1 coffee free.
SMALLPRICE = 1.25;
MEDPRICE = 2.50;
LRGPRICE = 3.50;
*/

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std; 

// Global constants
double const SMALLPRICE = 1.25;
double const MEDPRICE = 2.50;
const double LRGPRICE = 3.50;

//function prototypes
int readInt(string prompt);
char readOption();
double calcCost(char coffeeSize, int coffeeQty);

//main
int main() {
  char coffeeSize = ' ', answer = '\0';  
  int coffeeQty = 0;  
  double totalCost = 0;  

  cout << "Welcome to my coffee shop!!" << endl << endl;
  do
  {
  	coffeeSize = readOption();  
  	coffeeQty = readInt("Enter quantity: ");
  	// display total cost and whether free coffee was earned
  	totalCost += calcCost(coffeeSize, coffeeQty);
  	cout << fixed << setprecision(2) << "Cost of coffee is $" << totalCost << "." << endl;
  	if (coffeeQty > 6) 
  	{
  		cout << " You got one free coffee!!" << endl;
  	}
	cout << "Do you want to buy more? (y/n)";
	cin >> answer;
	answer = tolower(answer);
	while(answer != 'y' && answer != 'n')
	{
		cout << "Invalid input!! Please enter y/n!";
		cin >> answer;
	}
  }while(answer != 'n');

  cout << "Your final bill is: $" << totalCost << endl;
  cout << endl << endl << "Thank you!! " << endl; 
  return 0;
}

//function to read an int and validate it and return
int readInt(string prompt)
{
	int temp = 0;
	cout << prompt;
	cin >> temp;	
    while(!cin)
    {
      cin.clear(); // clears the error so that it can be used again
      cin.ignore(100, '\n');
      cout << "Invalid Data! Enter again!";
      cin >> temp;
    }
	return temp;
}

//function to read coffee size from the user
char readOption()
{
	char coffeeSize = '\0';
	cout << "Enter the size of the coffee (s, m, l): ";
	cin >> coffeeSize; 
	coffeeSize = tolower(coffeeSize);
	while(coffeeSize != 's' && coffeeSize != 'm' && coffeeSize != 'l')
	{
		cin.ignore(100, '\n');
		cout << "Invalid coffee size! Please enter a valid size!!" << endl;
		cout << "Enter the size of the coffee (s, m, l): ";
		cin >> coffeeSize;
		coffeeSize = tolower(coffeeSize);
	}
	return coffeeSize;
}

//function to calculate coffee cost
//takes coffee size and coffee quantity as input parameters
//returns the total cost
double calcCost(char coffeeSize, int coffeeQty)
{
	double totalCost = 0;
    if (coffeeSize == 's') 
    {
      totalCost = SMALLPRICE * coffeeQty;
      if (coffeeQty > 6) 
      {
        totalCost -= SMALLPRICE;
      }
    }
    // check for 'm'
    else if (coffeeSize == 'm') 
    {
      totalCost = MEDPRICE * coffeeQty;
      if (coffeeQty > 6)
      {
        totalCost -= MEDPRICE;
      }
    }
    // check for 'l'
    else if (coffeeSize == 'l')
    {
      totalCost = LRGPRICE * coffeeQty;
      if (coffeeQty > 6)
      {
        totalCost -= LRGPRICE;
      }
	}
	return totalCost;
}
