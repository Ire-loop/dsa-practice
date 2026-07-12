#include <iostream>
using namespace std;

// https://docs.google.com/document/d/1fnJjBmmcmPl50vG-fWM8Eon5_M1tQPTEzYISDMDlUrc/edit?addon_store&tab=t.0
int main() {

    int n = 0;
    cin >> n;

    /*  QUESTION 1
        APPROACH 1 WRONG middle number printed 2 times
        for (int i = 0; i < n; i++) {
            // print spaces
            for (int j = 0; j < n - i - 1; j ++) cout << " ";

            // 1st half of the pattern
            int j = i + 1;

            for (; j <= 2 * i + 1; j++) cout << j;

            // second half of the pattern
            j--;
            for (; j >= i + 1; j--) cout << j;

            cout << endl;

        }

        ATTEMPT 2 
        for (int i = 0; i < n; i++) {
            // print spaces
            for (int j = 0; j < n - i - 1; j ++) cout << " ";

            // 1st half of the pattern
            int j = i + 1;

            for (; j <= 2 * i + 1; j++) cout << j;

            // second half of the pattern
            j -= 2;
            for (; j >= i + 1; j--) cout << j;

            cout << endl;

        }
    */

    /*  QUESTION 2
        int i = 0;
        for (; i <= n/2; i++) {
            // print spaces
            for (int j = 0; j < n/2 - i; j++) cout << " ";

            // print starts
            for (int j = 0; j < 2 * i + 1; j++) cout << "*";

            cout << endl;
        }

        i -= 2; // `i` is allowed to increase till i <= 2. 

        for (; i >= 0; i--) {
            // print spaces
            for (int j = 0; j < n/2 - i; j++) cout << " ";

            // print starts
            for (int j = 0; j < 2 * i + 1; j++) cout << "*";

            cout << endl;
        }

        ATTEMPT 2 (WRONG ANSWER): Idea is I'm repeating my code. How can I make it consize? Introduce 2 variable loop. `k` to keep track of the rows. `i` to print characters. Now, increment `i` conditionally as per `k`. 
        // IMPORTANT: Carefully look your code iterator statements conditional statements are sources of bugs. 
        for (int i = 0, k = 0; k < n; k++) {
            // print spaces
            for (int j = 0; j < n/2 - i; j++) cout << " ";

            // print starts
            for (int j = 0; j < 2 * i + 1; j++) cout << "*";

            cout << endl;

            if (k < n/2) i++;
            else if (k == n/2) i -= 2; // Problem: `i` is allowed to increase only by `k < n/2`. Hence either increase `i` till `k <= n/2` or else remove the statement. 
            else i--;
        }

        ATTEMPT 3 (WRONG ANSWER): Changing 1 bug in code may alter other parts of the program. Please see if you quick fix affect other parts of the program.
        for (int i = 0, k = 0; k < n; k++) {
            // print spaces
            for (int j = 0; j < n/2 - i; j++) cout << " ";

            // print starts
            for (int j = 0; j < 2 * i + 1; j++) cout << "*";

            cout << endl;

            if (k <= n/2) i++;
            else if (k == n/2) i -= 2; // Problem: can't increase `i` by n/2 OR else pattern will distort. So better remove this line. A simple if else statement work.  
            else i--;
        }

        ATTEMPT 4 (RIGHT ANSWER): `i` prints the row while `k` keep track of rows and conditionally increase and decrease `i`.
        for (int i = 0, k = 0; k < n; k++) {
            // print spaces
            for (int j = 0; j < n/2 - i; j++) cout << " ";

            // print starts
            for (int j = 0; j < 2 * i + 1; j++) cout << "*";

            cout << endl;

            if (k < n/2) i++; //correct way
            else i--;
        }
    */
    
    
    for (int i = 0, k = 0; k < n; k++) {
        // print spaces
        for (int j = 0; j < n/2 - i; j++) cout << " ";

        // print starts
        for (int j = 0; j < 2 * i + 1; j++) cout << "*";

        cout << endl;

        if (k < n/2) i++;
        else i--;
    }
    
    return 0;
}