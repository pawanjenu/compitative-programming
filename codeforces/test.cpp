#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{ freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
    int d,sumt;
    cin>>d>>sumt;
    int mint[d],maxt[d];
    int maxi=0,mini=0;
    for (int i=0;i<d;i++)
    {
        cin>>mint[i]>>maxt[i];
        maxi=maxi+maxt[i];
        mini=mini+mint[i];
    }
    if (maxi<sumt || mini>sumt)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    for (int i=0;i<d;i++)
    {   cout <<sumt <<" "<<mini <<" "<<maxi<<" "<<mint[i]<<" "<<maxt[i]<<" ";
        maxi=maxi-maxt[i];
        mini=mini-mint[i];
        for (int j=mint[i];j<=maxt[i];j++)
        {
           if (maxi>=sumt-j && mini<=sumt-j)
           {
               cout<<j<<" ";
               sumt=sumt-j;
               break;
           }
        }
        cout <<endl;
    }
    cout<<endl;
    return 0;
}
 