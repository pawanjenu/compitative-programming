#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int days, sumtime;
    cin >> days >> sumtime;
    vector<pair<int, int>> dd(days + 1);
    int summin = 0, summax = 0;
    for (int i = 1; i <= days; i++)
    {
        cin >> dd[i].first >> dd[i].second;
        summin += dd[i].first, summax += dd[i].second;
    }
    
    if(sumtime >= summin and sumtime <= summax){
        cout <<"YES"<<endl;
        int intervalleft = sumtime-summin;
    for(int i = 1; i <= days; i++){
        int print = min(intervalleft,dd[i].second - dd[i].first);
        cout << dd[i].first+print<<" ";
        intervalleft-= print;
    }

    }
    else
        cout <<"NO";

    return 0;
}