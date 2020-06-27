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

void file_input(){
    if(freopen("input.txt", "r", stdin) and 
    freopen("output.txt", "w", stdout))
        return;
}
lli subarraySum(vlli& arr, lli sum) {
    map<lli,lli> mp = {{0,1}}; 
        lli ans = 0, curr_sum = 0;
        for(auto & it: arr){
         curr_sum += it;

            if(mp[curr_sum-sum] > 0)
                ans += mp[curr_sum-sum];
            mp[curr_sum]++;
    }
    return ans;

    }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    lli n, sum;
    cin >>n >> sum;
    map<lli,lli> mp = {{0,1}}; 
        lli ans = 0, curr_sum = 0;
    vlli arr(n);
    for(auto & it: arr){
        cin >> it;
    }
   cout << subarraySum(arr, sum);

 return 0;
}