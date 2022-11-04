// **************************** WHILE LOOP ***********************************
// WHILE LOOP is a looping statement where the CONDITION is evaluated right
// before the BODY is executed.
// ***************************************************************************

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    //WHILE LOOP SYNTAX:
    int counter = 0; //initialization of counter

    while(counter < 5) {                    //(counter < 5) is the Condition
        cout << "Body Here." << endl;       //the Body
        counter++;                          //the increment of counter
    }

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}