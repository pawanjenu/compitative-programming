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
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n-1;
        while (left <= right){
            int mid = left +(right-left)/2;
            if(nums[mid]!= nums[mid-1] and nums[mid]!= nums[mid+1])
                return nums[mid];
            else if(nums[left]!= nums[left+1])
                    return nums[left];
            else if(nums[right]!= nums[right-1])
                return nums[right];
            else{
                left+=2;
                right-=2;
            }
        }
        return -1;
    }
};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    vi nums = {3,3,7,7,10,11,11};
    Solution obj;
    cout << obj.singleNonDuplicate(nums);
    return 0;
}
