#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   int input;
   int i = 0;
   int sum = 0;
   double ave = 0.0;
   int max = 0;
   
   while (input >= 0) {
      i++;
      cin >> input;
      if (input > max) {
        max = input;
      }
      sum = sum + input;
      ave = static_cast<double>(sum) / static_cast<double>(i-1);
   }
   cout << max << fixed << setprecision(2) << " " << ave;
   
   return 0;
}
