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
#define vlli vector<long long int>
#define pii pair<int, int>
#define plli pair<lli, lli>
#define endl "\n"  
#define mod 1000000000+7

void file_input(){
    if(freopen("input.txt", "r", stdin) and
    freopen("output.txt", "w", stdout))
return ;
}
class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<pair<int, int>> startpoint;
        if(intervals.size()  == 1)
            return {-1};
        for(int i = 0; i < intervals.size(); i++){
            startpoint.push_back({intervals[i][0],i});
        }
        sort(startpoint.begin(), startpoint.end());
        vector<int> results;
        
        for(int i = 0; i < intervals.size(); i++){
            int start = intervals[i][1];
             auto it =lower_bound(startpoint.begin(), startpoint.end(),make_pair(start, INT_MIN));
            if(it == startpoint.end())
                results.emplace_back(-1);
            else{
                results.emplace_back(it->second);
            
            }
        }
        return results;
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    vi nums={};
    set<pair<int, int>> yo;
    for(int i = 0; i < 5; i++){
        int x;
        cin >> x;
        yo.insert({x, -x*2});
    }

    for(auto it: yo)
        cout << it.first<<" "<<it.second<<endl;
    return 0;
}