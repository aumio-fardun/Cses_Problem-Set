#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
   ll n,x;
 
   cin>>n>>x;  ll ct=0;
 
   vector<ll>wts;
 
   for(ll i=0;i<n;i++){
 
    ll num;  cin>>num;
 
   wts.push_back(num);
 
   }
 
   sort(wts.begin(),wts.end());
 
 
   ll i=0;
   ll j=n-1;
 
   while(i<j){
 
     ll t=x-wts[i];
 
     while(wts[j]>t){
 
      j--;
 
     }
 
     if(i<j){
 
     ct++;
   }
 
     i++;
     j--;
   }
 
   cout<<n-ct<<endl;
 
}
