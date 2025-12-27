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
        int n, l, r; cin>>n>>l>>r; 
        vector<int> arr(n); 
        int found = 0; 
        for(int i = 1; i <= n; i++){
            int temp = (l % i); 
            if(!temp){
                arr[i-1] = l; 
            } 
            else{
                int c = l + (i-(temp)); 
                if(c <= r){
                    arr[i-1] = c; 
                } 
                else{
                    found = 1; break; 
                } 
            } 
        } 
        if(!found){
            cout<<"YES"<<endl; 
            for(int &it : arr) cout<<it<<" "; 
            cout<<endl; 
        } 
        else cout<<"NO"<<endl; 
    }
}