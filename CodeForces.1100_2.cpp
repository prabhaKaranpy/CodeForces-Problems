#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n, k; cin>>n>>k; 
        vector<int> arr(n), b(n); 
        for(int &it : arr) cin>>it; 
        for(int &it : b) cin>>it; 
        int maxi = 0; 
        int ans = 0; 
        int temp = 0; 
        int prev = 0; 
        for(int i = 0; i < min(k, n); i++){
            maxi = max(maxi, b[i]); 
            temp = arr[i] + prev; 
            temp += (maxi * (k-(i+1))); 
            ans = max(ans, temp); 
            prev += arr[i]; 
        } 
        cout<<ans<<endl; 
    }
}