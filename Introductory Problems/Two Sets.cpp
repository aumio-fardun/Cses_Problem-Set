#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
     
     ll t=1;  
 
     while(t--){
 
          ll n; cin>>n;  vector<ll>l;  vector<ll>r;  bool mk=true;
 
          if(n%2){
 
               if(((n-3)/2)%2){
 
                    cout<<"NO"<<endl;
 
                    continue;
               }
 
               l.push_back(1);
               l.push_back(2);
               r.push_back(3);
          }
 
          else{
 
               if((n/2)%2){
 
                    cout<<"NO"<<endl;
 
                    continue;
               }
          }
 
          cout<<"YES"<<endl;
 
          ll lf=1;  ll rt=n;
          if(n%2){
 
               lf+=3;
          }
 
          while(lf<rt){
               
               if(mk){
 
                    l.push_back(lf);
                    l.push_back(rt);
 
                    mk=false;
               }
 
               else{
 
                    r.push_back(lf);
                    r.push_back(rt);
 
                    mk=true;
               }
 
               lf++;
               rt--;
          }
 
          cout<<l.size()<<endl;
 
          for(ll h: l){
 
               cout<<h<<" ";
          }
 
          cout<<endl;
 
          cout<<r.size()<<endl;
 
          for(ll d: r){
 
               cout<<d<<" ";
          }
 
          cout<<endl;
}
 
}
