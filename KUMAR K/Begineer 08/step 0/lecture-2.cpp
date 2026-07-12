#include <iostream>
using namespace std;

// https://docs.google.com/document/d/1RpBMD_UZ4yzP1ecfFER1vODKSWDJ0Jf1pYFv2aIm-gE/edit?addon_store&tab=t.0
int main() {
    int n = 0;
    cin >> n;

    /*  QUESTION 1
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                cout << i;
            }

            if (n != i) cout << endl;
        }
    */

    /*  QUESTION 2 (ATTEMPT 1)
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) { // j will not run for `A`
                cout << char(65 + i);
            }

            if (n != i) cout << endl;
        }
    
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) { // Now condition for printing correct no. of string is correct.
                cout << char(65 + i);
            }

            if (n != i) cout << endl;
        }
    */
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) { // Now condition for printing correct no. of string is correct.
            cout << char(65 + i);
        }

        if (n != i) cout << endl;
    }
    
    return 0;
}