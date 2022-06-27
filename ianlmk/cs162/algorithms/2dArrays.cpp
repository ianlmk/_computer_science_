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
  int arr[MAX][MAX] = { };
  srand(time(0));

  cout << "Enter a number count to generate and sort. (20-50 is recommended): ";
  cin >> n;
  

  for (int i = 0; i < n; i++) {
    for (int x = 0; x < n; x++) {
      arr[i][x] = rand() % 1000;
      cout<<arr[i][x]<<" ";
    }
    cout<<endl;
  }
  cout<<"\n"<<endl;


  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
          if (arr[i][j] < arr[x][y]) {
            int temp = arr[i][j];
            arr[i][j] = arr[x][y];
            arr[x][y] = temp;
          }
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int x = 0; x < n; x++) {
      cout<<arr[i][x]<<" ";
    }
    cout<<endl;
  }
  cout<<"\n"<<endl;

  return 0;
}



