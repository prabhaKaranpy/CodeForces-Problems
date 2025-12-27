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
        int n; cin>>n; vector<int> arr(n); for(int &it : arr) cin>>it; 
        sort(arr.begin(), arr.end()); 
        int found = 0; 
        for(int i = 1; i < n-1; i+=2){
            if(arr[i] != arr[i+1]){
                found = 1; 
                cout<<"NO"<<endl; 
                break; 
            } 
        } 
        if(!found) cout<<"YES"<<endl; 
    }
}