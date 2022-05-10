#include <iostream>
using namespace std;

int main() {
   const int NUM_POINTS = 4;
   int dataPoints[NUM_POINTS];
   int controlValue;
   int i;

   cin >> controlValue;

   for (i = 0; i < NUM_POINTS; ++i) {
      cin >> dataPoints[i];
   }

   for (i = 0; i < NUM_POINTS; ++i) {
      if ( dataPoints[i] < controlValue) {
        dataPoints[i] = dataPoints[i] * 2;
      }
   }

   for (i = 0; i < NUM_POINTS; ++i) {
      cout << dataPoints[i] << " " ;
   }
   cout << endl;

   return 0;
}
