/******************************************************************************
# Author:           Nicco Martin
# Assignment:       A05 (CS161B)
# Date:             April 9, 2022
# Description:
# Input:            (What the program asks for, and data type, e.g., string)
# Output:           (Summary of messages displayed by the program)
# Sources:          Assignment 5 specifications
#                   and any other substantial aids, like web pages or students
#                   who helped you.
#******************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;
//constants for number of strings and number of characters in each string
const int ROWS = 20;
const int MAX_CHAR = 50;

//prototypes
void welcome();
int readStrings(char userStrings[][MAX_CHAR]);
void countFrequency(char userStrings[][MAX_CHAR], int freqCount[], int count);
void printWordsBefore(const char userStrings[][MAX_CHAR], int count);
void printWordsAfter(const char userStrings[][MAX_CHAR], const int freqCount[],int count);

//main function
int main() {
  char userStrings[ROWS][MAX_CHAR];
  int freqCount[ROWS] = {0}, count = 0;
  welcome();
  //call function to get user input of strings
  count = readStrings(userStrings);
  cout << "\nYour list before deletes and counts:" << endl;
  printWordsBefore(userStrings, count);
  cout << endl;
  //call function to count number of words in each string
  countFrequency(userStrings, freqCount, count);
  cout << "The frequency counts and list";
  cout << " with unique words are as below: " << endl;
  printWordsAfter(userStrings, freqCount, count);
  cout << endl;
  cout << "Thank you for using my frequency counter!" << endl;
  }

void welcome()
{
cout <<  "Welcome to my Word Frequency Counter!!" << endl;
cout <<  "\nThis frequency will count the number of occurrences of each";
cout << "\nword. The number of words in your list must be entered first ";
cout << "\nfollowed by the list of words separated by space. These are ";
cout << "\nthe rules of this frequency counter!";
cout << endl;
}

int readStrings(char userStrings[][MAX_CHAR])
{
  int count = 0;
  cout << "\nEnter the count of words first (as a whole number)";
  cout << "\nand the list of words separated by space: ";
  cin >> count;
  cin.ignore( 100, ' ');
  for(int i = 0; i < count; i++)
    {
      cin >> userStrings[i];
    }

  return count;
}

void countFrequency(char userStrings[][MAX_CHAR], int freqCount[], int count)
{
for(int i = 0; i < count; i++)
  {
    for(int j = 0; j < count; j++)
    {
      if(strcmp(userStrings[i], userStrings[j]) == 0)
        {
        freqCount[i]++;
        strcpy(userStrings[i], userStrings[j]);
        }

      }
  }
}

void printWordsBefore(const char userStrings[][MAX_CHAR], int count)
{
for(int i = 0; i < count; i++)
  {
     cout << userStrings[i] << endl;
  }

}

void printWordsAfter(const char userStrings[][MAX_CHAR], const int freqCount[],int count)
{
for(int i = 0; i < count; i++)
  {
     cout << userStrings[i] << " " << freqCount[i] << endl;
  }

}
