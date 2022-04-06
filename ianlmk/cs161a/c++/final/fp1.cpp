#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main();
int getLargest(int,int);
void killNine();

int main() {
  int max = std::numeric_limits<int>::min();
  int input;
  int countCheck = 0;
  bool check = false;

  cout << "Enter positive integers separated by newlines (0 to quit)" << endl;

  do {
    cin >> input;

    if (input > 0) {
      max = getLargest(max, input);
      countCheck += input;
    }
   
  } while (input != 0); 

  if (countCheck > 0) {
    check = true;
  }
  if (check == false) {
    killNine();
  }
  cout << "largest number you entered was: " << max << endl;

  return 0;
}

int getLargest(int max, int number) {
  if (number > max) {
    max = number;
  }
  return max;
}

void killNine(){
  cout << "No positive whole numbers were entered" << endl;
  exit(0);
}

