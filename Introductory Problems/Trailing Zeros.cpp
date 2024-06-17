#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
     
     ll t=1;  
 
     while(t--){
 
          ll n;  cin>>n;   ll ct=0;
 
          n-=(n%5);
 
          while(n>=5){
 
               ll tmp=n;
 
               while(tmp%5==0){
 
                    ct++;
                    tmp/=5;
 
               }
 
               n-=5;
          }
 
          cout<<ct<<endl;
}
 
}
