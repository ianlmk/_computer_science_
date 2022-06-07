//This program has a list of integers and your job is to fill in the function to remove a number at the given position
#include <iostream>
using namespace std;

void delItem(int list[], int& count, int delIndex);

int main() {
	const int NUM_VALS = 10;
	int list[NUM_VALS] = { 7, 12, 34, 15, 9, 10, 3, 0, 0, 0};
	int i = 0, count = 7;
	cout << "List before remove: " << endl;
	for (i = 0; i < count; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
	delItem(list, count, 3);
	delItem(list, count, 5);
	cout << "List after 2 removes: " << endl;
	for (i = 0; i < count; i++)
	{
		cout << list[i] << " ";
	}

	return 0;
}

void delItem(int list[], int& count, int delIndex) {

  for (int i = 0; i < count; i++) {
    if (i == delIndex){
      for (int x = i; x < count; x++) {
        list[x] = list[x+1];
      }
      count--;
    }
  }

}
