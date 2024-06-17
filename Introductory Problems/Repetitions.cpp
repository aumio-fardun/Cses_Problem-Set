#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
     
     ll t=1;
 
     while(t--){
 
      string s;  cin>>s;  ll rs=0;  ll ct=0;  char tmp;
 
      if(s.length()==1){
 
        cout<<1<<endl;
 
        continue;
      }
 
      for(ll i=0;i<s.length();i++){
 
        if(i==0){
 
            ct++; tmp=s[i]; continue;
        }
 
        if(s[i]==tmp){
 
            ct++;
 
            if(i==s.length()-1){
 
                rs=max(rs,ct);
            }
        }
 
        else{
 
            rs=max(rs,ct);
            ct=1;
            tmp=s[i];
        }
 
        
    }
 
    cout<<rs<<endl;
    }
 
