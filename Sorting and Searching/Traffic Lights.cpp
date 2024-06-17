#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
    ll x,n;  cin>>x>>n;
 
    set<int>tl;
    multiset<int>rs;
    tl.insert(0);
    tl.insert(x);
    rs.insert(x);
 
    for(ll i=0;i<n;i++){
 
        ll pos;  cin>>pos;
 
        tl.insert(pos);
 
        auto it=tl.find(pos);
 
        ll l=*prev(it);
        ll r=*next(it);
 
        rs.insert(pos-l);
        rs.insert(r-pos);
 
        rs.erase(rs.find(r-l));
 
        cout<<*rs.rbegin()<<" ";
 
        
    }
}
   
 
    
