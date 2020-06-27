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

void file_input() {
    if (freopen("input.txt", "r", stdin) and
        freopen("output.txt", "w", stdout))
        return;
}
class Solution {
public:
    void findper(vector<int> &nums,vector<bool> &vis, int index,vector<int> &per,set<vector<int>> &res){
        if(index == nums.size()){
            res.insert(per);
            return;
        }
        else{
            for(int i = 0; i < nums.size(); i++){

                if(!vis[i]) {
                    if(i > 0 and nums[i] == nums[i-1])
                        continue;
                    vis[i] = true;
                    per.push_back(nums[i]);
                    findper(nums,vis,index+1,per,res);
                    vis[i] = false;
                    per.pop_back();
                }

            }

        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> per;
        set<vector<int>> res;
        vector<vector<int>> ans;
        vector<bool> vis(nums.size(), false);
        findper(nums,vis,0,per,res);
        for(auto &it: res)
                ans.push_back(it);
        return ans;


    }
};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    vi nums = {1,1,2};
    Solution obj;
    vector<vector<int>> ans = obj.permuteUnique(nums);
    for(auto it: ans){
        for(auto yo: it)
            cout << yo<<" ";
        cout <<endl;
    }
    return 0;
}