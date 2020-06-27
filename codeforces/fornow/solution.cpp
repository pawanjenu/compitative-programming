#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define ll long long
#define li long int
#define ld long double
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long>
#define vl vector<long>
#define vlli vector<long long int>
#define pii pair<int, int>
#define plli pair<lli, lli>
#define endl "\n"
#define mod 1000000000+7

void file_input() {
    if (freopen("input.txt", "r", stdin) and
        freopen("output.txt", "w", stdout))
        return;
}
lli smallestDivisor(lli n)
{

    if (n % 2 == 0)
        return 2;

    // iterate from 3 to sqrt(n)
    for (lli i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }

    return n;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
//    file_input();
    int t;
    cin >> t;


    lli n, k;

    while (t --){
//        unordered_map<lli, lli> exist;
        cin >> n >> k;
        if(n%2 == 0){
            n+= 2*k;
            cout << n<<endl;
        }
        else {
            while (k--) {
                n+=smallestDivisor(n);
                if(n%2 == 0)
                    break;
            }
            if(k!= 0)
                n+= k*2;
            cout << n << endl;
        }
    }
    return 0;
}