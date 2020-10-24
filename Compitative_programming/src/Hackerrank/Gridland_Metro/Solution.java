package Hackerrank.Gridland_Metro;

import java.awt.*;
import java.util.*;

public class Solution {
    static public class Pair implements Comparable<Pair>{
        int left, right;

        public Pair(int left, int right) {
            this.left = left;
            this.right = right;
        }

        @Override
        public int compareTo(Pair o) {
            if (this.left == o.left){
                return o.right-this.right;
            }
            return this.left - o.left;
        }
    }
    static long cal(Vector<Pair> a) {
        long r = 0;
        Pair track = a.get(0);
        for (int i=1; i<a.size(); i++) {
            Pair tmp = a.get(i);
            if (track.right < tmp.left) {
                r += track.right-track.left+1;
                track = tmp;
            } else {
                track.right = Math.max(track.right, tmp.right);
            }
        }
        r += track.right-track.left+1;
        return r;
    }
    
    static int gridlandMetro(int n, int m, int k, int[][] track) {
        Map<Integer, Vector<Pair>> tracks=new TreeMap<>();
        int total_box = n * m;
        for (int i = 0; i < k; i++) {
            int row = track[i][0];
            int left = track[i][1];
            int right = track[i][2];
            if (!tracks.containsKey(row))
                tracks.put(row,new Vector<>());
            tracks.get(row).add(new Pair(left,right));


        }
        for (Map.Entry<Integer,Vector<Pair>> each_pair: tracks.entrySet()){
            Vector<Pair> arr = each_pair.getValue();
            Collections.sort(arr);
            total_box -= cal(arr);
        }
        return total_box;
    }
}
