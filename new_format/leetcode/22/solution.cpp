#include <bits/stdc++.h>
using namespace std;

void gen(int n, string par, int open, int close, vector<string> &result){

    if(open == close == n){
        result.push_back(par);
    }
    if(open > close)
        gen(n,par+")",open, close+1, result );
    
    gen(n,par+"(",open+1, close, result );
}
vector<string> generateParenthesis(int n) {
    vector<string> result;
    if(!n)
        return result ;
    
    string par = "(";
    gen(n,par,1,0,result);
    return result;
    
 }
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);

 return 0;
}