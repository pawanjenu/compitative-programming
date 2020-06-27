#include <bits/stdc++.h>
using namespace std;


    bool isHappy(int n) {
        if(n == 1)
            return true;

        else{

            int rem = 0;
            while(true){
            while(n){
                int temp = n%10;
                rem+= temp*temp;
                n/=10;
            }
            n = rem;
            if(n == 1)
                true;

            if (n<100 && (n%10==5) || (n/10==5)) return false;
            rem=0;

            }

        }
    }

 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);

 return 0;
}