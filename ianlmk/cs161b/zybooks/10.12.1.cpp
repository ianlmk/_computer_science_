//This program is from zylab 10.12
//
#include <iostream>
#include <cmath>

using namespace std;

//constants
const double AREAPERGALLON = 110;
const int HRSPERGALLON = 8;
const double LABORCHG = 35.00;
const int MINDIM = 5;
const int MINPRICE = 10;

//function prototypes
double getPaintPrice();
double readDouble(string prompt);
void getWallDimensions(double& length, double& width, double& height);
double sqftCalc(double,double,double);
void totalGallons(double, int&);

//main
int main() {
  double paintPrice = 0;
  double length = 0, width = 0, height = 0;
  double sqft = 0;
  int numGallons = 0;
  paintPrice = getPaintPrice();
  cout << paintPrice << endl;
  getWallDimensions(length, width, height);
  cout << "l: " << length << " w: " << width << " h: " << height << endl;
  sqft = sqftCalc(length, width, height); 
  cout << "sqft: " << sqft << endl;
  totalGallons(sqft,numGallons);      
  cout << "numGallons: " << numGallons << endl;
  getLaborHours(area,laborHours);

  return 0;
}

//add function comments
double getPaintPrice() {
  double paintPrice = 0;
  paintPrice = readDouble("Enter cost of paint per gallon: ");
  while(paintPrice < 10) {
    cout << "Invalid price!" << endl;
    paintPrice = readDouble("Enter cost of paint per gallon: ");
  }
  return paintPrice;
}


//Name:   readDouble(string prompt)
//Desc:   This function reads an int, validates and returns it
//input:  None
//output: Maybe error message
//return: int tempVar
double readDouble(string prompt) {
  double tempVar = 0;
  cout << prompt;
  cin >> tempVar;
  while(!cin) {
    cout << "Invalid input! Please try again!!" << endl;
    cin.clear();
    cin.ignore(100, '\n');
    cin >> tempVar;
  }
  cin.ignore(10, '\n');
  return tempVar;
}

void getWallDimensions(double &length, double &width, double &height) {
  length = readDouble("Enter length of the room: ");
  width = readDouble("Enter the width of the room: ");
  height = readDouble("Enter the height of the room: ");
}

double sqftCalc(double length, double width, double height) {
  double area = 0.0;
  area = 2 * (( width * height ) + ( length * height ));  
  return area;
}

void totalGallons(double sqft, int& numGallons) {
  double area;
  numGallons = ceil(sqft / 110);
}

void getLaborHours(double sqft, int &laborHours) {
  laborHours = ceil(sqft / AREAPERGALLON * HOURSPERGALLON);
}

void cost(int numGallons, double paintPrice, laborHours) {

}

