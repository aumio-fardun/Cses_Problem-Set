#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
     
          string s;  cin>>s;
 
          unordered_map<char,ll>gg;  ll ct=0;  char tmp;
 
          string res(s.length(),' ');
 
          for(ll i=0;i<s.length();i++){
 
               gg[s[i]]++;
 
          }
 
          ll i=0;  ll j=s.length()-1;
 
          for(auto g:gg){
 
               if(g.second%2){
 
                    ct++;
 
                    tmp=g.first;
 
                    g.second--;
 
                    if(s.length()%2){
 
                    if(ct>1){
 
                         cout<<"NO SOLUTION"<<endl;
 
                         break;
                    }
               }
 
               else{
 
                    if(ct>0){
 
                         cout<<"NO SOLUTION"<<endl;
 
                         break;
                    }
               }
          }
 
          while(g.second>0){
 
               res[i]=g.first;
               res[j]=g.first;
 
               i++;  j--;
 
               g.second-=2;
          }
     }
 
     if(i==j){
 
          res[i]=tmp;
     }
 
     cout<<res<<endl;
}
 
