#include <iostream>
#include <iomanip>

using namespace std;

string RemoveNonAlpha(string);
int main();

int main() {
   string userString = "";
   getline(cin, userString);
   
   RemoveNonAlpha(userString);

   return 0;
}

string RemoveNonAlpha(string userString) {
   string returnString = userString;
   int len = returnString.size();
   for (int i = 0; i < len; i++) {   
     if ( isalpha(returnString[i]) ) {
       cout << returnString.at(i);
     }
   }
  
   cout << endl;
   return returnString;  
}
