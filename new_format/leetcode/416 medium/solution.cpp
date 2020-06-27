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
    bool subsetsum(vector<int>& nums, int sum){
        int n = nums.size();
        vector<vector<bool>> dp(n+1, vector<bool>(sum+1, false));
        dp[0][0] = true;
        for(int i = 1; i <=sum; i++){
            dp[0][i] = false;
        }

        
        for(int i = 1; i <=n; i++){
            dp[i][0] = true;
        }
        for(int i = 1; i < n+1; i++){
            for(int j = 1; j < sum+1; j++){
                dp[i][j] = dp[i-1][j];
                if(j >= nums[i-1]){
                    dp[i][j] = (dp[i-1][j] || dp[i-1][j- nums[i-1]]);
                }
            }
        }
        return dp[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto &it: nums){
            sum+=it;
        }
        if(sum%2)
            return false;

        sum/=2;

        return subsetsum(nums,sum);
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    vi nums = {};
    Solution obj;
    return 0;
}