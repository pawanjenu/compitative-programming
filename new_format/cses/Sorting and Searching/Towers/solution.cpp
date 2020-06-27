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
    int n, x;
    cin >> n;
    vi arr;
    while (n--)
    {
        cin >> x;
        auto it = upper_bound(arr.begin(), arr.end(), x);
        if(it == arr.end()){
            arr.push_back(x);
        }
        else{
            *it = x;
        }
    }
    cout << arr.size();
    

 return 0;
}