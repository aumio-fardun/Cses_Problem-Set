#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
    ll n;  cin>>n;
 
    ll mod=1e9 + 7;
 
    vector<vector<char>>grid(n,vector<char>(n));
 
    vector<vector<ll>>dp(n,vector<ll>(n,0));
    
    ll ct=0;
 
    for(ll i=0;i<n;i++){
 
        for(ll j=0;j<n;j++){
 
            cin>>grid[i][j];
        }
    }
    if(grid[0][0]=='.'){
        dp[0][0]=1;
 
    }
 
    for(ll i=0;i<n;i++){
 
        for(ll j=0;j<n;j++){
 
            if(grid[i][j]=='*'){
                continue;
            }
 
            if(i==0 and j==0){
                continue;
            }
 
            if(j==0){
                
                dp[i][j]=dp[i-1][j]%mod;
                continue;
                
            }
 
            if(i==0){
                
                dp[i][j]=dp[i][j-1]%mod;
                
                    continue;
                }
            
 
            dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
        }
    }
 
    cout<<dp[n-1][n-1]<<endl;
}
 
   
 
    
 
 
 
 
 
 
 
 
