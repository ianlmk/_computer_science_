//This program estimates your annual consumption of a commodity based on how much you consume a normal weekday and a normal weekend day.
#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// f(x) prototypes
bool openFile(ifstream &inFile);
void readFile(ifstream &inFile);

int main() {

  ifstream inFile;
  

  if (!openFile(inFile)) {
    cout<<"File did not open. Program terminating"<<endl;
    exit(1);
  }

  readFile(inFile);

  inFile.close();
  return 0;
}


bool openFile(ifstream &inFile) {

  string filename;
  cin>>filename;

  inFile.open(filename);
  if(!inFile) {
    return false;
  }

  return true;
}

void readFile(ifstream &inFile) {
  string data;
  int wday;
  int wend;
  int totalNum;
 

  while(!inFile.eof()) {
    inFile >> data;
    inFile >> wday;
    inFile >> wend;
    totalNum = (wday*5*52) + (wend*2*52);
    cout<<data<<" "<<wday<<" "<<wend<<" "<<totalNum<<endl;
  }
}
