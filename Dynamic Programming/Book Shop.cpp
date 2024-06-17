#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
    ll n,x;  cin>>n>>x;
 
    vector<ll>dp(x+1,0);
 
    vector<ll>pgs(n);  vector<ll>prcs(n);
 
    for(ll i=0;i<n;i++){
        cin>>prcs[i];
    }
    for(ll i=0;i<n;i++){
        cin>>pgs[i];
    }
 
    for(ll i=0;i<n;i++){
 
        for(ll j=x;j>=prcs[i];j--){
            dp[j]=max(dp[j],(pgs[i]+dp[j-(prcs[i])]));
        }
    }
 
    cout<<dp[x]<<endl;
}
 
   
 
    
