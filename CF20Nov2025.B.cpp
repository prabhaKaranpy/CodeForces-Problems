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
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        int x = 0; 
        if(arr[n-1] == -1 && arr[0] == -1){
            cout<<0<<endl; 
            for(int &it : arr){
                if(it == -1) cout<<0<<" "; 
                else cout<<it<<" "; 
            } 
            cout<<endl; 
            continue; 
        } 
        if(arr[n-1] == -1){
            x = arr[0]; 
            arr[n-1] = x; 
            for(int i = 0; i < n; i++){
                if(arr[i] == -1) arr[i] = 0; 
            } 
            int diff = 0; 
            for(int i =1; i < n; i++){
                diff += (arr[i] - arr[i-1]); 
            } 
            cout<<abs(diff)<<endl; 
            for(int &it : arr) cout<<it<<" "; 
            cout<<endl; 
            continue; 
        } 
        if(arr[0] == -1){
            x = arr[n-1]; 
            arr[0] = x; 
            for(int i = 0; i < n; i++){
                if(arr[i] == -1) arr[i] = 0; 
            } 
            int diff = 0; 
            for(int i =1; i < n; i++){
                diff += (arr[i] - arr[i-1]); 
            } 
            cout<<abs(diff)<<endl; 
            for(int &it : arr) cout<<it<<" "; 
            cout<<endl; 
            continue; 
        } 
        for(int i = 0; i < n; i++){
            if(arr[i] == -1) arr[i] = 0; 
        } 
        int diff = 0; 
        for(int i =1; i < n; i++){
            diff += (arr[i] - arr[i-1]); 
        } 
        cout<<abs(diff)<<endl; 
        for(int &it : arr) cout<<it<<" "; 
        cout<<endl; 
    }
}