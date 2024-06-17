#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
    ll n;  cin>>n;
 
    vector<ll>nums(n);
 
    for(ll i=0;i<n;i++){
 
        cin>>nums[i];
    }
 
    sort(nums.begin(),nums.end());
 
    ll rf=nums[n/2];
 
    ll sm=0;
 
    for(ll i=0;i<n;i++){
 
        sm+=abs(rf-nums[i]);
    }
 
    cout<<sm<<endl;
}
 
 
 
 
 
 
