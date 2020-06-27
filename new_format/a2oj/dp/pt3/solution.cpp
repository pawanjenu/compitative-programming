#include<bits/stdc++.h>
using namespace std;

void solve(vector<pair<int,string>> arr,int n){
	int r=0,c=0;
	int down=0,right=0;
	for (int i = 0; i < n; ++i)
	{
		pair<int,string> movement = arr[i];
		int a = arr[i].first;
		if(movement.second[0] == 'S')down+=a;
		if(movement.second[0] == 'E')right+=a;		
		
		if(movement.second.length()>1){
			if(movement.second[1] == 'S')down+=a;
			if(movement.second[1] == 'E')right+=a;
		}
	}
	vector<vector<char>> dp(down+1,vector<char>(right+1,' '));
	arr[0].first-=1;
	int i=0;
	string s = arr[0].second;
	if(s=="S")dp[0][0] = '|';
	else if(s=="E")dp[0][0]='-';
	else dp[0][0] = '\\';
	if(arr[0].first==0)i+=1;
	for(;i<n;i++)
	{
		int a = arr[i].first;string s = arr[i].second;
		while(a--)
		{

			if(s=="N"){r--;dp[r][c] = '|';}
			else if(s=="E"){c++;dp[r][c] = '-';}
			else if(s=="W"){c--;dp[r][c] = '-';}
			else if(s=="S"){r++;dp[r][c] = '|';}
			else if(s == "NE"){c++;r--;dp[r][c] = '/';}
			else if(s == "NW"){r--;c--;dp[r][c] = '\\';}
			else if(s == "SE"){r++;c++;dp[r][c] = '\\';}
			else {r++;c--;dp[r][c] = '/';} 
		}
	}


	for(int i=0;i<dp.size();i++)
	{
		for(int j=0;j<dp[0].size()+1;j++)
			{
				if(j==dp[0].size())cout<<"|";
				else if(j==0)cout<<"|"<<dp[i][j];
				else cout << dp[i][j];
			}
		cout << endl;
	}
  

}

void file_input(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
return ;
}
int main(){
  file_input();
	int n;
	cin>>n;
	vector<pair<int,string>> arr;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		string s;
		cin>>s;
		arr.push_back({a,s});
	} 
	solve(arr,n);

}