// **************************** DO WHILE LOOP *********************************
// DO WHILE LOOP is closely similar to WHILE loop. They only differ when the
// the body is executed first before the condition evaluated.
// ***************************************************************************

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    //DO WHILE LOOP SYNTAX:
    int counter = 0;                        //initialization of counter

    do { 
        cout << "Body Here." << endl;       //the Body
        counter++;                          //the increment of counter
    } while (counter < 5);                  //(counter < 5) is the Condition

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}