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
  string abbreviation[] = {"BFF", "IDK", "JK", "TMI", "TTYL", "OMG", "LOL"};
  string expansions[] ={"Best friends forever", "I don't know", "Just kidding", "Too much information", "Talk to you later", "Oh my god", "Laugh out loud"};
  size_t limit = sizeof(abbreviation) / sizeof(string);
  size_t found = 0;
  int stringLength = 0;

  cout << "Welcome to the Text Message Decoder!\n" << endl;
  cout << "Enter a single line text message: " << endl;

  getline(cin,inputString);

  cout << "\nYou entered: \"" << inputString << "\"\n" <<endl;

  for (int i = 0; i < 7; i++) {
    found = inputString.find(abbreviation[i]);
    stringLength =  abbreviation[i].length();
    if (found != string::npos) {
      cout << "found string: " << abbreviation[i] 
           << "\n  length: " << stringLength
           << "\n  index: " << found 
           << endl;
    }
    if ((found == 0) && (inputString.substr(found,stringLength + 1) == abbreviation[i] + " ")) {
      cout << "\n  " << abbreviation[i] + ": " 
           << " " << expansions[i]
           << endl;
    } else if ((found != 0) && (inputString.at(found - 1) == ' ')) {
      cout << "\n  " << abbreviation[i] + ": " 
           << " " << expansions[i]
           << endl;
    }
  }

  cout << "\nFIN." << endl;

  return 0;
}
