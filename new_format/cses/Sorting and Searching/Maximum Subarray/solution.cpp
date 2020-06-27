#include <bits/stdc++.h>
using namespace std;
 
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
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(n <= 1){
        cout << arr[0];
        return 0;
    }
    long long curmax = arr[0], prevmax = arr[0], maxx = LONG_LONG_MIN;
    for(int i = 1; i < n; i++){
        curmax = arr[i];
        curmax = max(curmax, curmax+ prevmax);
        maxx = max(maxx, curmax);
        prevmax = curmax;
    }
    cout << maxx;

 return 0;
}