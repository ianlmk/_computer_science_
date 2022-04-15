#include <iostream>
#include <string>
#define LOG(x) std::cout << x << std::endl; 


int main() {

  int count;

  std::cin >> count;

  for (int i = 1; i <= count; i++) {
    for (int x = i; x <= 5; x++) {
      std::cout << x + i ;
    }  
    std::cout << "\n";;
  }



  return 0;

}
