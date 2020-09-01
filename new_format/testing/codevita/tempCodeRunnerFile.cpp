#include <bits/stdc++.h>
using namespace std;

#define endl "\n"  
#define mod 1000000000+7

int solve2(){
  int n, k;
  cin >> n >> k;

  vector<long long> arr(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  int count = 0;
  if(n == 1)
    return 0;
  for(int i = 0; i < n; i++){
    if(i == 0){
      if(abs(arr[i+1]-arr[i]) <=k){
        count+=1;
      }
    }
    else if(i == n-1){
      if(abs(arr[i]-arr[i-1]) <= k){
        count+=1;
      }
    }
    else{
      int diff = min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]));
      if(diff <= k)
        count+=1;
      
    }
  }

  return count;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<solve2();
    return 0;
}
