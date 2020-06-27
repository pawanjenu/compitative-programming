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

void file_input(){
    if(freopen("input.txt", "r", stdin) and 
    freopen("output.txt", "w", stdout))
        return;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    int n;
    cin >> n;
    vector<plli> arr(n);
    lli a, b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        arr[i] = {a,b};
    }
    sort(arr.begin(), arr.end());
    lli time_consumed = 0, points = 0;
    for(const auto & it: arr){
        time_consumed+= it.first;
        points+= (it.second- time_consumed);
    }

    cout << points;

 return 0;
}