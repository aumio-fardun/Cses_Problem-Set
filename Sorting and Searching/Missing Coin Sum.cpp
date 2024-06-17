#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main(){
 
    ll n;  cin>>n;
 
    vector<ll>nums(n);
 
    nums.push_back(0);
 
    for(ll i=0;i<n;i++){
 
        cin>>nums[i];
    }
 
    sort(nums.begin(),nums.end());
 
    ll s=0;
    n++;
 
    for(ll i=0;i<n;i++){
 
        s+=nums[i];
 
        if(i==n-1){
 
            continue;
        }
 
        if(nums[i+1]>s+1){
 
            break;
        }
    }
 
    cout<<s+1<<endl;
}
 
 
 
