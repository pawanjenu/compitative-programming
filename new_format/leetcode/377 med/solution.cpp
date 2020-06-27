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
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> ways(target+1, 0);
        ways[0] = 1;
        for(int i = 0; i <= target; i++){
        for(auto it:nums){
            if(i - it >= 0)
                ways[i] += ways[i-it];
        }
    }
    return ways[target];
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    vi nums={1, 2, 3};
    Solution obj;
    cout << obj.combinationSum4(nums,4);
    return 0;
}