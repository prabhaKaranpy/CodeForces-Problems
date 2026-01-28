#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
int f(int i, int j, int direction, vector<vector<vector<int>>> &dp){
    // base case 
    if(dp[i][j][direction] != -1) return dp[i][j][direction]; 
    int up = 0, down = 0, left = 0, right = 0; 
    if(direction == 0 || direction == 1){
        left = f(i, j-1, 2, dp); 
        right = f(i, j+1, 3, dp); 
    } 
    else if(direction == 2 || direction == 3){
        up = f(i-1, j, 0, dp); 
        down = f(i+1, j, 1, dp); 
    } 
    return up + down + left + right; 
}
signed main(void){
    prabha;
    int n; cin>>n; 
    // vector<vector<vector<int>>> dp(2000, vector<vector<int>> (2000, vector<int> (4, -1))); 
    if(n&1){
        cout<<((n/2)+2) * ((n/2) +1) * 2<<endl; 
    }
    else{
        cout<<((n/2)+1) * ((n/2) +1)<<endl; 
    }
} 