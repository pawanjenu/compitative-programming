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
    file_input();
    vector<pair<int, pair<int, int>>> vec;
    int n;
    cin >> n;
    int x, y;
    for(int i = 1; i <= n; i++){
        cin >> x>> y;
        vec.push_back({x, {-1, i}}); // in
        vec.push_back({y, {1, i}});  // out
    }
    sort(vec.begin(), vec.end());
    set<int> allotedrooms;
    list<int> avairooms;
    int occupied = 0;
    int in_out, ind;
    int ans[200005];

    for(auto const & it: vec){
        in_out = it.second.first;
        ind = it.second.second;
        if(in_out == 1){

            avairooms.push_back(ans[ind]);
        }
        else if(avairooms.empty()){

            allotedrooms.insert(allotedrooms.size()+1);
            ans[ind] = allotedrooms.size();
        }
        else{
            int temp;
            temp = avairooms.front();
            ans[ind] = temp;
            avairooms.pop_front();
            

        }

    }
    cout << allotedrooms.size()<<endl;
    for(int i = 1; i <= n; i++){
        cout << ans[i]<<" ";
    }


    return 0;
}