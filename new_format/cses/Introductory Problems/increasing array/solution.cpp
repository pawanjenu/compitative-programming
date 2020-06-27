#include <bits/stdc++.h>
using namespace std;
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

 long long n;
 cin >> n;
 long long arr[n];
 long long temp, count = 0;
 for (long long i = 0; i < n; i++)
 {
     cin >> arr[i];
     if(i!= 0){
        //  cout << arr[i-1] <<" "<< arr[i]<<" ";
         if(arr[i] < arr[i-1]){

             temp = abs(arr[i]-arr[i-1]);
             count+=temp;
            //  cout << temp<<" "<<count<<endl;
             arr[i] += temp;
         }
     }
 }
 cout << count;
 

 return 0;
}