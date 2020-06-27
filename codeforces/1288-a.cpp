#include <bits/stdc++.h>
using namespace std;
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 int t;
 cin >> t;
 while (t--)
 {
     long long n, d;
     cin >> n >> d;
     bool found = false;
     //cout <<"herer";
     if(n == d){
         cout <<"YES"<<endl;
         continue;
     }
     for(long long i = 1; i <= n; i++){

         int x = i + ceil((double)d/ (i+1));
         if(x <= n){
            cout << "YES" << endl;
            found = true;
            break;
         }
     }
     if(!found)
        cout <<"NO"<<endl;

     

 }
 

 return 0;
}