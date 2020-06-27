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

int bin_search(vector<int> &array, int key, int start_index) // vector is similar to list/array
{
  int low = start_index, high = array.size() - 1;

  if (key > array[high])
  {
    return -1; // if key is bigger than the biggest element in the array
  }
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (array[mid] == key)
      return array[mid]; // return the element as we need greater than or equal too
    else if (array[mid] < key)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return -1;
  /*
  since the loop is running till low <= high, so at the end of while loop, 
  "low == high+1(terminating condition)", as we are not able to find the element
  in the array, so (low) will be pointing to the next gretest element than
  the key, which is technically what we need(next smallest element than the key)
  both are same 
  */
}
void sum_of_three(vector<int> &array, int target)
{
  int len = array.size() - 1;
  int first_element = 0, second_element = 0, third_element = 0;
  for (int i = 0; i <= len - 2; i++)
  {
    first_element = array[i];
    if (first_element >= target)
    {
      break; // because if the first value is greater
      // then obviously, we cant make a pair of 3,
      // to form the target value
    }
    for (int j = i + 1; j <= len - 1; j++)
    {
      second_element = array[j];
      if (first_element + second_element >= target)
      {
        break; // because if the first value + second value is greater
        // then obviously, we cant make a pair of 3,
        // to form the target value
      }

      int needed_third_element = target - (first_element + second_element); // if we need the third
      // element then, its target- sum of first two element

      third_element = bin_search(array, needed_third_element, j + 1);
      if (third_element == -1) // third element not found, continue the loop
        continue;

      else
      { // the third element found, so we can make a pair of threee
        cout << first_element << " " << second_element << " " << third_element << endl;
        return; // once the pair is found there is no need to process further
      }
    }
  }
  cout << "SUM OF THREE NOT FOUND";
}
int main()
{
  clock_t start, end;
  start = clock();
  ios::sync_with_stdio(0);
  cin.tie(0);
  file_input();
  int n, target;
  cin >> n >> target;
  vi arr(n);
  for (auto &it : arr)
    cin >> it;
  sum_of_three(arr, target);
  end = clock();
  cerr << "time taken : " << (double)(end - start) / CLOCKS_PER_SEC << " secs" << endl;
  return 0;
}