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
  string OMG = "OMG: Oh my god";
  string LOL = "LOL: Laugh out loud";

  cout << "Welcome to the Text Message Decoder!\n" << endl;
  cout << "Enter a single line text message: " << endl;

  getline(cin,inputString);

  cout << "\nYou entered: \"" << inputString << "\"\n" <<endl;

  if (inputString.find("BFF ") != string::npos) {
    cout << BFF << endl;
  } else if (inputString.find(" BFF") != string::npos ) {
    cout << BFF << endl;
  } else if (inputString.find(" BFF ") != string::npos) {
    cout << BFF << endl;
  }

  if (inputString.find("IDK ") != string::npos) {
    cout << IDK << endl;
  } else if (inputString.find(" IDK") != string::npos ) {
    cout << IDK << endl;
  } else if (inputString.find(" IDK ") != string::npos) {
    cout << IDK << endl;
  }

  if (inputString.find("JK ") != string::npos) {
    cout << JK << endl;
  } else if (inputString.find(" JK") != string::npos ) {
    cout << JK << endl;
  } else if (inputString.find(" JK ") != string::npos) {
    cout << JK << endl;
  }


  if (inputString.find("TMI ") != string::npos) {
    cout << TMI << endl;
  } else if (inputString.find(" TMI") != string::npos ) {
    cout << TMI << endl;
  } else if (inputString.find(" TMI ") != string::npos) {
    cout << TMI << endl;
  }  
  
  if (inputString.find("TTYL ") != string::npos) {
    cout << TTYL << endl;
  } else if (inputString.find(" TTYL") != string::npos ) {
    cout << TTYL << endl;
  } else if (inputString.find(" TTYL ") != string::npos) {
    cout << TTYL << endl;
  }

  if (inputString.find("OMG ") != string::npos) {
    cout << OMG << endl;
  } else if (inputString.find(" OMG") != string::npos ) {
    cout << OMG << endl;
  } else if (inputString.find(" OMG ") != string::npos) {
    cout << OMG << endl;
  }
  if (inputString.find("LOL ") != string::npos) {
    cout << LOL << endl;
  } else if (inputString.find(" LOL") != string::npos ) {
    cout << LOL << endl;
  } else if (inputString.find(" LOL ") != string::npos) {
    cout << LOL << endl;
  }

  cout << "\nFIN." << endl;

  return 0;
}
