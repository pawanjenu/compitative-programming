#include <bits/stdc++.h>
using namespace std;
 
void file_input(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
bool cmp(pair<int, int> &a,pair<int, int> &b ){
    return a.second < b.second;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // file_input();
    int n;
    cin >> n;
    vector<pair<int, int>> arr;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        arr.emplace_back(make_pair(x,y));
    }
    int count = 0, current_time = -1;
    sort(arr.begin(), arr.end(), cmp);
    if(n <=1)
        cout<< n;
        
    else{
        // for(auto it: arr)
        //     cout << it.first <<" "<<it.second<<endl;
        // cout <<"else"<<endl;
        for(const auto & it: arr){
            // cout <<"end-"<<current_time<<" "<<it.first<<" "<<it.second<<" #count-"<<count<<endl;
            if(it.first >= current_time){
                count++;
                current_time = it.second;
            }
        }
        cout << count;
    }


 return 0;
}