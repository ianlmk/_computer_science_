/*
written by:     Ian LaMotte-Kerr
purpose:        This algorithm searches an int array for the lowest value, 
                places that value at the start of the array and repeats till done. 


*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <array>
#define MAX 100

using namespace std;

// prototypes
void swap(int [], int, int);
void selectSort(int [], int);
int smallest(int [],int,int);
void display (int [],int);

int main() {
  int size;

  int n;
  int arr[MAX] = { };
  srand(time(0));

  cout << "Enter a number: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    arr[i] = rand() % 1000;
  }

  //sleep_for(10ns);
  //sleep_until(system_clock::now() + 10000000ns);
  for (int x : arr ) {
    cout << static_cast<int>(x) << " ";
  }

  size = sizeof(arr)/sizeof(int);
  selectSort(arr,size);

  cout << "\n";

  return 0;
}

void swap(int arr[], int x, int y) {
  // description:        performs the min to start swap action
  // input Parameters:   arr: int array, x: int value for index 1 of arr, y: int value for index 2 of array
  // output to console:  n/a
  // return:             n/a
  int temp = arr[x];
  arr[x] = arr[y];
  arr[y] = temp;
}

void selectSort(int arr[], int sizeArr) {
  // description:        meat and potatoes. iterates through the array,
  //                     finds the smallest number, and swaps it to the front
  // input Parameters:   arr: int array, sizeArr: size of the array
  // output to console:  n/a
  // return:             n/a

  int i = 0;
  while (i < sizeArr - 1) {
    int j = smallest(arr, i, sizeArr - 1);
    swap(arr, i, j);
    i++;
    for (int x = 0; x < sizeArr; i++){
      cout << arr[x] << " ";
    }
    cout << "\n";
  }
}

int smallest(int arr[], int start, int end) {
  // description:         
  // input Parameters:   <
  // output to console:  <
  // return:             <

  int i = start;
  int j = i;
  while (i <= end) {
    if (arr[i] < arr[j]) {
      j = i;
    }
    i + 1;
  } 
  return j;
}

void display(int arr[], int sizeArr) {
  for (int i = 0; i < sizeArr; i++) {
    cout << arr[i] << " ";
  }
 cout << endl;
}
