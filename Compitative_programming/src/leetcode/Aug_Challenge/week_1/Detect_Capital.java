package leetcode.Aug_Challenge.week_1;

public class Detect_Capital {
}
class Solution {
    public boolean detectCapitalUse(String word) {
        if (word.toLowerCase().equals(word))
            return true;
        else if (word.equals(word.toUpperCase()))
            return true;
        else if (Character.isUpperCase(word.charAt(0)) && word.substring(1).toLowerCase().equals(word.substring(1)))
            return true;
        else
            return false;
    }
}
