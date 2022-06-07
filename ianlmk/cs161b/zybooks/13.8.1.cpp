//headers and global constants
//Sources: https://www.kaggle.com/rtatman/fun-beginner-friendly-datasets
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

//function prototypes
bool openFile(string fileName, ifstream & inFile);
void leastCalories(ifstream & inFile, string &calName, int &leastCal);
void mostSugar(ifstream & inFile, string &sugarName, int &mostSugar);

//main()
int main()
{
	//variables
	ifstream inFile;
	string itemName, fileName;
	int itemValue = 0;
	//user input for filename
	cout << "Enter file name:";
	getline(cin, fileName);
	//call function to open file
	if (!openFile(fileName, inFile))
	{
		cout << "File did not open. Program terminating!!" << endl;
		return 0;
	}
	//call function to return by reference least calories item name and value
	leastCalories(inFile, itemName, itemValue);
	cout << itemName << " has the least amount of calories: " << itemValue << endl;
	//call function to return by reference most sugar's item name and value
	mostSugar(inFile, itemName, itemValue);
	cout << itemName << " has the most amount of sugar: " << itemValue << endl;
	//end
	return 0;
}

//open file function
bool openFile(string fileName, ifstream& inFile)
{
	inFile.open(fileName);
	if (!inFile)
	{
		return false;
	}
	return true;
}

//finds the cereal with the least calories and returns its name and the value
void leastCalories(ifstream &inFile, string &calName, int &leastCal)
{
	string cerealName;
	int calories = 0, fiber = 0, sugars = 0, discard = 0;
	double rating = 0;
	inFile.ignore(200, '\n');
	inFile >> cerealName >> calories >> fiber >> sugars >> rating;
	leastCal = calories;
	while (!inFile.eof())
	{
		if (leastCal > calories)
		{
			leastCal = calories;
			calName = cerealName;
		}
		inFile >> cerealName >> calories >> fiber >> sugars >> rating;
	}
	//rewinds the file back to the beginning.
	inFile.clear();
	inFile.seekg(0);
}

//finds the cereal with the most sugar content and returns its name and the value
void mostSugar(ifstream &inFile, string &sugarName, int &mostSugar)
{
	string cerealName;
	int calories = 0, fiber = 0, sugars = 0, discard = 0;
	double rating = 0;

        inFile.ignore(200, '\n');
        inFile >> cerealName >> calories >> fiber >> sugars >> rating;
        mostSugar = sugars;
        while (!inFile.eof())
        {
                if (mostSugar < sugars)
                {
                        mostSugar = sugars;
                        sugarName = cerealName;
                }
                inFile >> cerealName >> calories >> fiber >> sugars >> rating;
        }
        //rewinds the file back to the beginning.
        inFile.clear();
        inFile.seekg(0);
	//your code goes here
}








