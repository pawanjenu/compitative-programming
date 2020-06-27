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
     vector<int> twoSum(vector<int>& arr, int target) {

        unordered_map<int, int> m;
        int l=arr.size();
        for(int i=0;i<l;i++){

            int t=target-arr[i];
		
            if(m.count(t)){
                return {m[t], i};
            }
	
            m[arr[i]] = i;
        }
        return {0};
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