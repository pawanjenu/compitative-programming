#include <bits/stdc++.h>
using namespace std;

int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 

     string s;
   
     cin >> s;
     int ln = s.length();
     vector<int> dp(ln+1);
     int ev = 0;
     for(int i = ln-1; i >=0; i--){
         if((s[i]-'0')%2 == 0)
            dp[i] = ++ ev;
        else
            dp[i] = ev;
     }
     
    for (int i = 0; i < ln; i++)
    {
        cout << dp[i]<<" ";
    }
    
    //  cout<<"adsfgnhmnhgbfdsa";

 
 

 return 0;
}