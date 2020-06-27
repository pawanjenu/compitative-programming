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

void solve(){
    int n, k;
    cin >> n >> k;
    vi arr(n);
    if(n == 0){
        cout << 0<<endl;
        return;
    }
    for(auto &it:arr)
      cin >> it;
    int ans = 0;
    int temp = k;
    for(auto &it: arr){

      if(it != temp){
        temp = k;
        if(it == temp)
          temp --;
        
      }
      else{
        temp--;
      }
      if(!temp){
        ans+=1;
        temp = k;
      }
    }
    cout <<ans;


}

 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
int t;
cin >> t;
 for(int i = 1; i <= t; i++){
     cout << "Case #" << i << ": ";
     solve();
     if(i!=t)
     cout <<endl;
 }


 return 0;
}