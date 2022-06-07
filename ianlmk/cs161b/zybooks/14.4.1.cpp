#include <iostream>

using namespace std;

const int MAXCHAR = 50;

struct music{
  char title[MAXCHAR];
  char artist[MAXCHAR];
  char year[MAXCHAR];
} songData;
 
// f(x) prototypes
void getSongData();
void printSongData();


int main() {
  
  getSongData();
  printSongData();
  return 0; 
}

/* add function definitions */
void getSongData() {
  cin.getline(songData.title, MAXCHAR);
  cin.getline(songData.artist, MAXCHAR);
  cin.getline(songData.year, MAXCHAR);
}


void printSongData() {
  cout<<"Title: "<<songData.title<<endl;
  cout<<"Artist: "<<songData.artist<<endl;
  cout<<"Year: "<<songData.year<<endl;
}
