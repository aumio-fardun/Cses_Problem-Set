#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
   ll n,x;  cin>>n>>x;
   
   unordered_map<ll,pair<bool,ll>>bx;
 
   bool mk=true;
 
   for(ll i=1;i<=n;i++){
 
      ll num;  cin>>num;
 
      if(num>=x){
 
         continue;
      }
 
      if(2*num==x and bx[num].first and mk){
 
         cout<<i<<" "<<bx[num].second<<endl;
 
         mk=false;
      }
 
      bx[num].first=true;
 
      bx[num].second=i;
 
      if(bx[x-num].first and mk){
 
         if(bx[num].second!=bx[x-num].second){
 
            cout<<bx[num].second<<" "<<bx[x-num].second<<endl;
 
            mk=false;
         }
 
   }
 
   }
 
   if(mk){
 
      cout<<"IMPOSSIBLE"<<endl;
   }
}
 
 
 
 
 
 
 
   
