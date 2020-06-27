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
    int n, m;
    
    cin >> n;
        vi x(n);
    for(auto &it: x)
      cin >> it;
    cin >> m;
    vi y(m);
    for(auto &it: y)
      cin >> it;
    int i = 0, j = 0, count = 0;
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    while(i < n and j < m){
      // cout<< x[i]<<" "<<y[j]<<" "<<count<<endl;
      int diff = abs(x[i]- y[j]);
      if(diff <= 1){
        i++;
        j++;
        count++;
      }
      else if(x[i] > y[j]){
        j++;
      }
      else{
        i++;
      }
    }
    cout << count;
    end = clock();
    cerr<<"time taken : "<<(double)(end-start)/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0;
}