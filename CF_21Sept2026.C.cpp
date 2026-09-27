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
        int n; cin>>n; 
        string s; cin>>s; 
        vector<int> zeros(n), ones(n); 
        if(s[n-1] == '0') zeros[n-1] = 1; 
        else zeros[n-1] = 0; 
        for(int i = n-2; i >= 0; i--){
            zeros[i] = (s[i] == '0' ? 1 : 0) + zeros[i+1]; 
        } 
        if(s[0] == '1') ones[0] = 1; 
        for(int i= 1; i < n; i++){
            ones[i] = (s[i] == '1' ? 1 : 0) + ones[i-1]; 
        } 
        if(s[0] == '1'){ // edge case... 
            cout<<zeros[0]<<endl; 
            continue; 
        } 
        int mini = n; 
        for(int i= 0; i < n; i++){
            // int count = 0; 
            // if(s[i] == '0'){
                if(i+1 < n){
                    int count = (zeros[i+1] + ones[i]); 
                    mini = min(mini, count); 
                } 
                if(i == n-1){
                    int count = ones[i]; 
                    mini = min(mini, count); 
                } 
            // }
        } 
        cout<<mini<<endl; 
    }
}