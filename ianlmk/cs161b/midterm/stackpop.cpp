//add header comments here
#include <iostream>

using namespace std;

int pop(int stack[], int &size, int &val);
void printStack(int stack[], int size);

const int MAX = 3; // maximum size of stack

int main() {
    int stack[MAX] = {8, -2, 3}; // integer array for stack
    int size = 3;   // contains number of elements in stack

    // Add your code here

    
    return 0;
}

//add function comments here

int pop(int stack[], int &size, int &val){

// add your code here
}

// Call this function to print the stack
void printStack(int stack[], int size){
    cout << "[";
    for (int i = 0; i < size; i++){
        cout << stack[i];
        
        if (i != size - 1)
            cout << ", " ;
    }
    cout << "]" << endl;
}

