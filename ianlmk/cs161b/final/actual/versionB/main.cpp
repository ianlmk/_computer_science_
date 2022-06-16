//main driver file
//add header comments here.
#include "person.h"
const int CAPACITY = 20;

//function protoypes

//main and then functions.
int main()
{
	PersonType list[CAPACITY];
	int 	   count  = 0;
	char	   fileName[] = "persons.txt";

	populatePersons(list, count, fileName);

        cout<<"_________BEFORE REMOVAL__________"<<endl;
	printPersons(list, count);


	//call your functions here to do what is required.

        if ( removePersons(list, count) == false) {
          cout<<"\n_________AFTER REMOVAL__________"<<endl;
          cout<<"That country has no entries in the dbase and no removals have taken place.\nThe dbase remains as it was. Thank you for checking."<<endl;
          printPersons(list, count);
        } else {  
          cout<<"\n_________AFTER REMOVAL__________"<<endl;
	  printPersons(list, count);
        }

	cout<<endl;
	return 0;
}


