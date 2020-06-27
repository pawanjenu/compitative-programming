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
#define mod 1000000000 + 7

void file_input()
{
    if (freopen("input.txt", "r", stdin) and
        freopen("output.txt", "w", stdout))
        return;
}
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int k = 0;
        for(int i = 0; i < len; i++){
            if(nums[i]!= 0){
                swap(nums[i], nums[k++]);
            }
        }
        for(const auto &it : nums)
            cout << it <<" ";

    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    Solution obj;
    vector<int> nums = {0,1,0,3,12};
     obj.moveZeroes(nums);

    return 0;
}