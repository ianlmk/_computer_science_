//main driver file
//add header comments here.
#include "person.h"
const int CAPACITY = 20;

//function protoypes
void populatePersons(PersonType list[], int& count, const char fileName[]);
void printPersons(const PersonType list[], int count);


//main and then functions.
int main()
{
	PersonType list[CAPACITY];
	int 	   count  = 0;
	char	   fileName[] = "persons.txt";

	populatePersons(list, count, fileName);
	printPersons(list, count);

	//call your functions here to do what is required.
	
	return 0;
}


//function to read from file and populate list
void populatePersons(PersonType list[], int& count, const char fileName[])
{
	ifstream		inFile;
	char			name[MAX_CHAR];
	char			citizen[MAX_CHAR];
	int age = 0;
	
	inFile.open(fileName);
	if(!inFile)
    {
        cerr << "Fail to open " << fileName << " to populate inventory!" << endl;
        exit(1);
    }
	inFile >> name;
	while(!inFile.eof())
    {
        inFile >> citizen;
		inFile >> age;
        strcpy(list[count].name, name);
		strcpy(list[count].citizenship, citizen);
        list[count].age = age;
        count++;

        inFile >> name;
    }
    inFile.close();
}

//function to print list
void printPersons(const PersonType list[], int count)
{
	cout << "List of citizen database!" << endl;
	for(int index = 0; index < count; index++)
	{
		cout << list[index].name << ";" << list[index].citizenship;
		cout << ";" << list[index].age << endl;
	}
}
