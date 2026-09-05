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
        int count = 0; 
        int j = 0; 
        int found = 0; 
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                found = 1; 
            }
            if((j+1) == k){
                j = 0; 
                if(!found) count ++; 
                found = 0; 
            }
            else j ++; 
        }
        cout<<count<<endl; 
    }
}