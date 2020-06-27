#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    auto it1 = lower_bound(nums.begin(), nums.end(), target);
    auto it2 = upper_bound(nums.begin(), nums.end(), target);
    int left, right;
    if (it1 != nums.end() and *it1 == target)
    {
        left = it1 - nums.begin();
        right = (it2 - nums.begin()) - 1;
    }
    else
        left = -1, right = -1;

    cout << left << " " << right;
    vector<int> res;
    res.push_back(left);
    res.push_back(right);
    return res;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> nums = {5, 7, 7, 8, 8, 10};
    searchRange(nums, 6);

    return 0;
}