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
#define mod 1000000000 + 7

void file_input()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
  return;
}

int MaxSumSubArray(vector<int> arr, int k)
{
  int windowSum = 0, maxSum = 0;
  int windowStart = 0;
  for (int windowEnd = 0; windowEnd < arr.size(); windowEnd++)
  {
    windowSum += arr[windowEnd]; // add the next element
    // slide the window, we don't need to slide if we've not hit the required window size of 'k'
    if (windowEnd >= k - 1)
    {
      maxSum = max(maxSum, windowSum);
      windowSum -= arr[windowStart]; // subtract the element going out of window
      windowStart++;                 // slide the window ahead
    }
  }

  return maxSum;
}

int main()
{
  clock_t start, end;
  start = clock();
  ios::sync_with_stdio(0);
  cin.tie(0);
  file_input();

  end = clock();
  cerr << "time taken : " << (double)(end - start) / CLOCKS_PER_SEC << " secs" << endl;
  return 0;
}
