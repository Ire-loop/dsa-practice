#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Problem link: https://docs.google.com/document/d/1sBunPG4Y5wSnggKrzYQoqoDH18mIO9RNOT8i5iBiiIw/edit?tab=t.0
int main() {

    int n = 0, k = 0;
    cin >> n >> k;

    /*  ATTEMPT 1: BRUTE FORCE APPROACH

        vector<int> num(n);

        for (int i = 0; i < n; i++) cin >> num[i];

        string ans = "NO";

        for (int i = 0; i < n; i++) {
            bool isEqual = false;

            for (int j = 1; j < k && i + j < n; j++) {
                if (num[i] == num[j + i]) {
                    isEqual = true;
                    ans = "YES";
                    break;
                }
            }

            if (isEqual) break;
        }

        cout << ans;

    */

    unordered_map<int, int> nums; // integer, prev_index

    string ans = "NO";

    for (int i = 0, t = 0; i < n; i++) {
        cin >> t;

        if (nums.find(t) != nums.end() && i - nums[t] <= k) {
            ans = "YES";
            break;
        }

        nums[t] = i;
    }

    cout << ans;
}