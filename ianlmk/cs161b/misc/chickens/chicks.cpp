//This file builds a struct for chicks
//And has some function implementations

#include <iostream>
using namespace std;

//constants
const int MAXCHAR = 101;

//defintion of a nested struct


struct Chickprop {
  int age;
  int weight;
}; 

//definition of main ChickType struct


struct ChickType {
  char breed[MAXCHAR];
  Chickprop aProp;
  double feed;
  char eggColor[MAXCHAR];
};


//function prototypes
void readInput(ChickType &aChick);
void outputData(ChickType aChick);

//main
int main() {
  ChickType aChick;
  readInput(aChick);
  outputData(aChick);
  return 0;
}

//readInput
void readInput(ChickType &aChick) {
  cout << "Enter the breed: ";
  cin.getline(aChick.breed, MAXCHAR);
  cout << "Enter age: ";
  cin >> aChick.aProp.age;
  cout << "Enter weight: ";
  cin >> aChick.aProp.weight;
  cout << "Enter feed amount: ";
  cin >> aChick.feed;
  cin.ignore(100, '\n');
  cout << "Enter egg color: ";
  cin.getline(aChick.eggColor, MAXCHAR);
}
	
//output data
void outputData(ChickType aChick)
{
	cout << aChick.breed << ";" << aChick.aProp.age << ";" << aChick.aProp.weight
		 << ";" << aChick.feed << ";" << aChick.eggColor << endl;
}






