#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    unordered_map<string, int> data;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
        if(data[temp]){
            
            cout<<temp+to_string(data[temp])<<endl;
            data[temp]++;
        }
        else{
            data[temp]++;
            cout <<"OK\n";
        }
    }
    

    return 0;
}