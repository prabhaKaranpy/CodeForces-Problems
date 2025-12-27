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
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        if(n == 1) cout<<1<<endl; 
        else{
            vector<int> a; 
            for(int i = 0; i < n-1; i++){
                if(arr[i] != arr[i+1]) a.pb(arr[i]); 
            } a.pb(arr[n-1]); 
            int n = a.size(); 
            if(n == 1) cout<<1<<endl; 
            else if(n == 2) cout<<2<<endl; 
            else{
                int rem = 0; 
                for(int i = 1; i < n-1; i++){
                    if(a[i-1] > a[i] && a[i+1] < a[i]){
                        rem ++; 
                    } 
                    if(a[i-1] < a[i] && a[i+1] > a[i]) rem ++; 
                } 
                cout<<n-rem<<endl; 
            }
        }
    }
}