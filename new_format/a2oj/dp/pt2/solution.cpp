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

    bool solvable(vector<int>& v,int diff,int K){
     
        int n=v.size();
        int prev=0;
        int removed=0;
        for(int i=1;i<n;i++){
            if(i==n-1 || v[i+1]-v[prev]>diff || removed==K){
                if(v[i]-v[prev]>diff)return false;
                prev=i;
            }
            else removed++;
        }
        return (removed==K);        
    }
    
    int minDiff(vector<int> v,int K){
        
        int hi=v.back()-v[0];
        int lo=0;
        
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(solvable(v,mid,K))hi=mid;
            else lo=mid+1;
        }
        return lo;        
    }


int main(void){
    
    file_input();
    
    cout<<minDiff({1,2,3,7,8},2)<<endl;// answer=24
    cout<<minDiff({1,2,5,10,12,20,25},2)<<endl;// answer=8, remove 2 and 10
    
    return 0;
}