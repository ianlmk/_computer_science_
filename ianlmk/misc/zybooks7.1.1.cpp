#include <iostream>
using namespace std;

int main() {
   bool isValid;
   string keyString;
   cin >> keyString;
    for (int i = 0;i< keyString.length(); i++) {
      if ((isdigit(keyString.at(i))) == true){
         isValid = true;
         break;
      }
   }
   
   if (isValid) {
      cout << "Valid" << endl;
   }
   else {
      cout << "Invalid" << endl;
   }
   
   return 0;
}
