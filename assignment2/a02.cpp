#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

  const double LOAD_FACTOR = 0.64;
  const double PI = M_PI;

  double gumballRadius;
  double containerSize;
  double gumballVolume;
  int gumballCount;

  cout << "Welcome to my gumball guesser program!" << endl;
  cout << "Enter the radius of a gumball (cm) and the volume of a jar (mL) separated by a space: ";
  
  cin >> gumballRadius >> containerSize;

  gumballVolume = (4.0 / 3.0) * M_PI * pow(gumballRadius, 3.0);
  gumballCount = (containerSize * LOAD_FACTOR ) / gumballVolume;
  
  cout << "Estimate of gumballs in the jar: " << fixed << setprecision(2) << gumballCount << endl;
  cout << "Thank you for using my program!" << endl;
  
}


