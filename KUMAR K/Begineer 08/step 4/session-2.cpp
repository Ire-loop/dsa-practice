#include <iostream>
#include <unordered_set>
using namespace std;

// Problem link: https://docs.google.com/document/d/1Lo3eJw_OClfI_RcMdTxpipbqmU6oCLALwkDx_RvhbgA/edit?tab=t.0
int main() {

    /*  APPROACH 1 (WRONG)
        unordered_set<int> seen; // seen this number before

        int n = 0, k = 0, count = 0;
        cin >> n >> k;

        for (int i = 0, t = 0; i < n; i++) {
            cin >> t;
            seen.insert(t);
            if (seen.find(k - t) != seen.end()) count++;
        }

        cout << count;
    */
    
    unordered_set<int> seen; // seen this number before

    int n = 0, k = 0, count = 0;
    cin >> n >> k;

    for (int i = 0, t = 0; i < n; i++) {
        cin >> t;
        seen.insert(t);
        if (seen.find(k - t) != seen.end()) count++;
    }

    cout << count;
    
    return 0;
}