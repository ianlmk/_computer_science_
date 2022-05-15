/*This is the starter file for the midterm exam.
This program has a function that will generate a list of integers using the rand function.
Your job is to fill the removeNum and oddCount functions.*/

#include <iostream>
#include <ctime>

using namespace std;

//constants and function prototypes
const int CAP = 100;
int buildList(int[], int size);
void printList(const int[], int size);

//your functions to implement
/*This function reads a number from the user and removes all numbers from the array that
is before the number that the user entered. The number the user entered is not deleted. Then
the function returns the new size.
If the user enters a number not in the list, output an appropriate message and do not do anything.  
Please see my samples in the document and run the test a few times since 
my list is randomly generated.*/

int removeNum(int array[], int size);

/*This function counts the number of odd numbers in the list and returns 
to main.*/

int oddCount(int array[], int size);

//name: 		    main
//description:		main function
//input params:		none
//output:		    List after inserts, and odd count
//return:		    none
int main()
{
	//DO NOT CHANGE MAIN
	int list[CAP], size = 0, count = 0;
	size = buildList(list, size);
	cout << "Original List!" << endl;
	printList(list, size);
	size = removeNum(list, size);
	cout << "List after remove!" << endl;
	printList(list, size);
	count = oddCount(list, size);
	cout << "Number of odds = " << count << endl;
	return 0;
}

//name: 		    buildList
//description:		function to build list.  DO NOT CHANGE THIS
//input params:		int array and its size
//output:		    none
//return:		    none

int buildList(int list[], int size)
{
	srand(time(NULL));
	size = 10;
	for (int i = 0; i < size; i++)
	{
		list[i] = rand() % 100;
	}
	return size;
}

//name: 		    printList
//description:		function to print the list.  DO NOT CHANGE THIS
//input params:		int array and its size
//output:		    none
//return:		    none

void printList(const int list[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << endl;
	}
}


//implement the missing functions here.
//add appropriate comments as I have done for other functions

int removeNum(int list[], int size) {
  int input = -1;
  bool found = false;

  while (input < 0) {
    cout<<"enter a number to check for: ";
    cin>>input;
    if (!cin) {
      cin.clear();
      cin.ignore();
      input = -1;
    }
  } 


  for (int i = 0; i < size; i++) {
    if (list[i] == input) {
      found = true;
      break;
    } else {
      found = false;
    }
  }
  if (found != true) {
    cout<<"\n##############################################################"<<endl;
    cout<<"The number you entered is an imposter. You have no power here!"<<endl;
    cout<<"##############################################################\n"<<endl;
  }

  for (int i = 0; i < size; i++) {
    if (list[i] == input) {
      for (int x = i; x < size; x++ ) {
        list[x - i] = list[x];
        list[x] = 0;
      }
        size -= i;
    }
  }

  return size;
}

//counts the odd numbers in the array and returns the count.
//add appropriate comments as I have done for other functions

int oddCount(int array[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (array[i] % 2 == 0) {
      continue;
    } else {
      count++;
    }
  }
  
  return count;
}


