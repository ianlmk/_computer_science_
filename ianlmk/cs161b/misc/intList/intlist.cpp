//Implementation file for IntList

#include "intlist.h"
#include "tools.h"

//init the list
void initList(IntList &myList) {
  for(int i = 0; i < CAP; i++) {
    myList.list[i] = 0;
  }
  myList.size = 0;
}

//add number to the list
void addNum(IntList &myList, int newNum) {
  int pos = 0, i = 0;
  if(myList.size == CAP) {
    cout << "List full!" << endl;
    return;
  } else if (myList.size == 0) {
    myList.list[myList.size++] = newNum;
    return;
  } else {
    for(i = 0; i < myList.size; i++) {
      if(newNum < myList.list[i]) {
        break;
      }
    }
    pos = i;
    insertNum(myList, newNum, pos);
  }
}

void insertNum(IntList &myList, int newNum, int pos) {
  for(int i = myList.size; i > pos; i--) {
    myList.list[i] = myList.list[i-1];
  }
  myList.list[pos] = newNum;
  myList.size++;
} 

void printList(IntList myList) {
  cout << "\nYour list: \n";
  for(int i = 0; i < myList.size; i++) {
    cout << myList.list[i] << endl;
  }
}
	
