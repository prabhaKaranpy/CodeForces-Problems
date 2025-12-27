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
        int n; cin>>n; 
        vector<int> arr(n), b(n); 
        vector<int> backup(n); 
        for(int &it : arr) cin>>it; 
        for(int &it : b) cin>>it; 
        backup[n-1] = arr[n-1]; 
        int found = 0; 
        for(int i = n-1; i >= 0; i--){
            if(i == n-1){
                if(arr[i] != b[i]){
                    found = 1; 
                    break; 
                } 
            } 
            else{
                backup[i] = arr[i] ^ arr[i+1]; 
                if(arr[i] != b[i]){
                    if(((arr[i] ^ arr[i+1]) != b[i]) && ((arr[i] ^ backup[i+1]) != b[i])){
                        found = 1; 
                        break; 
                    } 
                } 
                if(arr[i] == b[i]) backup[i] = arr[i]; 
                if(backup[i+1] ^ arr[i] == b[i]) backup[i] = b[i]; 
            } 
        } 
        // for(int &it : backup) cout<<it<<" "; 
        // cout<<endl; 
        if(!found) cout<<"YES"<<endl; 
        else cout<<"NO"<<endl; 
    }
}