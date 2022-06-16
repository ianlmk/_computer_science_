//implememtation file for struct PersonType
#include "person.h"



// struct format:
//    char name[MAX_CHAR];
//    char citizenship[MAX_CHAR];
//    int age;

// function to read from file and populate list
void populatePersons(PersonType list[], int& count, const char fileName[])
{
    ifstream        inFile;
    char            name[MAX_CHAR];
    char            citizen[MAX_CHAR];
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

// function to print list
void printPersons(const PersonType list[], int count)
{
    cout << "\n--------------------------\nList of citizens database!\n--------------------------" << endl;
    for(int index = 0; index < count; index++)
    {
        cout << list[index].name << ";" << list[index].citizenship;
        cout << ";" << list[index].age << endl;
    }
    cout<<endl;
}


  //              name: removePersons
  //       description: prompts for a country to remove from the list of names/citizenships list
  //  input Parameters: cship: char array
  // output to console: request for info
  //            return: boolean: update success true or update success false. 

bool removePersons(PersonType list[], int& count) {
  char cship[20];
  bool success = false;
  cout<<endl;
  cout<<"Please enter the country of citizenship you would like to remove from the list:\n  >>> ";
  cin>>cship;

  for (int i = 0; i < count; i++) {
    if(strcmp(list[i].citizenship,cship) != 0) {
      success = false;
    }
  }

  for (int i = 0; i < count; i++) {
    if(strcmp(list[i].citizenship,cship) == 0) {
      for (int j = i; j < count - 1; j++) {
        strcpy(list[j].name, list[j+1].name);
        strcpy(list[j].citizenship, list[j+1].citizenship);
        list[j].age = list[j+1].age;
        success = true;
      } 
      count--;
      i--;  
    }  
  }
  return success;
}
