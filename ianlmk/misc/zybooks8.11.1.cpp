#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main();
int MinNumber(int, int, int, int);
int MaxNumber(int, int, int, int);

int MinNumber(int num1, int num2, int num3, int num4) {
  int arr[] = {num1,num2,num3,num4};
  int min = arr[0];
  for (int i = 0; i < 4; ++i) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}

int MaxNumber(int num1, int num2, int num3, int num4) {
  int arr[] = {num1,num2,num3,num4};
  int max = arr[0];
  for (int i = 0; i < 4; ++i) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}
int main() {
  int num1,num2,num3,num4;
  cin >> num1 >> num2 >> num3 >> num4;
  cout << "Using numbers: " << num1 << " " << num2 << " " << num3 << " " << num4 << endl;
  cout << "Maximum is " << MaxNumber(num1,num2,num3,num4) << endl;
  cout << "Minimum is " << MinNumber(num1,num2,num3,num4) << endl;

  return 0;
}
