#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
     
     ll t=1;
 
     while(t--){
 
        ll n;  cin>>n;
 
        if(n==1){
 
            cout<<1<<endl;
 
            continue;
        }
 
        if(n<4){
 
            cout<<"NO SOLUTION"<<endl; 
            continue;
        }
 
        vector<ll>odd;  vector<ll>ev;  n++;
 
        while(n--){
 
            if(n==0){
 
                continue;
            }
 
            if(n%2){
 
                odd.push_back(n);
            }
 
            else{
 
                ev.push_back(n);
            }
        }
 
        for(ll o:odd){
 
            cout<<o<<" ";
        }
 
        for(ll e:ev){
 
            cout<<e<<" ";
        }
 
        cout<<endl;
}
 
