//This is the client file or the driver file
#include "chicks.h"

//main
int main()
{
    ChickType chicks[CAP], returnList[CAP];
    int size = 0;
	int nums = 0;
    readInput(chicks, size);
    outputData(chicks, size);
	//call search function to populate return List
	searchData(chicks, size, returnList, nums);
	cout << "\nList of a certain color egg:" << endl;
	outputData(returnList, nums);
    return 0;
}

