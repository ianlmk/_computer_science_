//# Author:           Ian LaMotte-Kerr
//# Assignment:       Assignment 7 header file
#pragma once

#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>

using namespace std;

//constant for number of items
const int ITEMS = 25;
//constant for number of characters
const int MAXCHAR = 20;

// struct
// format: 
 struct item {
     char occupation[MAXCHAR];
     int employed;
     int automation;
   };


//function prototypes
bool openFile(ifstream &inFile);
int loadData(ifstream &inFile);
void printData(int i);
void findLow(int rows, char occupationl[], double &lowPercent);
void findHigh(int rows, char occupationh[], double &highPercent);

