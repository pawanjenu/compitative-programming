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
    int firstUniqChar(string s) {
        unordered_map<char, int> count;
        for(const char & it: s)
            count[it]++;

        for(int i = 0; i < s.size(); i++){
            if(count.count(s[i]) and count[s[i]] == 1)
                return i;
        }
        return -1;
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    vi nums={};
    Solution obj;
    return 0;
}