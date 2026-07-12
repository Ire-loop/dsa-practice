#include <iostream>
using namespace std;

// http://geeksforgeeks.org/problems/square-pattern-1662666141/1?utm_medium=collab_striver_ytdescription&utm_campaign=pattern_22&utm_source=youtube
int main() {
    int n;
    cin >> n;

    /** 
     * METHOD 1: Took a lot of time to think. Had to solve it on notebook. 
     * Then I did dry run. Made sure all the edge case run correct.
     */
    for (int k = 0; k < 2 * n - 1; k++) {
        for (int j = 0, i = 0; j < 2 * n - 1; j++) {
            cout << n - i; 

            if (j < k) i++;
            if (j >= 2 * n - 2 - k) i--;
        }
        cout << endl;
    }

    return 0;
}