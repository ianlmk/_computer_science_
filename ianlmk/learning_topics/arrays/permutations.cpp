// C++ program to print all
// permutations of a string
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void findPermutations(string str, int leftIndex, int rightIndex) {
  if (leftIndex == rightIndex) {
    cout << str << endl;
  } else {
    for (int i = leftIndex; i <= rightIndex; i++){
      swap(str[leftIndex], str[i]);
      findPermutations(str, leftIndex+1, rightIndex);
      //backtrack
      swap(str[leftIndex], str[i]);
    }
  }
}


// Driver Code

int main() {

  string pstring;
  int stringSize;
  char permute = 'y';

  while (permute == 'y') {
    cout << "Enter the string to permute:\n  ";
    cin >> pstring;
    cout << endl;
    stringSize = pstring.size();
    cout << "String: " << pstring << endl;
    cout << "Permutations:\n" << endl;
    findPermutations(pstring, 0, stringSize - 1);  

    cout << "\n" << "Would you like to permute another string?\n  (y/n): ";
    cin >> permute;
  }


  return 0;
}
