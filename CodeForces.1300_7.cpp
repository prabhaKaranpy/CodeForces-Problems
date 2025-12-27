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
        int n; cin>>n; 
        int found = 0; 
        for(int i = 2; i <= n; i++){
            int temp = 1 + i + (i*i); 
            int j = i*i*i; 
            while(temp <= n){
                if(temp == n){
                    found = 1; cout<<"YES"<<endl; break;  
                } 
                temp += (j); 
                j *= i;  
            } 
            if(found) break; 
        } 
        if(!found) cout<<"NO"<<endl; 
    }
}