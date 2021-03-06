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
    int lengthOfLIS(vector<int>& nums) {
        int len = nums.size();
        vector<int>dp(len+1,1);
        for(int k = 0; k < len; k++){

            for(int i = 0; i < k; i++){
                if(nums[i] < nums[k])
                    dp[k] = max(dp[k], 1+ dp[i]);
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    Solution obj;

    vi nums = {10,9,2,5,3,7,101,18};
    cout << obj.lengthOfLIS(nums);
    return 0;
}