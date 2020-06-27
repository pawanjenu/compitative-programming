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
#define endl "\n"  

void file_input(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
      lli n;
    lli target;
    cin >> n >> target;
    vlli arr(n);
    lli maxele = -1;
    for(lli i = 0; i < n; i++){
        cin >> arr[i];
        maxele= max(maxele, arr[i]);
    }

    lli left = 0, right = maxele*target+1, curr_time = 0, mid, ans = 0;
    while(left <= right){
        mid = (left+right)/2;
        curr_time = 0;

        for(const auto & it: arr){
            curr_time+= mid/it;
        }
        if(curr_time >= target){
            ans = mid;
            right = mid+1;
        }
        else{
            left = mid-1;
        }

    }
    cout << ans;
 return 0;

 return 0;
}