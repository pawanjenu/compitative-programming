#include <bits/stdc++.h>
using namespace std;
 
void file_input(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    multiset<int, greater<>> mset;
    int n, m;
    cin >> n >> m;
    int temp;
    while (n--)
    {
        cin >> temp;
        mset.insert(temp);
    }

    while(m--){
        cin >> temp;
        auto it = mset.lower_bound(temp);
        if(it == mset.end())
            cout <<"-1 \n";
        else{
            cout <<*it<<"\n";
            mset.erase(it);
        }

    }

    return 0;

 return 0;
}