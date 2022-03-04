#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {

  int i = 0;
  double solutionCount = 1.0;
  int numSolutions = 0;
  string anagram = "";
  char chars = ' ';

  cout << "Give me those letters: " << endl;

  while (cin.peek() != '\n' && cin.get(chars)) {
    i++;
    anagram += chars;
    cout << "index: " << i << "   | char: " << chars << endl;
  }
  
  for (int i = 1; i <= anagram.length(); ++i) {
    solutionCount *=i;
  }

  cout << "\nSolution count: " << solutionCount << "\n" << endl;

  cout << i << " characters\n" << "output: " << anagram << endl;

  for (int x = 0; x < anagram.length(); x++) {
    
    for (int i = 1; i < anagram.length(); i++) {
      remove(anagram.at(x));
      cout << anagram.at(x) << anagram.at(i) << endl;

    }
  }

  return 0;
}
