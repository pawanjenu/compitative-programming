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
    bool canConstruct(string ransomNote, string magazine) {
        int mag[26] = {0};
        for(int i = 0; i < magazine.length(); i++)
            mag[magazine[i]-'a']++;
        for(int i = 0; i < ransomNote.length(); i++){

            if(--mag[ransomNote[i]-'a'] < 0)
                return false;
            
        }
    return true;
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
     vi nums={};
     Solution obj;
     cout << obj.canConstruct("bg","efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj");
    return 0;
}