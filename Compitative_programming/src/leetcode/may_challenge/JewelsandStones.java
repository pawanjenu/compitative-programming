package leetcode.may_challenge;

import java.sql.SQLOutput;
import java.util.*;

class Testclass{
    int solve(String s,int n){
        int hashset[] = new int[26];
        int i;
        for(i = 0; i < n; i++){
            hashset[s.charAt(i) - 'a']++;
        }
        int maxf = Integer.MIN_VALUE;
        for (i = 0; i < 26; i++){
            maxf = Integer.max(maxf,hashset[i]);
        }
        if(n%2 == 0){
            if(maxf > n/2){
                int matches = maxf - (n / 2);
                matches *= 2;
                int ans = n - matches;
                return ans;
            }
            else
                return n;
        }
        else {
            if(maxf > (n / 2) + 1){
                int matches = maxf - ((n / 2) + 1);
                matches *= 2;
                matches++;
                return (n - matches);
            }
            else{
                return (n - 1);
            }
        }
    }
    public static void main(String[] args) {
        Testclass obj = new Testclass();
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0){
            int n = sc.nextInt();
            String s = sc.next();
//            System.out.println(j.solve(s,n));
        }
    }
}

public class JewelsandStones {
    public int numJewelsInStones(String J, String S) {
        char jarray[] = J.toCharArray();
        char sarray[] = S.toCharArray();
        Arrays.sort(jarray);
        Arrays.sort(sarray);
        int i = 0, j = 0, count = 0;
        while (i < J.length() && j < S.length()){
            if (sarray[j] < jarray[i])
                j++;
            else if (jarray[i] == sarray[j]){
                count++;
                j++;
            }
            else {
                i++;
            }
        }
        return count;
    }
    public int numJewelsInStones1(String J, String S){

        Set<Character> jewles = new HashSet<Character>();
        for (int i = 0; i < J.length(); i++){
            jewles.add(J.charAt(i));
        }
        int count = 0;
        for (int i = 0; i < S.length(); i++){
            if (jewles.contains(S.charAt(i)))
                count++;
        }
        return count;
    }


}
