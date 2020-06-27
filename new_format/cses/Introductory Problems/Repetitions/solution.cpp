#include <bits/stdc++.h>
using namespace std;
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
 string word;
 cin >> word;
 int len = word.length();
//  sort(word.begin(), word.end());
int temp = 1, maxlen = -1;
 for(int i = 0; i < len-1; i++){
      if(word[i]!= word[i+1]){
        //   cout <<"#if"<<word[i]<<" "<<word[i+1]<<" temp";
         maxlen = max(temp, maxlen);
         temp = 1;
     }
     
     else if(word[i]== word[i+1]){

        temp++;
        // cout <<"#else"<<word[i]<<" "<<word[i+1]<<" temp";
     }
    //  cout <<endl;
 }
 maxlen = max(temp, maxlen);
 cout << maxlen;

 return 0;
}