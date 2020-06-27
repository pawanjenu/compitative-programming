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
    clock_t start,end;
    start = clock();
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    int n;
    cin >> n;
    vi arr(n);
    for(auto &it: arr)
      cin >> it;
    int q;
    cin >> q;
    sort(arr.begin(), arr.end());
    while(q--){
      int m;
      cin >> m;
      auto it = upper_bound(arr.begin(), arr.end(), m);
      it = prev(it);
      if(m >= *it)
          cout << distance(arr.begin(), it)+1;
      else
        cout << 0;
      cout << endl;
    }
    end = clock();
    cerr<<"time taken : "<<(double)(end-start)/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0;
}