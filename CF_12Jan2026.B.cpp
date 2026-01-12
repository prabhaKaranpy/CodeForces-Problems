#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int s, k, m; cin>>s>>k>>m; 
        if(k > m){
            cout<<max(0LL, (s-m))<<endl; 
            continue; 
        } 
        if(k == m){
            if(s < k){ cout<<s<<endl; continue;}
            else cout<<k<<endl; 
            continue; 
        } 
        if(k < m){
            if((m /k)&1){
                int mini = min(k, s); 
                cout<<max(0LL, (mini-(m%k)))<<endl; 
            }
            else{
                cout<<max(0LL, (s-(m%k)))<<endl; 
            }
            continue; 
            // int mini = min(k, s); 
            // cout<<max(0LL, (mini-(m%k)))<<endl; continue; 
        }
    }
}