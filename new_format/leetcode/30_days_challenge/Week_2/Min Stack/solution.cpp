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
#define mod 1000000000 + 7

void file_input()
{
    if (freopen("input.txt", "r", stdin) and
        freopen("output.txt", "w", stdout))
        return;
}
class MinStack
{
public:
    /** initialize your data structure here. */
    // priority_queue<int, greater<int>()> que;
    stack<int> st;
    stack<int> min_st;

    MinStack()
    {
    }

    void push(int x)
    {
        if (min_st.empty() || x <= min_st.top())
            min_st.push(x);
        st.push(x);
    }

    void pop()
    {
        if (st.top() == min_st.top())
            min_st.pop();
        st.pop();
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return min_st.top();
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();

    return 0;
}