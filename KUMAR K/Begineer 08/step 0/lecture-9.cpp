#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;

    /*  Lecture 9

        INVERTED PYRAMID
        for (int i = 0; i < n; i++) {
            // for spaces
            for (int j = 0; j < i; j++) cout << " ";
            //for stars
            for (int j = 0; j < n - i; j++) {
                cout << "*";
                if (j != n - i - 1) cout << " ";
            }

            cout << endl;
        }

        HOLLOW PYRAMID 
        APPROACH 1 (WRONG)
        for (int i = 1; i <= n; i++) {
            // for spaces 
            for (int j = 0; j < n - i; j++) cout << " ";
            // for stars 
            for (int j = 0; j < i; j++) {
                if (i != 1 || i != n) { // Problem: for any row this is true (even for the last row )
                    if (j == 0 || j == i - 1) cout << "*";
                    else cout << " ";
                } else cout << "*";
                
                if (j != i - 1) cout << " ";
            } 

            cout << endl;
        }

        APPROACH 2
        for (int i = 1; i <= n; i++) {
            // for spaces 
            for (int j = 0; j < n - i; j++) cout << " ";
            // for stars 
            for (int j = 0; j < i; j++) {
                if (i != 1 && i != n) { // fIXED Traiangle is not hollow on both 1st and last row.
                    if (j == 0 || j == i - 1) cout << "*";
                    else cout << " ";
                } else cout << "*";
                
                if (j != i - 1) cout << " ";
            } 

            cout << endl;
        }

    */
    

    

    return 0;
}