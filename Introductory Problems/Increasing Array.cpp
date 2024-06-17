#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
     
     ll t=1;
 
     while(t--){
 
        ll n;  cin>>n;  ll tmp;  ll ct=0;
 
        if(n==1){
 
            ll z;  cin>>z;
 
            cout<<ct<<endl;  
 
            continue;
        }
 
        for(ll i=0;i<n;i++){
 
            ll num;  cin>>num;
 
            if(i==0){
 
                tmp=num;
                continue;
            }
 
            if(num<tmp){
 
                ct+=(tmp-num);
                num+=(tmp-num);
            }
 
            tmp=num;
        }
 
        cout<<ct<<endl;
    }
 
}
