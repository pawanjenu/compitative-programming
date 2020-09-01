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

void file_input() {
    if (freopen("input.txt", "r", stdin) and
        freopen("output.txt", "w", stdout))
        return;
}
class Solution{

public:
    bool isPalindrome(string& s,vector<long>& h0,vector<long>& h1,int start,int end,vector<long>& powTable){

        if(end<start)return false;

        int n=s.length();

        long v0=h0[end]-(start==0?0:h0[start-1]);
        v0*=powTable[n-start];

        int tmp=start;
        start=n-1-end;
        end=n-1-tmp;
        long v1=h1[end]-(start==0?0:h1[start-1]);
        v1*=powTable[n-start];

        return (v0==v1);
    }

    void threePalindromes(string s){

        int n=s.length();
        if(n<3){cout<<"Impossible"<<endl;return;}

        vector<int>start,end;
        vector<long>h0(n),h1(n),powTable(n+1);

        getIndexes(s,start,h0);
        reverse(s.begin(),s.end());
        getIndexes(s,end,h1);

        reverse(end.begin(),end.end());
        reverse(s.begin(),s.end());

        powTable[0]=1;
        for(int i=1;i<=n;i++)powTable[i]=997*powTable[i-1];
        for(int i:start)
            for(int x:end){
                int j=n-x-1;
                if(j<=i+1)continue;

                if(isPalindrome(s,h0,h1,i+1,j-1,powTable)){
                    cout<<s.substr(0,i+1)<<" "<<s.substr(i+1,j-i-1)<<" "<<s.substr(j,n-j)<<endl;
                    return;
                }
            }
        cout<<"Impossible"<<endl;
    }

    void getIndexes(string& s,vector<int>& position,vector<long>& hashValues){

        int n=s.length();

        vector<long>H0(n),H1(n);
        long hash0=0,hash1=0,mult=1;
        for(int i=0;i<n;i++){
            hash0=997*hash0+s[i];
            hash1+=mult*s[i];
            mult*=997;
            H0[i]=hash0;
            H1[i]=hash1;
            hashValues[i]=hash1;
        }

        for(int i=0;i<n;i++)
            if(H0[i]==H1[i])position.push_back(i);
    }
};

int minmax(vector<int >arr, int t){
    int n = arr.size();
    if(arr[n-1]- arr[0] < t)
        return n;
    vector<int> dp(n,0);
//    vector<int> currmin(n,-1);
//    vector<int> currmax(n,-1);
//    dp[0] = 1;
//    dp[1] = 2;
//    currmin[0] = arr[0];
//    currmin[1] = arr[0];
//    currmax[0] = arr[1];
//    currmax[1] = arr[1];
//    int currmin = arr[0];
//    int currmax = arr[1];
//    for(int i = 2; i < n; i++){
//        int currt = INT_MIN;
//        if((currmax[i-1]-currmin[i-1]) >= t)
//            currt = dp[i-1]+1;
//        if((currmax[i-2]-currmin[i-2]) >= t)
//            currt = min(currt, dp[i-2]+1);
//
//
//    }
dp[0] = 1;
dp[1] = 2;
int currmin = arr[0];

    for (int i = 2 ; i < n; ++i) {
        dp[i] = min(dp[i-1], dp[i-2])+1;
        if(arr[i]-currmin >= t)
            return dp[i];
    }
    return n;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    Solution* sol=new Solution;
//
//    sol->threePalindromes("radarnoonlevel");
//    sol->threePalindromes("aabab");
//    sol->threePalindromes("aaaaaaa");
//    sol->threePalindromes("leetcode");
//    sol->threePalindromes("kayakracecartenet");
//    sol->threePalindromes("aardvark");
//    sol->threePalindromes("tenet");
//    sol->threePalindromes("aaaaa");
//    sol->threePalindromes("madamciviclevel");
//    sol->threePalindromes("student");
//    return 0;
    vi arr = {1,2,3};
    cout << minmax(arr,2);
    return 0;
}