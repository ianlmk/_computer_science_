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
  

  for (int x = 0; x < n; x++) {
    for (int y = 0; y < n; y++) {
      for (int z = 0; z < n; z++) {
        arr[x][y][z] = rand() % 1000;
        cout<<arr[x][y][z]<<" ";
      }
    }
    cout<<endl;
  }
  cout<<"\n"<<endl;


  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        for (int x = 0; x < n; x++) {
          for (int y = 0; y < n; y++) {
            for (int z = 0; z < n; z++) {
              if (arr[i][j][k] < arr[x][y][z]) {
                int temp = arr[i][j][k];
                arr[i][j][k] = arr[x][y][z];
                arr[x][y][z] = temp;
              }
            }
          }
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int x = 0; x < n; x++) {
      for (int z = 0; z < n; z++) {
        cout<<arr[i][x[z]]<<" ";
      }
    cout<<"|||";
    }
    cout<<endl;
  }
  cout<<"\n"<<endl;

  return 0;
}



