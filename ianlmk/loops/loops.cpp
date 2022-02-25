#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>

using namespace std;

int main() {
  
  int varA = 0;
  int varB;
  int upper = 0;
  int lower = 0;

  cout << "#################\n" 
       << "# LOOP EXAMPLES #\n" 
       << "#################\n" 
       << endl;

  /*------------------------------------------------------------------------------*/
  // WHILE loop: i.e. Conditioned loops. 
  // Unkown iteration count
  // Terminates on condition  
  cout << "\n-------------------------"
       << "\n WHILE loop: Conditioned"
       << "\n-------------------------\n"
       << "\nwhile (varA < 10) {"
       << "\n  cout << \"varA: \" << varA << endl;"
       << "\n  varA++;"
       << "\n}\n" 
       << endl;

  cout << "Press return to see the result" << endl;
 
  if (cin.get() == '\n') {
    while (varA < 10) {    
      cout << "varA: " << varA << endl;
      varA++;
    }
  }
  cout << "\033[2J\033[1;1H";
   // These 2 loops are equivalent

  /*------------------------------------------------------------------------------*/
  // FOR loop: i.e. Counted loops
  // Known iteration count
  // Count is based on a variable. 
  // 3 clauses: 
    // initializer: varA = <lower_bound>
    // condition: varA < <upper_bound>
    // increment: varA++
  cout << "\n\n-------------------"
       << "\n FOR loop: Counted"
       << "\n-------------------\n"
       << "\nfor (varB = 0; varB < 10; varB++) {"
       << "\n  cout << \"varB: \" << varB << endl;"
       << "\n}\n"
       << endl;

  cout << "Press return to see the result" << endl;

  if (cin.get() == '\n') {
    for (varB = 0; varB < 10; varB++) {
      cout << "varB: " << varB << endl;
    }
  }

  /*------------------------------------------------------------------------------*/
  // Bound for loop
  // Iteration count given upper(end) and lower(start) bound counts. 
  // NOTE* variable declaration inside of the condition block 
  // lower and upper bound values are defined above. 
  cout << "\n\n--------------------------"
       << "\n BOUND FOR loop: Coounted"
       << "\n--------------------------\n"
       << "\nfor (int idx = lower; idx < upper; idx++) {"
       << "\n  cout << \"idx: \" << idx << endl;"
       << "\n}\n"
       << endl;

  cout << "Enter the lower bound: ";
  cin >> lower;

  cout << "Enter the upper bound: ";
  cin >> upper;

  for (int idx = lower; idx < upper; idx++) {
    cout << "idx: " << idx << endl; 
  }




  return 0;
}
