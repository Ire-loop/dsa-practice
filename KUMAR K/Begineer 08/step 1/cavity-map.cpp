#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'cavityMap' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts STRING_ARRAY grid as parameter.
 */

 /* APPROACH 1 (WRONG): Problem we are storing the character wrong. Use char car can be compared. Then updating the ste same int value with a char 
    Also this is a square matrix as written in the question so in this problem you have to see the top and bottom cell as wel. The
    present program intends to check only adjacent elements in the row.
    Also value is not being assigned here it's being copies to the integer but it doesn't modify the cell. 

    vector<string> cavityMap(vector<string> grid) {
        int n = grid.size();
        
            for (int i = 1, m = 0; i < n - 1; i++) {
                string &cell = grid[i];
                
                m = cell.size();
                
                for (int j = 1; j < m - 1; j++) {
                    int n1 = cell[j - 1] - '0';
                    int n2 = cell[j] - '0';
                    int n3 = cell[j + 1] - '0';
                    
                    if (n2 > n1 && n2 > n3) {
                        cell[j] = 'X';
                    }
                }
            }
        
        return grid;
    }
 
 
 */
vector<string> cavityMap(vector<string> grid) {
    int n = grid.size();
    
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            
            char &left = grid[i][j - 1], 
                &cell = grid[i][j],
                &right = grid[i][j + 1],
                &top = grid[i - 1][j],
                &bottom = grid[i + 1][j];
            
            bool isValid = cell > left && 
                cell > right && 
                cell > top && 
                cell > bottom; 
                
            if (isValid) cell = 'X';
        }
    }
    
    return grid;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = cavityMap(grid);

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