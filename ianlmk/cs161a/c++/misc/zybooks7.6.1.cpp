#include <iostream>

using namespace std;

int main() {

  int intake;
  cin >> intake;
  if ((intake > 100) || (intake < 11)) {
    cout << "Input must be 11-100" << endl;
    exit(0);
  }
  while (intake <= 100 and intake > 10) {
    if (intake == 11) {
      cout << 11 << endl;  
      break;
    }
    for (int i = intake; i >= 11; --i) {
      cout << i << " ";
      if ((i / 10) == (i % 10)){
        cout << endl;
        break;
      }
    }
    cout << endl;
    break;
  }
  return 0;
}
