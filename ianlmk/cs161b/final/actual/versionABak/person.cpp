//implememtation file for struct PersonType
#include "person.h"
const int CAPACITY = 20;

// function that displays the welcome message
void welcome()
{
	cout << "Welcome to my Citizen's Database" << endl;
}

// does data validation after reading int.
int readInt(int a)
{
    cin >> a;
    while (!cin || a <= 0)   
    {
        cout << "Error. Please enter an integer: ";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> a;
    }
    return a;
}

bool addPerson(PersonType list[], int &count){
    int position = 0;

    //function continues if under capacity
    if (position < CAPACITY){

    cout << "Enter your name: ";
    cin.getline(list[count].name, 101, '\n');
    cin.clear();
    
    cout << "Enter your citizenship: ";
    cin.getline(list[count].citizenship, 101, '\n');
    cin.clear();
        
    cout << "Enter your age: ";
    cin >> list[count].age;
    //input validation from 1 to 100 years
    while (!cin || list[count].age < 1 || list[count].age > 100){
        cout << "Error! Invalid age, try again." << endl;
        cin.clear();
        cin.ignore(100, '\n');
        cin >> list[count].age;
        }
    
    cout << "Enter position: ";
    cin >> position;
    //input validation from 1 to end of count
    while (position < 1 || position > count || !cin){
        cout << "Error! Invalid position." << endl;
        return false;
    }
    //expand size of array
    count++;

    //loop to insert new data and shift values
    for (int i = count; i >= position; i--){
        list[i] = list[i - 1];
    }
	    list[position - 1] = list[count];
        }

    //return information based on bool
    return true;
}

