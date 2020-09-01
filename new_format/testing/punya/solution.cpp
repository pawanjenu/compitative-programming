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
  priority_queue<int> array;
  int n,k;
  cin >> n >> k;
  for(int i = 0; i < n; ++i){
    int temp;
    cin >> temp;
    array.push(temp);
  }
while(k--){
  int max_ele = array.top();
  array.pop();
  int new_ele = max_ele/2;
  array.push(new_ele);
}
int sum = 0;
while(!array.empty()){
  sum+=array.top();
  array.pop();
}
return sum;
}
int main(){
    clock_t start,end;
    start = clock();
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();

    end = clock();
    cerr<<"time taken : "<<(double)(end-start)/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0;
}
