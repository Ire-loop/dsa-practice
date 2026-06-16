#include <iostream>
using namespace std;

// https://docs.google.com/document/d/1OMy03GhQHhFEzpAwbyW9QmQetCplVHaOW-w4x1NHNEc/edit?addon_store&tab=t.0#heading=h.gufiyu4uwq0
int main() {
    int n = 4;
    cin >> n;

    /* QESTION 1 

        for (int i = 0; i < n; i++) {
            // to print " "
            for (int j = 0; j < n - i - 1; j++) cout << " ";
            
            // to print numbers
            for (int j = 0; j <= i; j++) cout << j + 1;
            
            cout << endl;
        }
    
        APPROACH 1
        for (int i = 0; i < n; i++) {
            // to print " "
            for (int j = 0; j < n - i - 1; j++) {
                if (i < 9) cout << " ";
                else cout << "  ";
            }
            // to print numbers
            for (int j = 0; j <= i; j++) {
                cout << j + 1;
            }

            cout << endl;
        }

        APPROACH 2 (WRONG)
        for (int i = 0; i < n; i++) {
            // to print " "
            for (int j = 0; j < n - i - 1; j++) {
                if (i < 9) cout << " ";
                else cout << "  ";
            }
            // to print numbers
            for (int j = 0; j <= i; j++) {
                cout << j + 1;
            }

            cout << endl;
        }

        APPROACH 3 (WRONG)
        for (int i = 0; i < n; i++) {
            // to print " "
            for (int j = 0; j < n - i - 1; j++) {
                if (j > 41) cout << " "; // Off by 1 digit 
                else cout << "  ";
            }
            // to print numbers
            for (int j = 0; j <= i; j++) {
                cout << j + 1;
            }

            cout << endl;
        }

        APPROACH 4 (WRONG)
        for (int i = 0; i < n; i++) {
            // to print " "
            for (int j = 0; j < n - i - 1; j++) {
                if (j >= 41) cout << " ";
                else cout << "  ";
            }
            // to print numbers
            for (int j = 0; j <= i; j++) {
                cout << j + 1;
            }

            cout << endl;
        }

        APPROACH 5: If we print "  " in place of 2 digit number we get more consistent pattern. 
        for (int i = 0; i < n; i++) {
            // to print " "
            for (int j = 0; j < n - i - 1; j++) {
                if (n > 9) {
                    if (j >= n - 9) cout << " ";
                    else cout << "  ";
                }
                else cout << " ";
            }
            // to print numbers
            for (int j = 0; j <= i; j++) {
                cout << j + 1;
            }

            cout << endl;
        }
    */

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) cout << n - i;
        cout << endl;
    }

    return 0;
}