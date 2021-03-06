#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string s, char del)
{
  vector<string> tokens;

  stringstream check1(s);

  string intermediate;
  while (getline(check1, intermediate, del))
  {
    tokens.push_back(intermediate);
  }
  return tokens;
}
bool isAlphabet(char x)
{
  return ((x >= 'A' && x <= 'Z') ||
          (x >= 'a' && x <= 'z'));
}
string reverse(string str)
{
  int r = str.length() - 1, l = 0;

  while (l < r)
  {

    if (!isAlphabet(str[l]))
      l++;
    else if (!isAlphabet(str[r]))
      r--;

    else
    {
      swap(str[l], str[r]);
      l++;
      r--;
    }
  }
  return str;
}
string reverse_each_str(string s)
{
  string final_ans = "";
  vector<string> each_word;
  each_word = split_string(s, ' ');
  for (int i = 0; i < each_word.size(); i++)
  {

    string res = reverse(each_word[i]);
    final_ans += res;
    if (i != each_word.size() - 1)
    {
      final_ans += ' ';
    }
  }
  return final_ans;
}
int main()
{
  // cout << reverse_each_str("Updated Field$$ with ABC$D#BB");

  int i = 10;

  while(++i){
    cout << i;
    break;
  }
  return 0;
}
