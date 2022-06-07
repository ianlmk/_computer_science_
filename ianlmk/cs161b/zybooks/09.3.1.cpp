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
  int i = 0;
  string sendIt = "";
  while ( x != 0) {
    sendIt += to_string(x % 2);
    x /= 2;
    i++;
  }
 
  return sendIt;
}

string StringReverse(string userString) {
  string binaryNumber = userString;
  string sendBack = "";  
  for (int i = binaryNumber.size() - 1; i >= 0; i--) {
    sendBack += binaryNumber.at(i);
  }

  return sendBack;
}
