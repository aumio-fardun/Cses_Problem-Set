#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
    ll n,x;  cin>>n>>x;
 
    vector<ll>dp(x+1,-1);
    dp[0]=0;
 
    vector<ll>cns; 
 
    for(ll i=0;i<n;i++){
 
        ll cn;  cin>>cn;  cns.push_back(cn); 
    }
    sort(cns.begin(),cns.end());
 
    for(ll i=1;i<=x;i++){
 
        ll cm=INT_MAX; bool sm=false;
        for(ll c:cns){
            if(c>i) break;
            if(dp[i-c]>-1){
                sm=true;
            cm=min((1+dp[i-c]),cm);
            dp[c]=1;
        }
    }
 
    if(sm){
            dp[i]=cm;
        }
}
 
cout<<dp[x]<<endl;
 
}
   
 
    
 
 
 
 
 
