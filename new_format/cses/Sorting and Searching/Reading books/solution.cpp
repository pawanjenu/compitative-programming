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

void file_input(){
    if(freopen("input.txt", "r", stdin) and 
    freopen("output.txt", "w", stdout))
        return;
}
lli solve(vector<lli> arr, lli max_val, lli target, lli sum)
{
	  lli left = 0, right = sum*2+1, curr_time = 0, mid, ans = 0;

    while(left <= right){
        cout <<left <<" "<<right<<endl;
        mid = (left+right)/2;
        curr_time = 0;
        // cout << mid<<endl;
        for(const auto & it: arr){
            curr_time+= mid/it;
        }
        if(curr_time >= 2){
            ans = mid;
            right = mid-1;
        }
        else{
            left = mid+1;
        }
 
    }
    return ans;
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // file_input();
    
	  ll n, x, m = 0, s = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    m = max(m, x);
    s += x;
  }
  cout << (m > (s - m) ? 2 * m : s) << endl;


 return 0;
}