#include <bits/stdc++.h>
using namespace std;
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 unordered_map<string, int> dp;
 int t;
 cin >> t;
 while(t--){
     int n;
     string yo;
     cin >> n;
     cin >> yo;
     if(n == 0){
         dp[yo]++;

     }
     else if(n == 1){
         int f = 0;
         for(auto it: dp){
            //  cout << it.first <<" "<<yo<<endl;
             size_t found = it.first.find(yo);
             size_t found1 = yo.find(it.first);
             if(it.first == yo){
                cout <<"YES"<<endl;
                 f = 1;
                break;
             }
             if(found != string::npos || found1 != string::npos){
                cout <<"YES"<<endl;
                f = 1;
                break;
             }
         }
         if(f == 0)
         cout <<"NO"<<endl;
     }
 }


 return 0;
}