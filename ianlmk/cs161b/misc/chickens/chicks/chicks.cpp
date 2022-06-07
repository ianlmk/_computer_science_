//This file builds a struct for chicks
//And has some function implementations

#include "chicks.h"

//readInput
void readInput(ChickType chicks[], int &size)
{
	ifstream inFile;
	inFile.open("chicks.txt");
	//make sure file opens
	inFile.ignore(100, '\n');
	inFile.getline(chicks[size].breed, MAXCHAR, ';');
	while(!inFile.eof())
	{
	for(int i = 0; i < 4; i++)
	{
		inFile >> chicks[size].aProp.age[i];
		if(i < (4 - 1))
		{
			inFile.ignore(5, ':');
		}
	}
	inFile.ignore(5, ';');
	inFile >> chicks[size].aProp.weight;
	inFile.ignore(5, ';');
	inFile >> chicks[size].feed;
	inFile.ignore(5, ';');
	inFile.getline(chicks[size].eggColor, MAXCHAR, '\n');
	size++;
	inFile.getline(chicks[size].breed, MAXCHAR, ';');
	}
	inFile.close();
}
	
//output data
void outputData(const ChickType chicks[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printAChick(chicks[i]);
	}
}

//search for chicks, fill an array and send it back to main.
void searchData(const ChickType chicks[], int size, ChickType returnList[], int &nums)
{
	char eggColor[MAXCHAR];
	cout << "\nWhat color egg would you like to search for?";
	cin.getline(eggColor, MAXCHAR);
	for(int i = 0; i < size; i++)
	{
		if(strstr(chicks[i].eggColor, eggColor) != nullptr)
		{
			returnList[nums++] = chicks[i];
		}
	}
}

//sets the values of aChick from new parameters
void setValues(ChickType &aChick, char newBreed[MAXCHAR], int newAge, int newWt, double newFd, char newColor[MAXCHAR])
{
	strcpy(aChick.breed, newBreed);
	for(int j = 0; j < 4; j++)
	{
		aChick.aProp.age[j] = newAge * j;
	}
	aChick.aProp.weight = newWt;
	aChick.feed = newFd;
	strcpy(aChick.eggColor, newColor);
}

//prints a single line of data
void printAChick(ChickType aChick)
{
	cout << aChick.breed << ";";
    for(int j = 0; j < 4; j++)
    {
        cout <<aChick.aProp.age[j];
        if(j < (4 - 1))
        {
            cout << ':';
        }
    }
    cout << ";" << aChick.aProp.weight
         << ";" << aChick.feed << ";" << aChick.eggColor << endl;
}

