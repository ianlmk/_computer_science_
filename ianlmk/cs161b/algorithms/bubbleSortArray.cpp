#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
#define MAX 100

using namespace std;

int main(){
 
  using namespace std::this_thread; // sleep_for, sleep_until
  using namespace std::chrono; // nanoseconds, system_clock, seconds

  int n;
  int arr[MAX] = { };
  srand(time(0));

  cout << "Enter a number: ";
  cin >> n;
  

  for (int i = 0; i < n; i++) {
    arr[i] = rand() % 1000;
  }

//  for (int i = 0; i < n; i++) {
//    cout << arr[i] << " ";
//  }
//  cout << endl;


  // SORTING AN ARRAY
  // using i as the primary index and j as the secondary / moving index
  // compare arr[i] to arr[i+1] and if arr [i+1] is smaller, 
  // swap it to the reference arr[i], 
  // and then run through the indeces again.
  
  for (int i = 0; i < n; i++){
    for (int j = i + 1; j < n; j++) {


      // can sort in descending order by switching the <> comparators. 
      if (arr[j]<arr[i]) {
        // assign a temp into to the value of arr[i]
        int temp = arr[i];
        // assign arr[i] to arr[j] (j is just i + 1) to start the swap
        arr[i] = arr[j];
        // assign arr[j] to arr[i] to complete the index swap 
        arr[j] = temp;
      
        sleep_for(10ns);
        sleep_until(system_clock::now() + 10000000ns);
        for (int x = 0; x < n; x++) {
          cout << arr[x] << " ";
        }
        cout << endl;
      }
    }
  }


  return 0;
}
