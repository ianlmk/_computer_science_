//add header comments here
#include <iostream>

using namespace std;

int enqueue(int queue[], int &size, int val);
void printQueue(int queue[], int size);

const int MAX = 3; // maximum size of queue

int main() {
    int queue[MAX]; // integer array for queue
    int size = 0;   // contains number of elements in queue

    // Add your code here

    
    return 0;
}

//add function comments here
int enqueue(int queue[], int &size, int val){
  
// add your code here
    
}


// Call this function to print the queue
void printQueue(int queue[], int size){
    cout << "[";
    for (int i = 0; i < size; i++){
        cout << queue[i];
        
        if (i != size - 1)
            cout << ", " ;
    }
    cout << "]" << endl;
}

