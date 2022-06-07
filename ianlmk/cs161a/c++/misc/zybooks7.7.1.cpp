#include <iostream>
#include <string>
using namespace std;

int main() {

  string input;
  char match;
  int iter = 0;


  getline(cin, input);
  match = input.at(0);
  input.erase(0,2);

  //cout << "match char: " << match << "\ninput string: " << input << endl;
  for (int i = 0; i < input.length(); ++i) {
    if (input.at(i) == match) {
      iter += 1;     
    }
  }
  
  if (iter == 1) {
    cout << iter << " " << match << endl;
  } else if (iter > 1) {
    cout << iter << " " << match << "'s" << endl;
  }

  return 0;
}
