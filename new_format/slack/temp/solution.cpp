#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define mod 1000000000+7

void file_input(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
return ;
}
int isspecial(vi &primestillnow, int num, int r1, int r2){
  for(auto it: primestillnow){
    if(num%it == 0)
      return 0;
    primestillnow.emplace_back(num);
    int A = primestillnow.size();
    if((float)(A/num) >= float(r1/r2))
      return A;
    
    return 0;
  }
  return 0;
}
int main(){
  file_input();
    int N,r1,r2;
    cin >> r1 >> r2 >> N;
    string cell;
    cin >> cell;
    vi dp(N+1,N+10);
    dp[0] = 0;
    dp[1] = (cell[0] == '#')?1:N+10;
    dp[2] = (cell[1] == '#')?1:N+10;
    if(dp[1] == N+10 and dp[0] == N+10){
      cout <<"no way";
      exit(0);
    }
    vi primestillnow = {};
    primestillnow.emplace_back(2);
    int A = primestillnow.size();
    for(int i = 3; i < N+1; i++){
      if(cell[i-1]!= '*'){
        dp[i] = min(dp[i-1], dp[i-2]) + 1;

        if(i%2){
          A = isspecial(primestillnow,i,r1,r2);
          if(A!= 0 and i> A)
            dp[i] = min(dp[i], 1+ dp[i-A]);
        }
        else{
          A = primestillnow.size();

          if(A!= 0 and i> A and (float)(A/i) >= float(r1/r2)) 
            dp[i] = min(dp[i], 1+ dp[i-A]);
        }
      }
      
    }
    if(dp[N] >= N+5)
      cout <<"no ways";
    else
      cout <<dp[N];
    return 0;
}