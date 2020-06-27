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
    int numJewelsInStones(string J, string S) {
        unordered_set<char> jewels(J.begin(), J.end());
        int count = 0;
        for(auto &it: S){
            if(jewels.count(it))
                count++;
        }
        return count;
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    vi arr = {3,1,7,11};
    Solution obj;
    cout << obj.numJewelsInStones("aA", "aAAbbbb");
    return 0;
}