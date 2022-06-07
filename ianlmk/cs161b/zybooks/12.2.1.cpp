  //            author:
  //              name:
  //       description:
  //           purpose:
  //              date:

#include <iostream>
#include <iomanip>
#include <cstring>


using namespace std;

// Constants


// f(x) prototypes
void copy(char [], char []);
void copyn(char [], char [], int);
void concat(char [],char []);

int main() {

  char orgName[100] = "United Nations";
  char userText[20] = "UNICEF";
  char copyText[10];
  char copynText[10];
  char catText[100];


  // copy all to dest* from src*
  copy(copyText, userText);
  cout<<copyText<<endl;

  // copy 'n' amount from dest* to src*
  copyn(copynText,orgName,8);
  cout<<copynText<<endl;

  // concatenate dest* and src* together
  concat(catText, orgName);
  concat(catText, ':');
  concat(catText, userText);
  cout<<catText<<endl;



  return 0;
}


  //              name: copy
  //       description: copies everything in chararray from source to destination
  //  input Parameters: char: source, destination
  // output to console: none
  //            return: void return of updated container contents
void copy(char destination[], char source[]) {
  strcpy(destination,source);
}

  //              name: copyn
  //       description: copies "n" number of chars from source to destination
  //  input Parameters: char: destination, source | int: n
  // output to console: none
  //            return: void return of container contents
void copyn(char destination[], char source[], int n) {
  strncpy(destination,source,n);
}

void concat(char destination[], char source[]) {
  strcat(destination,source);
}
