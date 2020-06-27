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
using ii = tuple<int, int>;
using vii = vector<ii>;

void file_input(){
    if(freopen("input.txt", "r", stdin) and 
    freopen("output.txt", "w", stdout))
        return;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
  int k, l, n, x, y, z;
  cin >> n >> x;
  vector<pii> a(n);
  for (int i = 0; i < n; i++) {
    cin >> y;
    a[i] = {y, i + 1};
  }
  sort(a.begin(), a.end());
  for (int i = 0; i < n - 2; i++) {
    tie(k, y) = a[i];
    if (k >= x) break;
    for (int j = i + 1; j < n - 1; j++) {
      tie(l, z) = a[j];
      if (k + l >= x) break;
      auto it = lower_bound(&a[j + 1], &a[n], make_pair(x - (k + l), 0));
      if (k + l + get<0>(*it) != x) continue;
      cout << y << " " << z << " " << get<1>(*it) << "\n";
      return 0;
    }
  }
  cout << "IMPOSSIBLE\n";
  return 0;
}
