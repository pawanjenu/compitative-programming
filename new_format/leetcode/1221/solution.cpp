#include <bits/stdc++.h>
using namespace std;

int balancedStringSplit(string s) {
        int temp = 0;
        int res = 0;

        for(auto it: s){
            if(it == 'L'){
                temp++;
            }
            else
                temp--;

            if(!temp)
                res++;
        }

        return res;
    }
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 string s;
 cin >> s;
 cout << balancedStringSplit(s);

 return 0;
}