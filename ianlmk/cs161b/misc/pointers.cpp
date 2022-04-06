#include <iostream>
#include <cstring>

#define LOG(x) std::cout << x << std::endl

int main() {
  int intVar = 8;

  // Simplest pointer: void null pointer using "nullptr" keyword that is invalid because mem address "\0"
  void* voidPtr = nullptr;

  // pointer going to the memory address of the intVar container. note the type
  int* intPtr = &intVar;

  // print to screen
  LOG(intPtr);

   
  // Access the data inside the memory address by dereferencing the pointer name. Do that using an asterisk in front of the var. 
  LOG(*intPtr);

  // change the value inside of the memory address
  *intPtr = 10;

  // print the update value to the screen.  
  LOG(*intPtr);  
  LOG(intVar);

  // Define a pointer to allocate a memory address with, in this case, 8 bytes
  char* buffer = new char[8];

  // set the mem address pointed to by buffer to 0 using the first 8 bytes as an unsigned char. 
  memset(buffer, 2, 8);

  // Define a double pointer: A pointer that points to the memory address of a pointer. 
  char** ptr = &buffer; 

  // print to screen
  LOG(buffer);
  LOG(ptr);
  
  delete[] buffer;
  std::cin.get();

}
