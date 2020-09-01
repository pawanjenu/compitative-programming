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
int solve(){
  int n;
  cin >> n;
  vi arr(n);
  for(auto &it: arr)
    cin >> it;
  
  int count = 1;
  int maxf = -1;
  int prev = -1;
  for(int i = 1; i < n; i++){
    int curr_diff = (arr[i] - arr[i-1]);
    // cout << arr[i-1] <<" "<<arr[i] <<" "<<curr_diff<<" #"<<count<<endl;
    if(curr_diff != prev){
      // cout << arr[i-1] <<" "<<arr[i] <<" "<<curr_diff<<" #"<<count<<endl;
      prev = curr_diff;
      count = 1;
    }
    else
      count++;
  maxf = max(maxf, count);
    // cout << arr[i-1] <<" "<<arr[i] <<" "<<curr_diff<<" #"<<count<<endl;
  }
  return max(count, maxf) + 1;
}

int main(){
    clock_t start,end;
    start = clock();
    ios::sync_with_stdio(0);
    cin.tie(0);
    // file_input();
    int t;
    cin >> t;
    int i = 1;
   while (i <= t)
    {
      cout << "Case #" << i << ": "<<solve()<<"\n";
      i++;
    }
    
    end = clock();
    // cerr<<"time taken : "<<(double)(end-start)/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0;
}
