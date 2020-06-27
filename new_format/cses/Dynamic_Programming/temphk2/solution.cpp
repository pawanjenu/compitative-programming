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

void file_input(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    return ;
}

bool solvable(vector<int>& vec, int diff, int K){

    int len=vec.size();
    int prv=0;
    int isremoved=0;
    for(int i=1; i < len; i++){
        if(i == len - 1 || vec[i + 1] - vec[prv] > diff || isremoved == K){
            if(vec[i] - vec[prv] > diff)return false;
            prv=i;
        }
        else isremoved++;
    }
    return (isremoved == K);
}

int minDiff(vector<int> vec, int K){

    int high= vec.back() - vec[0];
    int low=0;

    while(low < high){
        int mid= (low + high) / 2;
        if(solvable(vec, mid, K))high=mid;
        else low= mid + 1;
    }
    return low;
}


int main(void){

    file_input();

    cout<<minDiff({1,2,3,7,8},2)<<endl;// answer=24
    cout<<minDiff({1,2,5,10,12,20,25},2)<<endl;// answer=8, remove 2 and 10

    return 0;
}