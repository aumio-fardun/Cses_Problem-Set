#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
     
     ll t;  cin>>t;
 
     while(t--){
 
          ll y,x;  cin>>y>>x;
 
          ll pp=max(x,y);
 
          if(pp%2){
 
               if(x==pp){
 
                    cout<<x*x-y+1<<endl;
               }
 
               else{
 
                    cout<<(y-1)*(y-1)+x<<endl;
               }
          }
 
          else{
 
               if(x==pp){
 
                    cout<<(x-1)*(x-1)+y<<endl;
               }
 
               else{
 
                    cout<<y*y-x+1<<endl;
               }
          }
 
 
}
 
}
