#include <iostream>
#include <string>
using namespace std;

int main() {
  string userText;
  int iter = 0
;
  getline(cin, userText);  // Gets entire line, including spaces. 

  for (int i = 0; i < userText.length(); ++i) {
    if ( isalpha(userText.at(i)) ) {
      iter += 1;
    }
  }
  cout << iter << endl;

  return 0;
}
