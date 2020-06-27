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
    int n;
    cin >> n;
    vll arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(n <= 1){
        cout << 0;
        return 0;
    }
    sort(arr.begin(), arr.end());
    ll med = arr[n/2];
    // cout << med<<endl;
    ll count = 0;
    for(int i = 0; i < n; i++){
        // cout << abs(med - arr[i])<<endl;
        count+= abs(med- arr[i]);
    }
    cout << count;


 return 0;
}