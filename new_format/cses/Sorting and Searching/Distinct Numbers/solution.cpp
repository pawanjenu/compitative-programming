#include <bits/stdc++.h>
using namespace std;
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
 int num;
 cin >> num;
 vector<long long> arr(num);
 for (int i = 0; i < num; i++)
 {
     cin >> arr[i];
 }
 sort(arr.begin(), arr.end());
int temp = arr[0];
int count = 1;
 for(int i = 1; i < num; i++){
     if(arr[i] != temp){
         count++;
         temp = arr[i];
     }
 }
 cout << count;
 


 return 0;
}