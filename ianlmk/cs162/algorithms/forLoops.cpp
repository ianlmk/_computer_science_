#include <iostream>
#include <string>
#define LOG(x) std::cout << x << std::endl; 


int main() {

  int count;
  std::cout << "Gimme a count to iterate: "; 
  std::cin >> count;

  for (int i = 0; i < count; i++) {
    for (int x = i ; x <= count; x++) {
      std::cout << x + i ;
    }  
    std::cout << "\n";
  }



  return 0;

}
