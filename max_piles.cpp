#include <bits/stdc++.h>
using namespace std;
string abbreviation(string a, string b) {
    int n = a.size(), m = b.size();
    int i, j;
    for(i = 0,j = 0; i < n and j < m; i++){
        if(toupper(a[i]) == toupper(b[i]))
            j++;
    }

    if(j == m)
        return "YES";
    else
    {
        return "NO";
    }
    


}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string a, b;
    cin >> a >> b;
    cout << abbreviation(a,b);

    return 0;
}