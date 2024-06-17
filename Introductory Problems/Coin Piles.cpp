#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
     
     ll t;  cin>>t; 
 
     while(t--){
 
          ll a,b;  cin>>a>>b;
 
          if(max(a,b)>2*min(a,b)){
 
               cout<<"NO"<<endl;
 
               continue;
          }
 
          if((a+b)%3==0){
 
               cout<<"YES"<<endl;
 
               continue;
          }
 
          cout<<"NO"<<endl;
}
 
}
