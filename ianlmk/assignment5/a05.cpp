/*
##############################################################################
# Author:           Ian LaMotte-Kerr
# Assignment:       Assignment 5
# Date:             $(date -j -f "%a %b %d %T %Z %Y" "`date`" "+%s")
# Description:      searches input text for Acronyms and converts to text if
#                   found
# Input:            inputString
# Output:           BFF, IDK, JK, TMI, TTYL
# Sources:          assignment5.pdf
##############################################################################
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

  string inputString = "";
  string BFF = "BFF: Best friends forever";
  string IDK = "IDK: I don't know";
  string JK = "JK: Just kidding";
  string TMI = "TMI: Too much information";
  string TTYL = "TTYL: Talk to you later";
  size_t found;

  cout << "Welcome to the Text Message Decoder!\n" << endl;
  cout << "Enter a single line text message: " << endl;

  getline(cin,inputString);

  cout << "\nYou entered: \"" << inputString << "\"\n" <<endl;

  found = inputString.find("BFF");
  if (found != string::npos) {
    cout << BFF << endl;
  }

  found = inputString.find("IDK");
  if (found != string::npos) {
    cout << IDK << endl;
  }
  found = inputString.find("JK");
  if (found != string::npos) {
    cout << JK << endl;
  }
  found = inputString.find("TMI");
  if (found != string::npos) {
    cout << TMI << endl;
  }
  found = inputString.find("TTYL");
  if (found != string::npos) {
    cout << TTYL << endl;
  }

  cout << "\nFIN." << endl;

  return 0;
}
