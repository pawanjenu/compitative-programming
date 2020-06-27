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
    string licenseKeyFormatting(string s, int k) {
        string temp = "";
        int len = s.length();
        int count = 0;
        for(int i = len-1; i >=0; i--){
            cout << toupper(s[i]);
            if(s[i] == '-'){
                cout <<" #1st if"<<endl;
                continue;}
            if(count!= k){
                cout <<" #2nd if";
                temp+= toupper(s[i]);
                count++;
            }
            else{
                cout <<" #else";
                count = 1;
                // if(i!= 0)
                    temp+='-';
                temp+=toupper(s[i]);
            }
            cout <<" "<<temp<<endl;
        }
    reverse(temp.begin(), temp.end());
        return temp;
    }
    
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    vi nums={};
    Solution obj;
    cout << obj.licenseKeyFormatting("5F3Z-2e-9-w", 4);
    return 0;
}