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
bool pat(string &s1, string &s2, int n, int m){
  if(n == 0 || m == 0){
    if(n == 0)
        return true;
    return false;
  }
  if(s1[n-1] == s2[m-1])
    return pat(s1, s2, n-1, m-1);
  else
    return pat(s1, s2, n, m-1);
  }

int main(){
    clock_t start,end;
    start = clock();
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    string s1, s2;
    cin >> s1 >> s2;
    cout << pat(s1, s2, s1.length(), s2.length());
    end = clock();
    cerr<<"time taken : "<<(double)(end-start)/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0;
}