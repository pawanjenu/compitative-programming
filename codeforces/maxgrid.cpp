#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minFallingPathSum(vector<vector<int>> &A)
{
    int n = A.size(),ans = -1;
    int m = A[0].size();
    for(int i = 1; i < n; i++)
        for(int j = 0; j < m; j++){
            if (j == 0){
                // A[i][j] += min(A[i - 1][j], A[i - 1][j + 1]);
                int tempmax = INT_MIN;
                
                for(int x = 0; x < m; x++){
                    if(x!=j+1 and x!=j-1)
                    tempmax = max(tempmax, A[i-1][x]);

                }

                A[i][j]+= tempmax;
            }
            else if (j == m-1){
                // A[i][j] += min(A[i - 1][j], A[i - 1][j - 1]);
                int tempmax = INT_MIN;
                
                for(int x = 0; x < m; x++){
                    if(x!=j+1 and x!=j-1)
                    tempmax = max(tempmax, A[i-1][x]);

                }

                A[i][j]+= tempmax;
            }
            else{
                // A[i][j] += min(min(A[i - 1][j], A[i - 1][j - 1]), A[i - 1][j + 1]);
               int tempmax = INT_MIN;
                
                for(int x = 0; x < m; x++){
                    if(x!=j+1 and x!=j-1)
                    tempmax = max(tempmax, A[i-1][x]);

                }

                A[i][j]+= tempmax;
            }
        }

        for(int i = 0; i < m; i++)
            ans = max(A[n-1][i],ans);
        return ans;
   
}

int main()
{
    vector<vector<int> > A = {{3,2,1},{4,5,6},{7,8,9}};
    cout << minFallingPathSum(A);
}