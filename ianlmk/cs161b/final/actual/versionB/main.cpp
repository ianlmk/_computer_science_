//main driver file

/*
###################################################################################
# Author:           Ian LaMotte-Kerr
# Assignment:       Final
# Date:             $(date -j -f "%a %b %d %T %Z %Y" "`date`" "+%s")
# Description:      accepts in a country to remove from a list of citizenship data
# Input:            cship: char array
# Output:           list: struct array
# Sources:          person.h, person.cpp
###################################################################################
*/


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


