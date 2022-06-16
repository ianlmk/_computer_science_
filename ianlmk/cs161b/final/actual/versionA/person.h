//struct for PersonType
#pragma once
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

const int MAX_CHAR = 101;

struct PersonType
{
	char name[MAX_CHAR];
	char citizenship[MAX_CHAR];
	int age;
};

//function prototypes
//add your function prototype here.
