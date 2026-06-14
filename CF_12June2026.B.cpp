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
        int n, k; cin>>n>>k;  
        string s; cin>>s; 
        vector<int> hash(k); 
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                hash[(i+1) % k] ++; 
            }
        } 
        int found = 0; 
        for(auto &it : hash){
            if(it &1){
                found = 1; 
                cout<<"NO"<<endl; 
                break; 
            }
        }
        if(!found) cout<<"YES"<<endl; 
    }
}