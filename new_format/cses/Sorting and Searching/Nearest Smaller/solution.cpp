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

void file_input(){
    if(freopen("input.txt", "r", stdin) and 
    freopen("output.txt", "w", stdout))
        return;
}
bool cmp(const int a, const int b){
    return a > b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    stack<int> st;
    for(int i = 0; i < n; i++){
        
        while(!st.empty() and arr[st.top()] >= arr[i]){
            st.pop();
        }
        if(st.empty())
            cout <<"0 ";
        else{
            cout << st.top()+1<<" ";
        }
        st.push(i);
    }

 return 0;
}