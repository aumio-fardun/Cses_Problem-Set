#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main() {
 
    int n;
    cin >> n;
    int mod = 1e9 + 7;
 
    vector<int> dp(n + 1,0);
    int dices = 6;
    dp[0] = 1;
 
    for (int i = 1; i < n + 1; i++) {
        for (int dice = 1; dice <= dices; dice++) {
            if (dice > i) break;
            dp[i] = (dp[i] + dp[i - dice]) % mod;
        }
    }
    cout << dp[n];
 
 
}
 
