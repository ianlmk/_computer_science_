#include <iostream>
using namespace std;

void UpdateScoreVals(int scoreVals[], int numVals, int updateVal) {
   int i;

   for (i = 0; i < numVals; ++i) {
      scoreVals[i] = scoreVals[i] - updateVal;
   }
}

void PrintScoreVals(const int scoreVals[], int numVals) {
   int i;

   for (i = 0; i < numVals; ++i)  {
      cout << scoreVals[i] << endl;
   }
}

int main() {
   const int NUM_SCORES = 4;
   int quizScores[NUM_SCORES];
   int scoreUpdate = 5;
   int i;

   for (i = 0; i < NUM_SCORES; ++i) {
      cin >> quizScores[i];
   }

   UpdateScoreVals(quizScores, NUM_SCORES, scoreUpdate);
   PrintScoreVals(quizScores, NUM_SCORES);

   return 0;
}
