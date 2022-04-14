#include <iostream>
#include <string>
#define LOG(x) std::cout << x << std::endl; 


int main() {
  int min;
  int max;

  LOG("enter min: ");
  
  std::cin >> min;

  LOG("enter max: ");
 
  std::cin >> max;

  for (int i = min; i <= max; i++) {

    // print from count "i" to "num"
    for ( int x = i; x <= max; x++) {
      std::cout << x << " ";
    }

    // on same line, print from count " to count "i"
    for ( int x = min; x < i; x++) {
      std::cout << x << " ";
    }


    std::cout << std::endl;
  }


 
  return 0;

}
