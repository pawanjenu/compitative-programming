#include <bits/stdc++.h>
using namespace std;
bool is_opening(char ch) {
    return ch == '{' || ch == '(' || ch == '[';
  }
   bool isValid(string s) {
    stack<int> stk;
    unordered_map<char, char> m{{'}', '{'}, {']', '['}, {')', '('}};
    for (const auto& ch : s) {
      if (is_opening(ch)) {
        stk.push(ch);
      } else {
        if (stk.empty() || stk.top() != m[ch]) {
          return false;
        }
        stk.pop();
      }
    }
    return stk.empty();
  }
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
// cout <<"yo";
cout << isValid("()")<<endl;
cout << isValid("()[]{}")<<endl;
cout << isValid("(]")<<endl;

 return 0;
}