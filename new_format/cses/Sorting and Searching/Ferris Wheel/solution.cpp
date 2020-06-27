#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int i = 0;
    int j = n-1;
    int count = 0;
    while (i <= j)
    {
        if(arr[i]+arr[j] <= x){
            i++, j--;
        }
        else{
            j--;
        }
        count++;
    }
    
    cout << count;

    return 0;
}