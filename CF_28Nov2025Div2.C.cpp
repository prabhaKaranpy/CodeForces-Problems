#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, k; cin>>n>>k; 
        vector<int> q(n), r(n); 
        for(int &it : q) cin>>it; for(int &it : r) cin>>it; sort(q.begin(), q.end()); sort(r.begin(), r.end()); 
        reverse(q.begin(), q.end()); 
        // for(int &it : q) cout<<it<<" "; 
        // cout<<endl; 
        // for(int &it : r) cout<<it<<" "; 
        // cout<<endl; 
        int ans = 0; 
        int j = 0; 
        for(int i = 0; i < n; i++){
            if(j == n) continue; 
            int qq = -1; 
            int rr = r[i]; 
            int y = rr+1LL; 
            
            while(j < n){
                if((((y * q[j])) + rr) <= k){
                    qq = q[j]; 
                    j ++; 
                    break; 
                } 
                else j ++; 
            }
            if(qq == -1){
                break; 
            }
            // int x = ((rr + 1LL) * (qq + 1LL)) -1LL; 
            int x = ((y * qq)) + rr; 
            
            if(x <= k && y < x){
                ans ++; 
            } 
        } 
        cout<<ans<<endl; 
    } 
}

