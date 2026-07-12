#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'cutTheSticks' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */


/*
    APPROACH 1: Too many things to remember to avoid re-calculating minimum vector element hence cached and sticks used.
    Problem: The solution has O(n²) time complexity.  
    vector<int> cutTheSticks(vector<int> arr) {
        int m = 1001, n = arr.size(), total_sticks = n;
        
        for (int i = 0; i < n; i++) m = min(m, arr[i]);
        
        vector<int> ans;
        
        while (total_sticks != 0) {
            int t1 = 1001, t2 = 0;
            
            for (int i = 0; i < n; i++) {
                if (arr[i] == 0) continue;
                
                arr[i] -= m;

                t2++;
                
                if (arr[i] != 0) t1 = min(t1, arr[i]);

                else total_sticks--;
            }
            
            m = t1; 
            ans.push_back(t2);
        }
        
        return ans;
    }

    APPROACH 2: OPTIMIZED. Sort the array one at the current element index it will cancel out all the other elements in the array. 
    Just skip the duplicate elements. It's possible to duplicate all the elements at once.  
*/

vector<int> cutTheSticks(vector<int> arr) {
    sort(arr.begin(), arr.end());
    
    int n = arr.size();

    vector<int> ans;

    /*  APPROACH 1
        for (int i = 0; i < n; i++) {
            ans.push_back(n - i);

            int t = arr[i];

            while (i < n && arr[i] == t) i++; // This is like skipping to new group.
        }
    */

    /*  APPROACH 2
        ans.push_back(n);
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i - 1]) { // This is like checking the new group boundary or detecting the transition.
                ans.push_back(n - i);
            }
        }
    */

    
    for (int i = 0; i < n; i++) {
        /**
         * This is like checking the new group boundary or detecting the transition but
         * here you can the condition skips the check for condition if it's the 0 the index because for || condition only
         * one condition is required to be satisfied.
         */
        if (i == 0 || arr[i] != arr[i - 1]) { 
            ans.push_back(n - i);
        }
    }

    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<int> result = cutTheSticks(arr);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
