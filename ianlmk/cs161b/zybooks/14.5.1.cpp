#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>

using namespace std;

const int MAXCHAR = 50;
const int MAXITEMS = 50;

struct music{
  char title[MAXCHAR];
  char artist[MAXCHAR];
  char year[MAXCHAR];
} songData[MAXITEMS];
 
// f(x) prototypes
int getSongData(ifstream &inFile);
void printSongData(int i);
bool openFile(ifstream &inFile, string filename);

int main() {
  ifstream inFile;
  string filename = "songs.txt";
  int i = 0;


  if(!openFile(inFile, filename)) {
    cout<<"File open failed. Exiting"<<endl;
    exit(1);
  }

  i = getSongData(inFile);
  printSongData(i);


  return 0; 
}

bool openFile(ifstream &inFile, string filename) {
  inFile.open(filename);
  if (!inFile) {
    return false;
  }
  return true;
}


/* add function definitions */
int getSongData(ifstream &inFile) {
  int count = 0;

  inFile.getline(songData[count].title, MAXCHAR, ';');
  inFile.getline(songData[count].artist,MAXCHAR, ';');
  inFile.getline(songData[count].year,MAXCHAR, '\n');

  while (!inFile.eof()){
    count++;
    inFile.getline(songData[count].title, MAXCHAR, ';');
    inFile.getline(songData[count].artist,MAXCHAR, ';');
    inFile.getline(songData[count].year,MAXCHAR, '\n');
  }

  return count;
}


void printSongData(int i) {
  for (int x = 0; x < i; x++) {
    cout<<setw(25)<<left<<songData[x].title;
    cout<<setw(20)<<left<<songData[x].artist;
    cout<<setw(4)<<left<<songData[x].year;
    cout<<endl;
  }
}
