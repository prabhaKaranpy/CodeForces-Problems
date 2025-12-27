#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
int startI, startJ; 
int globalCounter = 0; 
int dfs(int i, int j, int x, int y, int &n, int &m, char d1, char d2){
    // base cases for bounds 
    if(i < 0 && j < 0){
        return 1 + dfs(i+1, j+1, x, y, n, m, 'D', 'R'); 
    } 
    if(i < 0 && j >= m){
        return 1 + dfs(i+1, j-1, x, y, n, m, 'D', 'L'); 
    } 
    if(i >= n && j < 0){
        return 1 + dfs(i-1, j+1, x, y, n, m, 'U', 'R'); 
    } 
    if(i >= n && j >= m){
        return 1 + dfs(i-1, j-1, x, y, n, m, 'U', 'L'); 
    }
    if(i < 0){
        if(d2 == 'L'){
            return 1 + dfs(i+1, j+1, x, y, n, m, 'D', 'L'); 
        } 
        else if(d2 == 'R'){
            return 1 + dfs(i+1, j-1, x, y, n, m, 'D', 'R'); 
        }
    } 
    if(j < 0){
        if(d1 == 'D'){
            return 1 + dfs(i-1, j+1, x, y, n, m, 'D', 'R'); 
        } 
        else if(d1 == 'U'){
            return 1 + dfs(i+1, j+1, x, y, n, m, 'U', 'R'); 
        }
    } 
    if(i >= n){
        if(d2 == 'L'){
            return 1 + dfs(i-1, j+1, x, y, n, m, 'U', 'L'); 
        } 
        if(d2 == 'R'){
            return 1 + dfs(i-1, j-1, x, y, n , m, 'U', 'R'); 
        } 
    } 
    if(j >= m){
        if(d1 == 'D'){
            return 1 + dfs(i-1, j-1, x, y, n, m, 'D', 'L'); 
        } 
        if(d1 == 'U'){
            return 1 + dfs(i+1, j-1, x, y, n, m, 'U', 'L'); 
        } 
    } 
    if(i == x && j == y){
        return 0; 
    } 
    if(i == startI && j == startJ){
        globalCounter += 1; 
        if(globalCounter == 10){
            return 0; 
        }
    } 
    if(d1 == 'U'){
        if(d2 == 'L'){
            return dfs(i-1, j-1, x, y, n, m, d1, d2); 
        } 
        else if(d2 == 'R'){
            return dfs(i-1, j+1, x, y, n, m, d1, d2); 
        } 
    } 
    else if(d1 == 'D'){
        if(d2 == 'L'){
            return dfs(i+1, j-1, x, y, n, m, d1, d2); 
        } 
        else if(d2 == 'R'){
            return dfs(i+1, j+1, x, y, n, m, d1, d2); 
        }
    } 

}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, m, i, j, x, y; cin>>n>>m>>i>>j>>x>>y; 
        string s; cin>>s; 
        char d1 = s[0], d2 = s[1]; 
        startI = i-1, startJ = j-1; 
        globalCounter = 0; 
        int ans = dfs(i-1, j-1, x-1, y-1, n, m, d1, d2); 
        if(globalCounter == 10) cout<<-1<<endl; 
        else cout<<ans<<endl; 
    }
}