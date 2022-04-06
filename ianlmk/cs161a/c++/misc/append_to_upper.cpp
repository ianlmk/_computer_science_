#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstString;
   string secondString;

   cin >> firstString;
   cin >> secondString;

   int longer;
   string word1 = "";
   string word2 = "";
   
   if (firstString.length() >= secondString.length()) {
      longer = firstString.length();
   } else {
      longer = secondString.length();
   }

   for (int i = 0; i < longer; i++) {
     if (firstString.substr(0,i) >= secondString.substr(0,i)) {
       word1 += firstString[i];
       word2 += secondString[i];
     } else if (secondString.substr(0,i) < firstString.substr(0,i)) {
       word2 += firstString[i];
       word1 += secondString[i];
     }
   }
   cout << word1 << " " << word2 << endl;

   return 0;
}
