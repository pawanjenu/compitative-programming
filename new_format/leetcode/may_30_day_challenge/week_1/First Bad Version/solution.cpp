// The API isBadVersion is defined for you.

#include <bits/stdc++.h>
using namespace std;
// bool isBadVersion(int version);
class Solution
{
public:
    int firstBadVersion(int n)
    {
        int start = 1;
        int end = n;

        int value = 0;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (isBadVersion(mid))
            {
                value = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        return value;
    }
};