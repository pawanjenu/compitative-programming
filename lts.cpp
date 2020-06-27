#include <bits/stdc++.h>
using namespace std;
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 
 int n;
 cin >> n;
 vector<int> arr(n);
 for (int i = 0; i < n; i++)
 {
     cin >> arr[i];

 }

vector<int> dp(n,1);
int maxx = 1;
for(int j = 1; j < n; j++){
    //cout <<" loop j "<<j <<endl;
    for(int i = 0; i < j; i++){
       // cout <<"i:"<<i<<" "<<arr[i] <<" j:"<<j<<" "<<arr[j];
        if(arr[i] > arr[j]){
            //cout <<" came here: ";
            dp[j] = max(dp[j], dp[i]+1);
            maxx = max(maxx,dp[j]);
            //cout << dp[j];
            
        }//cout << endl;
    }
    
}
// for (int i = 0; i < n; i++)
// {
//     cout << dp[i]<<" ";
// }
cout << *max_element(dp.begin(), dp.end());


 return 0;
}