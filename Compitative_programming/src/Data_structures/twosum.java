package Data_structures;

import java.util.Arrays;

public class twosum {
    int[] twosum(int[]ary, int target){
        Arrays.sort(ary);
        int[] result = new int[2];
        for (int i = 0; i < ary.length-1; i++){
            if (i >= target) break;
            int diff = target-ary[i];
            int pair = Arrays.binarySearch(ary,i+1,ary.length,diff);
            if (pair < 0)
                continue;
            result = new int[]{ary[i], diff};
            return result;
        }

        return result;
    }

    public static void main(String[] args) {
        twosum twosum = new twosum();
        System.out.println(Arrays.toString(twosum.twosum(new int[]{1, 21, 3, 14, 5, 60, 7, 6}, 25)));
    }
}
