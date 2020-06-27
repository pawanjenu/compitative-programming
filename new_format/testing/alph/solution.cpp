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
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    string yo = "abcdefghijklmnopqrstuvwxyz";
    getline(cin,yo);
    // for(auto &it: yo)
    //   cout <<it <<" "<<(int)it<<" "<<(char)(122-(it-'a'))<<endl;
    for(auto &it: yo){
      if(islower(it))
          it = (122-(it-'a'));
    }

    cout << yo;
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0;
}