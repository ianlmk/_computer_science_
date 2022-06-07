//This is the header file for chicks struct
#pragma once
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

//constants
const int MAXCHAR = 101;
const int CAP = 20;

//defintion of a nested struct
struct Chickprop
{
    int age[4];
    int weight;
 };
//definition of main ChickType struct
struct ChickType
{
    char breed[MAXCHAR];
    Chickprop aProp;
    double feed;
    char eggColor[MAXCHAR];
};

//function prototypes
void setValues(ChickType &aChick, char newBreed[MAXCHAR], int newAge, int newWt, double newFd, char newColor[MAXCHAR]);
void printAChick(ChickType aChick);
void readInput(ChickType chicks[], int &size);
void outputData(const ChickType chicks[], const int size);
void searchData(const ChickType chicks[], int size, ChickType returnList[], int &nums);
