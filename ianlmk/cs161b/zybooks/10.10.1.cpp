#include <iostream>
using namespace std;

int main();
void SwapValues(int &, int &);


int main() {
  int userVal1;
  int userVal2;

  cin >> userVal1 >> userVal2;
   
  SwapValues(userVal1, userVal2);
  
  cout << userVal1 << " " << userVal2 << endl;

  return 0;
}


void SwapValues(int &userVal1, int &userVal2) {
  int num1, num2;

  num1 = userVal1;
  num2 = userVal2;
  userVal1 = num2;
  userVal2 = num1;
}
