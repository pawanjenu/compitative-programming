package leetcode.may_challenge;

public class FirstBadVersion {
    boolean isBadVersion(int version){
        return true;
    }
    public int firstBadVersion(int n) {
        int low = 1, high = n;

        while (low < high){
            int mid = high+(high-low)/2;
            if(isBadVersion(mid))
                high = mid-1;
            else
                low = mid+1;
        }
        return low;
    }
}
