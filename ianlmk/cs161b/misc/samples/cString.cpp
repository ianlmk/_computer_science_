//This program reads a string into a char and does a few things
#include <iostream>
#include <cstring>
using namespace std;

//constants
const int MAXCHAR = 101;

//function prototypes
void readInput(char name[], const char prompt[]);
bool isLessThan(char str1[], char str2[]);

int main()
{
	char name[MAXCHAR], subject[MAXCHAR], prompt[MAXCHAR];
	strcpy(prompt, "Enter your name: ");
	readInput(name, prompt);
	readInput(subject, "Enter the subject: ");
	cout << name;
	cout << endl;
	cout << subject << endl << endl;
	if(isLessThan(name, subject))
	{
		cout << name << "\n" << subject << endl;
	}
	else
	{
		cout << subject << "\n" << name << endl;
	}
	return 0;
}

void readInput(char tempStr[], const char prompt[])
{
	cout << prompt;
	cin.getline(tempStr, MAXCHAR);
	//cin.ignore(100, '\n');
}

bool isLessThan(char str1[], char str2[])
{
	if(strcmp(str1, str2) < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
