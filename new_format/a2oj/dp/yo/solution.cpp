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
bool isvowel(char c){
  if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    return true;

  return false;
}
int maxVowels(string s, int k){
 int max_v = 0;
    int cur_max = 0;
    int j = 0;
    for(int i = 0; i < s.length(); i++){

      cur_max+=isvowel(s[i]);

      if(i >= k){
        cur_max-= isvowel(s[i-k]);
      }
      max_v = max(max_v, cur_max);

    }
    
    return max_v;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    // unordered_map<char, int> ct;
    string s;
    cin >> s;
    int k;
    cin >> k;
   
    cout << maxv(s,k);
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0;
}