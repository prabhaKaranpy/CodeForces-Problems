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
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        int total = 0LL; for(int &it : arr) total += it; 
        vector<int> pref(n); pref[0] = arr[0]; 
        for(int i=  1; i < n; i++){
            pref[i] = arr[i] + pref[i-1]; 
        } 
        int cur = 0; 
        int maxi = -1e10; 
        int l = 0, r = 0; 
        int globalL = 0, globalR = 0; 
        for(int i =0; i < n; i++){
            cur += arr[i]; 
            r = i; 
            if(arr[i] >= cur){          // just adding an (equal to) (=) symbol got Accepted! 
                cur = arr[i]; 
                l = i; r = i; 
            } 
            if(cur > maxi){
                globalL = l; 
                globalR = r; 
                maxi= cur; 
            }
        } 
        // cout<<"Total : "<<total<<endl; 
        // cout<<"GlobalL : "<<globalL<<" GlobalR : "<<globalR<<endl; 
        // cout<<"Maxi : "<<maxi<<endl; 
        if(maxi > total){
            cout<<"NO"<<endl; 
        }
        else if(maxi == total){
            if(globalL == 0 && globalR == (n-1)){
                cout<<"YES"<<endl; 
            } 
            else cout<<"NO"<<endl; 
        }
        else cout<<"YES"<<endl; 
    }
}