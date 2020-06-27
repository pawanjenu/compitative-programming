#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, m;
    long long k;

    cin >> n >> m >> k;
    vector<long long> a(n);
    vector<long long> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0;
    int j = 0;
    int count = 0;

    while (i < n and j < m) 
    {
        // cout << a[i] <<" "<<b[j]<<" diff-"<<abs(a[i] - b[i]);
        if(abs(a[i] - b[j]) <= k){
            // cout <<" #if "<<"\n";
            i++,j++,count++;
        }
        else if(a[i] < b[j]){
            // cout <<" #else if \n";
            i++;
        }
        else{
            // cout <<" #else \n";
            j++;
        }
    }
    cout << count;
    

    return 0;
}