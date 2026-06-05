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
        int r, g, b; cin>>r>>g>>b; 
        vector<pair<int, char>> arr = {{r, 'R'}, {g, 'G'}, {b, 'B'}}; 
        int n = 0; 
        int cur = -1; 
        string s = ""; 
        while(1){
            cur = -1; 
            sort(arr.rbegin(), arr.rend()); 
            for(auto &i : {0, 1, 2}){
                if(arr[i].first == 0) continue; 
                if(n >= 1 && (s[n-1] == arr[i].second)){
                    continue; 
                } 
                if(n >= 3 && (s[n-3] == arr[i].second)){
                    continue; 
                }
                if(cur == -1){
                    cur = i; continue; 
                }
                if(n >= 2 && (arr[cur].first == arr[i].first) && (s[n-2] == arr[i].second)){
                    cur = i; 
                } 
                // if(n >= 2 && (s[n-2] != arr[i].second)){
                //     cur = 
                // }
            } 
            if(cur == -1) break; 
            s.pb(arr[cur].second); 
            arr[cur].first --; 
            n ++; 
        } 
        cout<<s<<endl; 
    }
}