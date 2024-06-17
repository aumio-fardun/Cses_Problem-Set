#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
   ll n,a,b;
 
   cin>>n;  map<ll,ll>bx;  ll res=0;  ll s=0;
 
   while(n--){
 
      cin>>a>>b;
 
      bx[a]++;
      bx[b]--;
   }
 
   for(auto o:bx){
 
      s+=o.second;
 
      res=max(res,s);
   }
 
   cout<<res<<endl;
 
}
