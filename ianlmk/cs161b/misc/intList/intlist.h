//This is a struct for an int list and its size
//
#pragma once

//constants
const int CAP = 20;

//struct definition
struct IntList {
  int list[CAP];
  int size;
};

//function prototypes
void initList(IntList &myList);
void addNum(IntList &myList, int newNum);
void insertNum(IntList &myList, int newNum, int pos);
void delNum(IntList &myList, int val);
void printList(const IntList myList);
//find a number and return its position
int srchList(const IntList myList, int num);
