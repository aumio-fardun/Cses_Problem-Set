#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
    ll n;  cin>>n;
 
    multiset<ll>bx;
    
    for(ll i=0;i<n;i++){
 
        ll num;  cin>>num;
 
        auto hi=bx.upper_bound(num);
 
        if(hi!=bx.end()){
 
            bx.erase(hi);
        }
 
        bx.insert(num);
    }
 
    cout<<bx.size()<<endl;
}
   
 
    
