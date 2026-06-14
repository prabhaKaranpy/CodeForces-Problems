#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
// #define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int a, b, x; cin>>a>>b>>x; 
        int ans = 0; 
        // cout<<0<<endl; 
        // f(a, b, x, 0, ans); 
        queue<pair<pair<int, int>, int>> qu; 
        qu.push({{a, b}, 0}); 
        int found = 0; 
        while(!qu.empty()){
            auto cur = qu.front(); qu.pop(); 
            int aa = cur.first.first, bb = cur.first.second, count = cur.second; 
            if(aa == bb){
                cout<<count<<endl; 
                found = 1; 
                break; 
            }
            if(aa > 0) qu.push({{aa/x, bb}, count+1}); 
            if(bb > 0) qu.push({{aa, bb/x},count+1}); 
            if(abs(aa-bb) <= x) qu.push({{aa+1, bb}, count+1}); 
            if(abs(aa-bb) <= x) qu.push({{aa, bb+1}, count+1}); 
        }
        // cout<<0<<endl; 
        // cout<<ans<<endl;  
    }
}