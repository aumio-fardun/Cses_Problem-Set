#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
  ll n;  cin>>n;
 
  vector<ll>nums(n);
 
  for(ll i=0;i<n;i++){
 
   cin>>nums[i];
 
  }
 
  ll tmp_sm=0;
 
  ll res=INT_MIN;
 
  for(ll h:nums){
 
   tmp_sm+=h;
 
   if(tmp_sm>res){
 
      res=tmp_sm;
   }
 
   if(tmp_sm<0){
 
      tmp_sm=0;
   }
 
  }
 
   cout<<res<<endl;
}
 
 
