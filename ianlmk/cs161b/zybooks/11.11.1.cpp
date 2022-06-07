//This program has a list of integers and your job is to fill in the function to insert a number at the given position
//You do not need to check for a valid position, meaning the value of pos in the insert function will be within the capacity 
//and size of the array.

#include <iostream>
using namespace std;

void insertItem(int list[], int& count, int val, int pos);

int main() {
  const int NUM_VALS = 10;
  int list[NUM_VALS] = { 7, 12, 34, 15, 9, 10, 3, 0, 0, 0};
  int i = 0, count = 7;
  cout << "List before inserts: " << endl;
  for (i = 0; i < count; i++) {
    cout << list[i] << " ";
  }
  cout << endl;
  insertItem(list, count, 3, 0);
  insertItem(list, count, 4, 1);
  cout << "List after 2 inserts: " << endl;
  for (i = 0; i < count; i++) {
    cout << list[i] << " ";
  }
  return 0;
}

void insertItem(int list[], int& count, int val, int pos) {
	/* Your solution goes here  */
	/*Use a for loop to shift items to remove the item in index delIndex*/
  for (int i = 0; i < count; i++) {
    if (i == pos) {
      count++;
      for (int x = count; x >= pos; x--) {
        list[x] = list[x - 1];
        for (int k = 0; k < count; k++) {
          cout << list[k]<<" ";
        } cout<<endl;
      }
      list[pos] = val;
      i++;
    }
  }
}
