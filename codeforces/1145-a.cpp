#include <bits/stdc++.h>
using namespace std;
int works(int arr[], int l, int r){
    if(is_sorted(arr+l, arr+r+1))
        return r-l+1;
    

        return max(works(arr,l,(l+r)/2), works(arr,((l+r)/2 +1), r));
}
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 int n;
 cin >> n;
 int arr[n];
 for(int i = 0; i < n; i++)
    cin >> arr[i];
cout << works(arr,0,n-1);


 return 0;
}