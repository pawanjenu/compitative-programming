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
    unordered_set<int> all_days;
    unordered_set<int> for_now;
    vector<int> temp;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int last = -1;
    vector<vector<int>> dp;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            if(all_days.count(arr[i]) > 0){
                cout <<-1;
                return 0;
            }
            else{
                all_days.insert(arr[i]);
                for_now.insert(arr[i]);
                temp.push_back(arr[i]);
            }
        }
        else{
            if(for_now.find(arr[i] * -1) == for_now.end()){
                cout <<-1;
                return 0;
            }
            else{
                for_now.erase(-1*arr[i]);
                //all_days.insert(arr[i]);
                temp.push_back(arr[i]);
            }
        }
        if(for_now.size() == 0){
            dp.push_back(temp);
            all_days.clear();
            temp.clear();
        }

    }

    if(for_now.size()!=0){
        cout << -1;
        return 0;
    }

    cout << dp.size()<<endl;
    for(auto it: dp){
        cout << it.size()<<" ";
    }
    return 0;
}