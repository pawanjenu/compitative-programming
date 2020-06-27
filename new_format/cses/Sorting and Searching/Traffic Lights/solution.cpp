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
#define endl "\n"  

void file_input(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // file_input();
    
    int x, n, curr, left,right;
    cin >> x >> n;
    set<int> points = {0, x};
    multiset<int> length = {x};
    while(n--){
        
        cin >> curr;
        auto it = points.upper_bound(curr);
         left = *prev(it);
         right = *it;
        length.erase(length.find(right-left));
        length.insert(curr-left);
        length.insert(right-curr);
        points.insert( curr);

        cout <<*length.rbegin()<<" ";
    }

 return 0;
}