//a07.h
//struct file for item type
#pragma once
#include <fstream>
#include <iostream>
#include <cstring>
#include <iomanip>

const int MAXCHAR = 25;

using namespace std;

struct item {
  char occupation[MAXCHAR];
  int employed;
  int automation;
};



