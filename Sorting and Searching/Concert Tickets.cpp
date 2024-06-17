#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
   ll n,m;
 
   cin>>n>>m;
 
   multiset<ll>tkts;
 
   for(ll i=0;i<n;i++){
 
      ll t;  cin>>t;
 
      tkts.insert(t);
   }
 
   while(m--){
 
      ll o ;  cin>>o;
 
      auto pp =tkts.upper_bound(o);
 
      if(pp==tkts.begin()){
 
         cout<<-1<<endl;
      }
 
      else{
 
         cout<<*(--pp)<<endl;
 
         tkts.erase(pp);
      }
   }
}
