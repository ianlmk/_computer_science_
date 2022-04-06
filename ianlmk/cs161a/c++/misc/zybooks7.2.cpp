#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  string word = "words";

  cout << "\n\n2 number combos" << endl;
  for (int i = 0; i < word.length() ; ++i) {
    cout << word[i] << ",";
    for (int x = i; x > word.length(); x--) {
      cout << word[x] << ",";
      for (int y = x; y < word.length(); ++y) {
        cout << word[y] << ","  << endl;
      }
    }
    cout << endl; 
  }


  return 0; 
}

