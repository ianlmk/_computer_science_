#include <iostream>
using namespace std;

int main() {
   int userNum;
   int i;
   int j;

   cin >> userNum;

   for(i = 0; i <= userNum; ++i) {
      cout << i << ":";
      for(j = i; j > 0; --j) {
        cout << j << ": ";
      }
      cout << "   " << i << endl;
   }
   
   return 0;
}
