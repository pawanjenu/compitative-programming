#include <bits/stdc++.h>
using namespace std;
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
 int n;
cin >> n;
 unordered_set<int> set;
 for (int i = 0; i < n-1; i++)
 {  int temp;

     cin >> temp;
     set.insert(temp);
 }

for(int i = 1; i <=n; i++){
    if(!set.count(i)){
        cout << i ;
        break;
    }
}
 

 return 0;
}