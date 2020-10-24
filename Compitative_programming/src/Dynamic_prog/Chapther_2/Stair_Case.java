package Dynamic_prog.Chapther_2;


import java.util.Arrays;

public class Stair_Case {
    int[] vis;
    int staircase(int n, int m){
        if(n == 0)
            return 1;
        if (vis[n] != -1)
                return vis[n];
        int ways = 0;
        for (int i = 1; i <= m; i++){
            if (n >= i) {
                ways += staircase(n - i, m);
            }
        }
        vis[n] = ways;
        return vis[n];
    }

    public static void main(String[] args) {
        Stair_Case stair_case = new Stair_Case();
        stair_case.vis = new int[5];
        Arrays.fill(stair_case.vis,-1);
        System.out.println(stair_case.staircase(4,2));
    }
}
