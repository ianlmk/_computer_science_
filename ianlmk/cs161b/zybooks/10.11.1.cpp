#include <iostream>
#include <cstdlib>

using namespace std;

void flipCoin(string &coin) {
  int bCoin;

  bCoin = rand() % (1 - 0 + 1);
  if (bCoin == 0) {
    coin = "heads";
  } else if (bCoin == 1) {
    coin = "tails";
  }
 
}

int main() {
  int flipCount = 0;   
  string coin;

  srand(2);

  cin >> flipCount;
  
  for (int i = 0; i < flipCount; i++){
    flipCoin(coin);
      cout << coin << endl;
  }


  return 0;
}
