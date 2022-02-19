#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   
   cin >> highwayNumber;

   string direction = "";
   string serviceHwy = "";   
   string hwy = "";

   if(highwayNumber % 2 == 0) {
     direction = "east/west";
   } else if (highwayNumber %2 != 0) {
     direction = "north/south";
   }

   if (highwayNumber % 100 == 0) {
     cout << highwayNumber << " is not a valid interstate highway number." << endl;
   } else if ((highwayNumber > 0) && (highwayNumber < 100)) {
     cout << "I-" << highwayNumber << " is primary, going " << direction << "." << endl;
   } else if ((highwayNumber > 100) || (highwayNumber < 999)) {
     hwy = to_string(highwayNumber);
     serviceHwy = hwy.substr(1,2);
     serviceHwy.erase(0, serviceHwy.find_first_not_of('0'));
     cout << "I-" << highwayNumber << " is auxiliary, serving I-" <<  serviceHwy << ", going " << direction << "." <<endl;
   }

   return 0;
}
