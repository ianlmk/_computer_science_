#include <iostream>
using namespace std;

int main() {
   const int SCORES_SIZE = 4;
   int oldScores[SCORES_SIZE];
   int newScores[SCORES_SIZE];
   int i;

   for (i = 0; i < SCORES_SIZE; ++i) {
      cin >> oldScores[i];
   }
   
   // shift all indexed values left one, and place the first value at the end of the list. 
   for (i = 0; i < SCORES_SIZE; i++) {
      if (i == SCORES_SIZE - 1) {
        newScores[i] = oldScores[0];
      } else {
        newScores[i] = oldScores[i + 1];
      }
      
   }

   for (i = 0; i < SCORES_SIZE; ++i) {
      cout << newScores[i] << " ";
   }
   cout << endl;

   return 0;
}
