#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
    ll n;  cin>>n;
 
    vector<ll>nums(n); ll tmp;  ll ct=0;
 
    for(ll i=0;i<n;i++){
        
        cin>>nums[i];
    }
 
    sort(nums.begin(),nums.end());
 
    for(ll i=0;i<n;i++){
 
        if(i==0){
 
            tmp=nums[i];
            ct++;
            continue;
        }
 
        if(tmp!=nums[i]){
 
            ct++; 
            tmp=nums[i];
 
            continue;
        }
    }
 
    cout<<ct<<endl;
}
 
