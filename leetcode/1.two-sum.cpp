// @before-stub-for-debug-begin

// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& a, int tgt) {
        
        unordered_map<int,int> m;
        
        for(int i=0 ; i<a.size(); i++)
        {
            int r = tgt - a[i];
            if(r+r == tgt and m[r])
                return {m[r]-1, i};
            if(m[r])
                return {m[r]-1 , i};
            m[a[i]] = i+1;                
        }
        
        return {};
    }
};
// @lc code=end

