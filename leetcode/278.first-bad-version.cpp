/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */

// @lc code=start
// The API isBadVersion is defined for you.

#include <bits/stdc++.h>
using namespace std;
bool isBadVersion(int );
class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1, end = n;
        int mid = 0;

        while(start < end){
             mid = start+(end - start)/2;
            if( isBadVersion(mid)){
                end = mid;
            }
            else{
                start = mid+1;
            }
        }
        return start;
    }
};
// @lc code=end

