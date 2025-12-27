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
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        int maxi = arr[0]; 
        for(int i = 1; i < n; i++){
            maxi = max(maxi, arr[i]); 
            if(i&1) arr[i] = max(arr[i], maxi); 
        } 
        int count = 0; 
        for(int i = 0; i < n-1; i+=2){
            if(arr[i] >= arr[i+1]){
                count += (-arr[i+1] + arr[i]+1); 
                arr[i] = arr[i+1]-1; 
            } 
        }
        if(n&1){
            for(int i = n-1; i > 0; i-=2){
                if(arr[i] >= arr[i-1]){
                    count += (-arr[i-1] + arr[i]+1); 
                    arr[i] = arr[i-1]-1; 
                } 
            } 
        } 
        else{
            for(int i = n-2; i > 0; i-=2){
                if(arr[i] >= arr[i-1]){
                    count += (-arr[i-1] + arr[i]+1); 
                    arr[i] = arr[i-1]-1; 
                } 
            } 
        } 
        cout<<count<<endl; 
    }
}