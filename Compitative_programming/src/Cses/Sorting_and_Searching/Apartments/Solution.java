package Cses.Sorting_and_Searching.Apartments;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;


public class Solution {
    static class FastScanner {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer("");

        String next() {
            while (!st.hasMoreTokens())
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        int[] readintArray(int n) {
            int[] a = new int[n];
            for (int i = 0; i < n; i++) a[i] = nextInt();
            return a;
        }
        long[] readlongArray(int n) {
            long[] a = new long[n];
            for (int i = 0; i < n; i++) a[i] = nextLong();
            return a;
        }
        long nextLong() {
            return Long.parseLong(next());
        }
    }

    public static void main(String[] args) {
        FastScanner in = new FastScanner();
        int n, m, k;
        n = in.nextInt();
        m = in.nextInt();
        k = in.nextInt();
        long applicants[] = in.readlongArray(n);
        long apartment[] = in.readlongArray(m);
        Arrays.sort(applicants);
        Arrays.sort(apartment);
        int i = 0, j = 0, count = 0;
        while (i < n && j < m){
            if (Math.abs(applicants[i]-apartment[j]) <= k){
                count++; i++; j++;
            }
            else if(applicants[i] > apartment[j])
                j++;
            else
                i++;
        }
        System.out.println(count);
    }
}

