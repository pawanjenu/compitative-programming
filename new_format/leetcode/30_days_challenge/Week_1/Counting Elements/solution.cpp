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
class Solution
{
public:
    int countElements(vector<int> &arr)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            auto exist = upper_bound(arr.begin() + i, arr.end(), arr[i]);
            if (exist == arr.end())
                continue;
            if (arr[i] == *(exist)-1)
                count++;
        }
        return count;
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    Solution obj;
    vector<int> nums = {1, 1, 2, 2};
    cout << obj.countElements(nums);

    return 0;
}