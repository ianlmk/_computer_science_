/*
###################################################################################
# Author:           Ian LaMotte-Kerr
# Assignment:       Assignment 4
# Date:             $(date -j -f "%a %b %d %T %Z %Y" "`date`" "+%s")
# Description:      find and purge arr2 elements from arr1 and shift arr1 left
# Input:            none
# Output:           cleaned up array
# Sources:          
###################################################################################
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

// f(x) prototypes
void welcome();
void banish(int[],int,int[],int);

int main () {
  int arr1[] = {42, 3, 9, 42, 42, 0, 42, 9, 42, 42, 17, 8, 2222, 4, 9, 0, 1};
  int arr2[] = {42, 2222, 9};
  int size1 = sizeof(arr1)/sizeof(arr1[0]);
  int size2 = sizeof(arr2)/sizeof(arr2[0]);

  welcome();
  for (int i=0; i<size1; i++) {
    cout<<arr1[i]<<" ";
  } 
  cout<<endl;
  banish(arr1,size1,arr2,size2);

  cout<<"\n\n  The new and improved array is:"<<endl<<"\n    >> ";;
  for (int i=0; i<size1; i++) {
    cout<<arr1[i]<<" ";
  } 
 
  cout<<"\n\n---------------------------------------------------"<<endl; 
  cout<<"  K Thx Bye.\n";
  cout<<"---------------------------------------------------\n"<<endl; 
  return 0;
}


  // name:               < welcome
  // description:        < clears the screen and prints a welcome mess.
  // input Parameters:   < none
  // output to console:  < welcome message
  // return:             < none
void welcome() {
  cout<<"\033[2J\033[1;1H";
  cout<<"###################################################"<<endl;
  cout<<"#          Lets purge sort some arrays.           #"<<endl; 
  cout<<"###################################################"<<endl;
  cout<<"\n  The original array is:"<<endl<<"\n    >> ";
}

  // name:               < banish
  // description:        < removes ints from array 2 inside of array 1
  // input Parameters:   < int arrays: arr1[],arr2[] | int: size1,size2
  // output to console:  < arr1 with any elements of arr2 changed to 0 
  //                       and placed at the end of the array
  // return:             < no return
  // note:               < this works as a void because the array 
  //                       container names are actually just pointers
void banish(int arr1[], int size1, int arr2[], int size2) {
  int temp = 0;
  // uses arr2 as reference
  for (int x=0; x < size2; x++) { 
    for (int i=0; i<size1-1; i++) {
      if (arr1[i] == arr2[x]) {
        for(int j = i; j < size1 -1; j++) {;
          arr1[j] = arr1[j+1];
          arr1[j+1] = temp;
        }
        i--; 
      }
    }
  }

}

