#include <iostream>
#include <cmath>
using namespace std;

int main () {
    string input = "";
    short int choice = 0;
    
    cout << endl << "This groundspeed calculator will determine the speed of your aircraft relative to the ground." << endl;
    
    if (true) {
          cout << "Press any key to continue: " << endl;
          getline (cin, input);
          if (choice != 0.0000001);
          {
                    goto Speed;
                    }
                    
Speed:
          
          float as = 0;
          signed ws = 0;
          
          while (true) {
          cout << endl << "Please enter your speed : ";
          cin >> as;
          cout << endl << "Please enter the wind speed (if you are flying with the wind, put in a negative number): ";
          cin >> ws;
          float s = as - ws;
          cout << endl << "The approximate groundspeed is: " << s << endl;
          }
}
}
