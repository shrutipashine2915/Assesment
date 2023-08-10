/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
 vector<vector<int>> problem1(vector<int>& row, vector<int>& col) {
        int m = row.size(), n = col.size();
        vector<vector<int>> A(m, vector<int>(n, 0));
        for (int i = 0; i < m; ++i) {
            for (int j = 0 ; j < n; ++j) {
                A[i][j] = min(row[i], col[j]);
                row[i] -= A[i][j];
                col[j] -= A[i][j];
            }
        }
        return A;
    }

int main()
{
     vector<int> col{3,8}; 
     vector<int> a{4,7}; 
    vector<int> res=problem1(col);
    
    for(auto store:res) cout<<store<<" ";
    cout<<endl;
    
    return 0;  
    
}
