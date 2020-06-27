#include <bits/stdc++.h>
using namespace std;

bool solve(string &num){
    int len = num.length();
    for(int i = 1; i < len; i++){
        int a = num[i]-'0';
        int b = num[i-1] - '0';
        if(abs(a-b) == 1)
            return false;
    }
    return true;
}
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
 long n;
 cin >> n;
 if(n == 1){
     cout << 1;
     return 0;
 }
 else if(n < 4){
     cout <<"NO SOLUTION\n";
     return 0;
 }
 else if(n == 4){
     cout <<"3 1 4 2 \n";
     return 0;
 }
 else{

     for(int i = 1; i <= n; i+=2)
        cout << i<<" ";

    for(int i = 2; i <=n; i+=2){
        cout <<i <<" ";

    }
 }

 return 0;
}