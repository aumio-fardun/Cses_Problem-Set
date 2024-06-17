#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
    ll n;  cin>>n;
 
    map<ll,ll>bx;
 
    for(ll i=1;i<=n;i++){
 
        ll num;  cin>>num;
 
        bx[num]=i;
    }
 
    ll ct=0;
 
    bx[n+1]=0;
 
    for(auto gg:bx){
 
        if(gg.second>bx[gg.first+1]){
 
            ct++;
        }
 
        if(gg.first==n){
            break;
        }
    }
 
    cout<<ct<<endl;
 
   
}
 
 
 
 
 
