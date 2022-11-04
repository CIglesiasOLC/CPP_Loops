// **************************** DO WHILE LOOP *********************************
// DO WHILE LOOP is closely similar to WHILE loop. They only differ when the
// the body is executed first before the condition evaluated.
// ***************************************************************************

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    //PROBLEM: How many cups is needed in a 5 layer pyramid cups?
    int num_of_layers = 5;                              //initialization of counter
    int num_of_cups = 0;

    do {                                                //(num_of_layers < 5) is the Condition
        num_of_cups = num_of_cups + num_of_layers;      //the body
        num_of_layers--;                                //the decrement of counter
    } while (num_of_layers > 0);

    cout << "We need " << num_of_cups << " cups." << endl;

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}