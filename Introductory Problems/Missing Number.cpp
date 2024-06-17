#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
      ll n;  cin>>n;
 
      vector<bool>bx(n+1,true);
 
      for(ll i=1;i<n;i++){
 
        ll num;  cin>>num;
 
        bx[num]=false;
      }
 
      for(ll i=1;i<=n;i++){
 
        if(bx[i]){
 
            cout<<i<<endl;
 
            break;
        }
      }
