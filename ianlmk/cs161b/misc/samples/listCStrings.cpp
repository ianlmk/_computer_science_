//This program demos a list of C strings
//reads input
//outputs and uses some string functions.
//
#include <iostream>
#include <cstring>
using namespace std;

//constants
const int MAXCHAR = 101;
const int MAXROWS = 10;

//function prototypes
int readInput(char list[][MAXCHAR]);
void output(char list[][MAXCHAR], int count);
void searchItem(char list[][MAXCHAR], int count);
void searchChar(char list[][MAXCHAR], int count, char letter);

//main
int main()
{
	char list[MAXROWS][MAXCHAR];
	int size = 0;
	size = readInput(list);
	output(list, size);
	searchItem(list, size);
	searchChar(list, size, 'e');
	return 0;
}

int readInput(char list[][MAXCHAR])
{
	int count = 0;
	cout << "How many strings? ";
	cin >> count;
	cin.ignore(100, '\n');
	cout << "Enter a string: ";
	for(int i = 0; i < count; i++)
	{
		cin.getline(list[i], MAXCHAR);
	}
	return count;
}

void output(char list[][MAXCHAR], int count)
{
	for(int i = 0; i < count; i++)
	{
		cout << list[i] << endl;
	}
}
//search through the list and find a string
void searchItem(char list[][MAXCHAR], int count)
{
	char searchStr[MAXCHAR];
	cout << "Enter the string to search for: ";
	cin.getline(searchStr, MAXCHAR);
	for(int i = 0; i < count; i++)
	{
		//if(strcmp(searchStr, list[i]) == 0)
		if(strstr(list[i], searchStr) != NULL)
		{
			cout << "Found it!" << endl;
			cout << list[i] << endl;
			break;
		}
	}
}

void searchChar(char list[][MAXCHAR], int count, char letter)
{
	int letterCount = 0;
	for(int i = 0; i < count; i++)
	{
		for(int j = 0; j < MAXCHAR; j++)
		{
			if(list[i][j] == letter)
			{
				letterCount++;
			}
		}
		cout << "Count of letter = " << letterCount << endl;
	}
}












