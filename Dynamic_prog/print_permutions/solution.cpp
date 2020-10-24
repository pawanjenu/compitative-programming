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
        freopen("output.txt", "w", stdout)
        and freopen("error.txt", "w", stderr))
        return;
}

vector<bool> chosen;
void str_per(string str, string curr){
    if (curr.length() == str.length()){
        cout << " ans: "<<curr<<endl;
    }
    for (int i = 0; i < str.length(); ++i) {
        if (chosen[i]) {
            continue;
        }

        chosen[i] = true;
        curr.push_back(str[i]);
        str_per(str,curr);
        curr.pop_back();
        chosen[i] = false;
        cout <<endl;

    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    chosen.resize(3, false);
//    str_per("abc","");
    cout <<"sup";
    return 0;
}