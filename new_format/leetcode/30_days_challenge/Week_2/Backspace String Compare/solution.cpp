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
    bool backspaceCompare(string S, string T) {
        string s1 = "", s2 = "";
        for( auto &it: S){
            if(it == '#'){
                if(!s1.empty())
                    s1.pop_back();
            }
            else{
                s1.push_back(it);
                // cout << s1 <<endl;
            }
            
        }
        cout <<"\n\n";
        for( auto &it2: T){
            // cout << it2;
            if(it2 == '#'){
                if(!s2.empty())
                    s2.pop_back();
            }
            else{
                s2.push_back(it2);
                // cout << s2 <<endl;
            
            }
            
        }
        if(s1 == s2)
            return true;
        return false;
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    Solution obj;
    obj.backspaceCompare("xywrrmp","xywrrmu#p");

    return 0;
}