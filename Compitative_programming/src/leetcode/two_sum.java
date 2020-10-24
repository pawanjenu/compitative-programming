package leetcode;

import java.util.HashMap;
import java.util.Map;

public class two_sum {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> prev= new HashMap<>();
        for (int i = 0; i < nums.length; i++){
            int diff = target-nums[i];

            if (prev.containsKey(diff)){
                return new int[]{prev.get(diff), i};
            }
            prev.put(nums[i],i);
        }
        return  new int[0];
    }
    public int[] runningSum(int[] nums) {
    int sum[] = new int[nums.length];
    if (nums.length  == 0)
        return sum;
    sum[0] = nums[0];
    for (int i = 1; i < nums.length; i++){
        sum[i] = nums[i]+ sum[i-1];
    }

    return sum;
    }
    public String removeVowels(String S) {
        StringBuffer res = new StringBuffer();
        for (int i = 0; i < S.length(); i++){
            if (!isvowel(S.charAt(i)))
                res.append(S.charAt(i));
        }
        return res.toString();
    }
    boolean isvowel(char c){
        c = Character.toLowerCase(c);
        switch (c){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':return true;
            default:
                return false;
        }
    }
    public static void main(String[] args) {

    }
}
