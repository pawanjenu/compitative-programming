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
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if(len == 0)    
            return 0;
        int min_till_now  = prices[0];
        int profit = 0;
        for(int i = 1; i < len; i++){
            if(prices[i] > prices[i-1])
                profit+= (prices[i]- prices[i-1]);
            
            
            
        }
    return profit;
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    Solution obj;
    vector<int> nums = {7,1,5,3,6,4};
    cout << obj.maxProfit(nums);

    return 0;
}