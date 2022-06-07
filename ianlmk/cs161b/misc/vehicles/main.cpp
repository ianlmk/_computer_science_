/* 
 SO, this is an exercise in reading from a file, and formatting the data some way for "struct" usage. 
 
*/


#include <cstring>
#include <string>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

const int MAX = 100;
const int MAX_ROWS = 40;
const int MAX_COLS = 51;

struct Vehicles {
  char vehicleType[MAX_COLS];
  char make[MAX_COLS];
  char model[MAX_COLS];
  char year[MAX_COLS];
}; 

struct Vehicles type[MAX_COLS];

//f(x) prototypes
void formatFile(ifstream &inFile);
void openFile(string filename, ifstream &inFile);


int main() {
  int size = 0;
  ifstream inFS;
  ofstream outFS;
  
  formatFile(inFS);
    

  return 0;
}

void formatFile(ifstream &inFile) {

  string one,two,three,four;


  string filename = "cars.txt";
  openFile(filename,inFile);
  string line;
  char myChar;
  string cleanList[3] = {"make","model","year"};

  inFile.get(myChar);
  while (!(inFile.eof())) {
    for (int i = 0; i < 4; i++) {
      while(getline(inFile, line)) {
        //if(line.find(':') != line.npos) {
              type[i].vehicleType = line.at(0);
              cout<<type[i].vehicleType;
          //type[i].vehicleType = line;
          //type[i].make = line;
          //type[i].model = line;
          //type[i].year = line;
         
          //for (int x = 0; x < 3; x++) {
          //  if (line.find(cleanList[x]) == line.npos){
          //    cout<<line<<endl;
          //  }
          //}
        //}
      }
    }
  }
  inFile.clear();
  inFile.seekg(0);
  inFile.close();
}

void openFile(string filename, ifstream &inFile){

  inFile.open(filename);

  if (!(inFile.is_open())) {
    cout << "Failed to open inFS file!" << endl;
    exit(1);
  }

}

