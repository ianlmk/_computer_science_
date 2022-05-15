//This program reads characters from the stream (console)
//and converts it all to upper case
//and does a character count
//
#include <iostream>
using namespace std;

int main()
{
	char letter = '\0';
	int count = 0;	//to keep track of number of characters
	cout << "Enter a string of text: ";
	cin.get(letter);
	while(letter != '\n')
	{
		count++;
		if(isalpha(letter))
		{
			cout << static_cast<char>(toupper(letter));
		}
		else
		{
			cout << letter;
		}
		cin.get(letter);
	}
	cout << endl;
	return 0;
}
		
