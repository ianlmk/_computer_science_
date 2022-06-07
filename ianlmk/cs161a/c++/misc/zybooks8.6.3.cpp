#include <iostream>
using namespace std;

void PrintVal(int num1, int num2) {
   int sum = 0;
   for (int i = num1; i <= num2; i++) {
      if (i % 2 == 0) {
         sum += i;
      }
   } 

   cout << sum << endl;
}
int main() {
   int numberA;
   int numberB;

   cin >> numberA;
   cin >> numberB;
   PrintVal(numberA, numberB);

   return 0;
}
