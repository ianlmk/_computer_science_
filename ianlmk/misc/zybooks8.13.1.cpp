#include <iostream>
#include <iomanip>                 // For setprecision
using namespace std;

int main();
double LapsToMiles(double); 


double LapsToMiles(double userLaps) {
  double mileage;

  mileage = .25 * userLaps;

  return mileage;
}

int main() {
  double numberOfLaps;
  cin >> numberOfLaps;

  cout << fixed << setprecision(2) << LapsToMiles(numberOfLaps) << endl; 

  return 0;
}
