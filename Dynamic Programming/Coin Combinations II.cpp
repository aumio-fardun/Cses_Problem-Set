#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
    ll n,x;  cin>>n>>x;
 
    vector<ll>cns;
 
    ll mod=1e9 + 7;
 
    vector<ll>dp(x+1,0);
    dp[0]=1;
 
    for(ll i=0;i<n;i++){
 
        ll cn;  cin>>cn;
 
        cns.push_back(cn);
    }
    
    sort(cns.begin(),cns.end());
 
    for(ll coin : cns){
 
        for(ll i=1;i<=x;i++){
 
            if(coin>i){
                continue;
            }
 
            dp[i]=(dp[i]+dp[i-coin])%mod;
        }
    }
 
    cout<<dp[x]<<endl;
    
    
}
