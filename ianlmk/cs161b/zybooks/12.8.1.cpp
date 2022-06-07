#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;



void RemoveSpaces(char userString[], char userStringNoSpaces[]);

int main() {
  char userString[50];
  char userStringNoSpaces[50];
  
  cin.getline(userString,50);

  RemoveSpaces(userString,userStringNoSpaces);

  cout<<userString;
  cout<<endl;
  return 0;
}

void RemoveSpaces(char userString[], char userStringNoSpaces[]) {

  size_t size = strlen(userString);


  for (int i = 0; i < size; i++) {
    if ( userString[i] == ' ') {
      for (int j = i; j < size; j++) {
        if (j != size) {
          userString[j] = userString[j + 1];
        } else if (j == size) {
          userString[j] == '\0';
          size--;
        }
      } 
    }
  }  
}
