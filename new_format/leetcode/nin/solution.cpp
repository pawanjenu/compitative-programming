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
bool cmp(int a, int b){
  return a > b;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    int n;
    cin >> n;
    if(n == 1){
      cout << 1;
      return 0;
    }
    vi arr(n);
    unordered_map<int, int> nums;
    int count = 0;
    for(auto &it: arr){
      cin >> it;
      if(nums.count(it+1)){
        nums[it+1]--;
        if(nums[it+1] == 0)
          nums.erase(it+1);
        nums[it]++;

      }
      else{
        nums[it]++;
      }
    }
    for(auto it: nums)
      count+= it.second;
    

    cout << count;
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0;
}