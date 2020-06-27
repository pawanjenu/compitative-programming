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
bool solve2(vi &b, vi &g, bool isboyfirst){
  int i = 0, j = 0;
  int n = b.size();
  int prev;
  if(isboyfirst){
    prev = g[j];
    i++, j++;
  }
  else{
    prev = b[i];
    i++, j++;
  }
  while(i < n and j < n){
    if(isboyfirst){
      if(prev <= b[i] and b[i] <= g[j]){
        prev = g[j];
        i++, j++;
      }
      else{
        return false;
      }
    }
    else{
      if(prev <= g[j] and g[j] <= b[i]){
        prev = b[i];
        i++, j++;
      }
      else{
        return false;
      }
    }
  }
  return true;
}

int main(){
    clock_t start,end;
    start = clock();
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    int t;
    cin >> t;

    while(t--){int n;
    cin >> n;
    vi b(n);
    vi g(n);
    for(auto &it: b)
      cin >> it;
    for(auto &it: g)
      cin >> it;
    
    if(n == 1){
      cout <<"YES"<<endl;
    }
    
    else{
      if(b[0] == g[0]){
        // cout <<"first if"<<endl;
        bool ans = solve2(b,g,true) | solve2(b,g,false);
        if(ans)
          cout<<"YES"<<endl;
        else
          cout << "NO"<<endl;
      }
      else if(b[0]<= g[0]){
        // cout <<"second if"<<endl;
        bool ans = solve2(b,g,true);
        if(ans)
          cout<<"YES"<<endl;
        else
          cout << "NO"<<endl;
      }
      else{
        // cout <<"third if"<<endl;
         bool ans = solve2(b,g,false);
        if(ans)
          cout<<"YES"<<endl;
        else
          cout << "NO"<<endl;
      }
    }
}
    end = clock();
    cerr<<"time taken : "<<(double)(end-start)/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0;
}

