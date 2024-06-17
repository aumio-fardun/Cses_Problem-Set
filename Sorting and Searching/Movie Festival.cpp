#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
   ll n;  cin>>n;
 
   vector<ll>end;  unordered_map<ll,ll>str;
   ll ct=0;  ll tmp;
   
   while(n--){
 
      ll a,b;  cin>>a>>b;
 
      end.push_back(b);
 
      if(str[b]>0){
 
         str[b]=max(a,str[b]);
         continue;
      }
 
      str[b]=a;
   }
 
   sort(end.begin(),end.end());
 
   for(ll i=0;i<end.size()-1;i++){
 
      if(i==0){
 
         tmp=end[i];
         ct++;
      }
 
      if(str[end[i+1]]>=tmp){
 
         tmp=end[i+1];
         ct++;
      }
   }
 
   cout<<ct<<endl;
}
 
 
