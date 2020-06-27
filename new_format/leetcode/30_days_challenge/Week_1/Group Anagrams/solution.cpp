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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> all_anamgram;

        for(auto it: strs){
            string temp = it;
            sort(temp.begin(), temp.end());
            all_anamgram[temp];
        }
        for(auto it: strs){
            string temp = it;
            sort(temp.begin(), temp.end());
            all_anamgram[temp].push_back(it);
        }
    vector<vector<string>> result(all_anamgram.size());
    int i = 0;
    for(auto it: all_anamgram){
        for(auto it2: it.second){
            result[i].push_back(it2);
        }
        i++;
    }
    return result;
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    Solution obj;
    vector<int> nums = {7,1,5,3,6,4};
    // cout << obj.maxProfit(nums);

    return 0;
}