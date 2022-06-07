#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

  // ifstream is a type, in this case, we are naming a var "inFile" with type ifstream
  ifstream inFile;
  
  string filename = "";  

  cout<<"File to consume: ";
  cin>>filename;
  cout<<endl;

  // using the type operation "is_open" we test if the data is available for use
  // is_open(<filename>) requires a local filename to look inside of. It is defined above
  if(!inFile.is_open(filename)) {
    cout<<"Could not open file: "<<endl;
    return 1;
  }

  // after opening the file, we can manipulate its data like cin or cout.
  // the file is read line by line and processed like an istream.
  inFile >> <some var>;
  intFile >> <some other var>;


  return 0;

}
