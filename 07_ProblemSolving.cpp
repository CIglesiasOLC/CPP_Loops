// ************************* PROBLEM SOLVING *********************************
// Write a program that will display an equilateral triangle with the height
// depending on the users input.
// ***************************************************************************

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++) {
        for (int t = 0; t < n - i - 1; t++){
            cout << " ";
        }
        for (int t = 0; t < (i * 2) + 1; t++){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}