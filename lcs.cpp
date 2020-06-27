#include <bits/stdc++.h>
using namespace std;
string a, b;
int n, m;
int lcs(int i,int j){
    if(i == 0 || j == 0){
        if(a[i] == b[j])
            return 1;
        else
            return 0;
    }
        
    else if(a[i] == b[j])
        return 1+ lcs(i-1, j-1);

}
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 
 cin >> a >> b;
 cout << lcs(a.size()-1,b.size()-1);

 return 0;
}