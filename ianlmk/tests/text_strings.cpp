/*
##############################################################################
# Author:           Ian LaMotte-Kerr
# Assignment:       Assignment 5
# Date:             $(date -j -f "%a %b %d %T %Z %Y" "`date`" "+%s")
# Description:
#
# Input:
# Output:
# Sources:          assignment5.pdf
##############################################################################
*/

#include <iostream>
#include <list>
#include <map>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

 
//template<typename K, typename V>
//void print_map(std::unordered_map<K, V> const &stringList)
//{
//    for (auto const &pair: stringList) {
//        std::cout << "{" << pair.first << ": " << pair.second << "}\n";
//    }
//}


int main() {

  string inputString = "";
  std::unordered_map<string, string> stringList = {
    {"BFF","Best friends forever"},
    {"IDK","I don't know"},
    {"JK","Just kidding"},
    {"TMI","Too much information"},
    {"TTYL","Talk to you later"}
  };

  unordered_map<int, int>::iterator map_it;

  cout << "Welcome to the Text Message Decoder!" << endl;
  cout << "Enter a single line text message: ";
  getline(cin,inputString);
  cout << "You entered: \"" << inputString << "\"" << endl;

  map_it = stringList[0].begin();
  cout << map_it->second << endl;    
  
  for (int i = 0; i < 5; i++) {
//    cout << stringList->second << endl;    
//    if (inputString.find(stringList[i])) {
//      stringFound.push_back(stringList[i]);
//
//    }
  }



  return 0;
}
