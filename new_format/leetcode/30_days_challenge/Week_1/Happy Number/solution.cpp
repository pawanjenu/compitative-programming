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
    bool isHappy(int n) {
        unordered_set<int> if_exist;
        int temp = 0, sum = 0;
        while(1){
            while(n > 0){
                sum+= pow(n%10, 2);
                n/=10;
            }
            if(sum == 1)
                return true;
            else if(if_exist.count(sum))
                return false;
            if_exist.insert(sum);
            n = sum;
            sum = 0;
        }
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    Solution obj;
    cout << obj.isHappy(2);

    return 0;
}