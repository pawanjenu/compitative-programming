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
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int big = *max_element(candies.begin(), candies.end());
        vector<bool> result;

        for(auto &it: candies){
            if(it+extraCandies >= big)
                result.emplace_back(true);
            else
                result.emplace_back(false);
        }

        return result;
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