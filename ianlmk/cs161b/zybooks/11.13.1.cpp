#include <iostream>

using namespace std;

int GetMinimumInt(int listInts[], int numVals);

int main() {

  int numVals;
  cin>>numVals;

  int *listInts = new int[numVals];
  int min; 

  for (int i = 0; i < numVals; i++) {
    cin >> listInts[i];
  }

  min = GetMinimumInt(listInts,numVals);
  for (int i = 0; i < numVals; i++) {
    listInts[i] = listInts[i] - min;
    cout<<listInts[i]<<" ";
  }  
  cout<<endl;

   return 0;
}

int GetMinimumInt(int listInts[], int numVals) {
  int min = listInts[0];

  for (int i = 0; i < numVals; i++) {
    if (listInts[i] < min) {
      min = listInts[i];
    }
  }

  return min;
}
