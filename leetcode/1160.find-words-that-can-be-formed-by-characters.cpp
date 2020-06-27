/*
 * @lc app=leetcode id=1160 lang=cpp
 *
 * [1160] Find Words That Can Be Formed by Characters
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> chars_count;
        int ans = 0;

        for(auto it: chars){
            chars_count[it]++;
        }

        for(auto &each: words){
            unordered_map<char, int> temp(chars_count);
            bool flag = true;
            for(auto &letter: each){
                if(temp.count(letter)){
                    if(temp[letter] > 0){
                        temp[letter]--;
                    }
                    else{
                        flag = false;
                        break;
                    }
                }
                else{
                    flag = false;
                    break;
                }
                // temp[letter]--;
                // if(temp[letter] < 0){
                //     flag = false;
                // }
            }
            if(flag)
                ans+= each.length();

        }
        return ans;
    }
};
// @lc code=end

