#include <iostream>
#include <string>

using namespace std;

string IntToReverseBinary(int);
string StringReverse(string);

int main() {
  int input;
  string binary1;

  cin >> input;

  binary1 = IntToReverseBinary(input);
  cout << StringReverse(binary1) << endl;


  return 0;
}

string IntToReverseBinary(int integerValue) {
  int x = integerValue;

  string sendIt = "";
  while ( x != 0) {
    sendIt += to_string(x % 2);
    x /= 2;
  }

  return sendIt;
}

string StringReverse(string userString) {
  string sendBack = "";
  for (int i = userString.size() - 1; i >= 0; i--) {
    sendBack += userString.at(i);
  }

  return sendBack;
}
