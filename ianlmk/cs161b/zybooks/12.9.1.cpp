#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char arr[50];

  cin.getline(arr,50,'q');

  size_t size = strlen(arr);


  for (int i = 0; i < size; i++) {
    cout<<i<<": "<<arr[i]<<" ";
  }cout<<endl;


  for (int i = size; i >= 0; i--) {
    if (tolower(arr[0]) == 'q') {
      exit(0);
    }
    cout<<arr[i];
  }

  return 0;
}
