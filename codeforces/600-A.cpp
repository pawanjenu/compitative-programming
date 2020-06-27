#include <bits/stdc++.h>
using namespace std;
bool find(int a[], int b[], int n){
    bool cod = true;
    unordered_map<int, int> dp;
    int l,r;
    int ok = 0;
    for(int i = 0; i < n; i++){
        // cout <<a[i]<<" "<<b[i]<<" ";
        // int x = b[i]-a[i];
        // cout << x <<endl;
        if(a[i] != b[i]){
            ok = 1;
            }
         if(b[i] - a[i] < 0)
            return false;
    }
    if(ok == 0)
        return true;
    
    for(int i = 0; i < n; i++)
        if(a[i] != b[i]){
            l = i;
            break;
        }
    for(int i = n-1; i >= 0; i--)
        if(a[i] != b[i]){
            r = i;
            break;
        }

    for(int i = l; i <=r; i++){
        if(dp.size() > 1)
            return false;
        int x = b[i]-a[i];
        dp[x]++;
        if(dp.size() > 1)
            return false;

    }
    return true;
            

}
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 int t;
 cin >> t;
 while(t--){
     int n;
     cin >> n;
     int a[n],b[n];
     for(int i = 0; i < n; i++)
        cin >> a[i];
     for(int i = 0; i < n; i++)
        cin >> b[i];
    unordered_map<int, int> dp;
    bool cod = find(a,b,n);
    // for(int i = 0; i < n; i++){
    //     //cout <<a[i]<<" "<<b[i]<<" ";
    //     int x = b[i]-a[i];
    //     //cout << x <<endl;
    //     if(x > 0 ){
    //         dp[x]++;
    //         cod = true;

    //     }
    //     else if(x < 0){
    //         cod = false;
    //         break;
    //     }
    //     else if(x == 0)
    //         cod = true;
    // }

    // // for(auto it: dp){
    // //     cout << it.first <<" "<<it.second<<endl;
    // // }
    
    // if(dp.size() <2){
    //     if(dp[0] < 0)
    //         cod = false;
    // }
    // else{
    //     cod = false;
    // }

    if(cod) 
        cout <<"YES";
    else
    cout <<"NO";
    
    cout << endl;
 }


 return 0;
}