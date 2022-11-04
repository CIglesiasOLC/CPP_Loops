// **************************** FOR LOOP ***********************************
// FOR LOOP is a looping statement where the INITIALIZATION, CONDITION and
// INCREMENT/DECREMENT phases occur with the parenthesis of the statement.
// Only the BODY is separated. It is RANGE-BASED looping because the "counter" is
// essential when using it.
// ***************************************************************************

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    //FOR LOOP SYNTAX:

    //int counter = 0; is initialization of counter
    //counter < 5; is the condition
    //counter++ is the increment
    for(int counter = 0; counter < 5; counter++) {
        cout << "Body Here." << endl;               //the Body
    }

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}