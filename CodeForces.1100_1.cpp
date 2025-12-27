#include<bits/stdc++.h>
#define ll long long 
#define inf 1e18 
using namespace std; 
signed main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        string s; cin>>s; 
        ll ans = 0; 
        set<char> stt; 
        for(int i = 0; i < n; i++){
            if(stt.find(s[i]) != stt.end()){
                continue; 
            } 
            else{
                stt.insert(s[i]); 
                ans += (n-i); 
            } 
        } 
        cout<<ans<<endl; 
    }
}