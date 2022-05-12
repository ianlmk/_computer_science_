#include <iostream>

using namespace std;

int main() {

  int arr[5] = {5,3};

   cout << arr << endl;
  // cout << arr[1] << endl;
  
  cout << "array size in bytes: " << sizeof(arr) << endl; // (int) 4 bytes * 5 (size of array)
  cout << "size of the type (i.e. type int): " << sizeof(arr[0]) << endl; 

  
  
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
    cout << hex << arr[i] << ',';
    
  }

   cout << endl;

   return 0;
}
