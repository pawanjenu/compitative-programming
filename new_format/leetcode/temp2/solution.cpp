#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define si(x) scanf("%d", &x)
#define sc(x) scanf("%c", &x)
#define sl(x) scanf("%lld", &x)
#define pl(x) printf("%lld\n", x)
#define pi(x) printf("%d\n", x)
#define gu getchar_unlocked
#define pu putchar_unlocked
#define setbits __builtin_popcountll
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define speed ios::sync_with_stdio(false)

int main(){
	int t;
	si(t);
	while(t--){
		int n, i;
		si(n);
		string s;
		cin>>s;
		int hasharr[26] = {};
		for(i = 0; i < n; i++){
			hasharr[s[i] - 'a']++;
		}
		int maxf = INT_MIN;
		for(i = 0; i < 26; i++){
			maxf = max(maxf, hasharr[i]);
		}
		if(n % 2 == 0){
			if(maxf > n / 2){
				int matches = maxf - (n / 2);
				matches *= 2;
				int ans = n - matches;
				pi(ans);
			}
			else{
				pi(n);
			}
		}
		else{
			if(maxf > (n / 2) + 1){
				int matches = maxf - ((n / 2) + 1);
				matches *= 2;
				matches++;
				pi(n - matches);
			}
			else{
				pi(n - 1);
			}
		}
	}
}
