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
        int n; cin>>n; vector<int> arr(n); for(int &it : arr) cin>>it; 
        int found = 0; 
        for(int i = 0; i < n; i++){
            if(arr[i] != (n-i)){
                for(int j = i+1; j < n; j++){
                    if(arr[j] == (n-i)){
                        reverse(arr.begin()+i, arr.begin()+j+1); 
                        found = 1; 
                        break; 
                    }
                } 
                if(found) break; 
            } 
        } 
        for(auto &it : arr) cout<<it<<" "; 
        cout<<endl; 
    }
}