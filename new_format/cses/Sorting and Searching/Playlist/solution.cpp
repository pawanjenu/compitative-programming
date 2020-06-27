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
    vi arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int i = 0, j = 0, cur_len = 0, total = 0;
    map<int, int> dict;
    while (j < n){
        if(!dict.count(arr[j]) || dict[arr[j]] == 0){
            cur_len++;
            dict[arr[j]]++;
            total = max(total, cur_len);
            j++;
        }
        else{
            cur_len--;
            dict[arr[i]]--;
            i++;
        }
    }
    cout << total;
     

 return 0;
}