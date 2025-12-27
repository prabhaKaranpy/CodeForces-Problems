#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, k; cin>>n>>k; 
        int m = n * n; 
        if(k == m-1) cout<<"NO"<<endl; 
        else if(k == m){
            cout<<"YES"<<endl; 
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++) cout<<'U'; 
                cout<<endl; 
            }
            // cout<<endl; 
        }
        else{
            cout<<"YES"<<endl; 
            vector<vector<char>> ans(n, vector<char>(n)); 
            ans[n-1][n-1] = 'L'; ans[n-1][n-2] = 'R'; 
            for(int j = 0; j < n-2; j++) ans[n-1][j] = 'R'; 
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(k){
                        ans[i][j] = 'U'; k--; 
                    }
                    else{
                        if(i != (n-1)) ans[i][j] = 'D'; 
                    }
                }
            }
            for(auto &it: ans){
                for(auto &e : it) cout<<e; 
                cout<<endl; 
            } // cout<<endl; 
        }
    }
}