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


int solve (string s, int n) {
   // Write your code here
   unordered_map<char,int> ct;
   for(auto &it: s){
       ct[it]++;
   }
   int mx = -1;
   char ele;
   for(auto it: ct){
       if(it.first != '?')
       if(it.second > mx){
        //  cout << it.first <<" "<<it.second<<endl;
           mx = it.second;
           ele = it.first;
       }
   }
  //  cout << ele<<" "<<mx<<endl;
   char ot;
   for(auto it: ct){
       if(it.first != '?' and it.first!= ele)
            ot = it.first;
   }
   

   int rep = ct['?'];

   return (ct[ele]+rep - ct[ot]);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int out_;
        out_ = solve(s, n);
        cout << out_;
        cout << "\n";
    }
}