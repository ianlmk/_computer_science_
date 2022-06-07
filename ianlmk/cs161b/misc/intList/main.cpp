//This is the client or the driver file.
#include "intlist.h"
#include "tools.h"

int main() {
  IntList myList;
  initList(myList);
  int newNum = 0;
  char option;
  do {
    displayMenu();
    option = readOption();
    switch (option) {
      case 'a':
        cout << "Enter a number: ";
        cin >> newNum;
        addNum(myList, newNum);
        printList(myList);
        break;
      case 'r':
        break;
      case 'p':
        printList(myList);
        break;
      case 's':
        break;
      case 'q':
        break;
      default:
        cout << "Invalid option!" << endl;
    }
  } while (option != 'q');
  return 0;
}
