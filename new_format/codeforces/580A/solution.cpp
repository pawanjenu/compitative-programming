#include <bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define ll long long
#define li long int
#define ld long double
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long>
#define vl vector<long>
#define vlli vector<long long int>
#define pii pair<int, int>
#define plli pair<lli, lli>
#define endl "\n"  
#define mod 1000000000+7

void file_input(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
return ;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    int n;
    cin >> n;
    vlli arr(n);
    for(auto &it: arr)
      cin >> it;
    if(n == 1){
      cout << 1;
      return 0;
    }
    int count = 1;
    int sub = -1;
    for(int i = 1; i < n; i++){
      // cout<<count<<endl;
      if(arr[i-1] <= arr[i]){
        count++;
        sub = max(sub, count);
      }
      else{
        sub = max(sub, count);
        count = 1;
      }
    }
    cout << sub;
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0;
}