#include<bits/stdc++.h>
using namespace std;
 
typedef long long int  ll;
#define mod 1000000007
#define test long long int T; cin>>T;  while(T--)
#define fc(da,db) if(abs(da-db) < le-9)
#define pi pair<ll,ll>
#define pb push_back
#define mk make_pair
#define eb emplace_back
 
 
 
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin>>a>>b;
    int m=a.length(),n=b.length();
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++){
    	for(int j=0;j<=n;j++){
    		if(i==0)
    			dp[i][j]=j;
    		else if(j==0)
    			dp[i][j]=i;
    		else if(a[i-1]==b[j-1])
    			dp[i][j]=dp[i-1][j-1];
    		else
    			dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));		 
    	}
     
    }
    cout<<dp[m][n];
 
     
    return 0; 
}
 











