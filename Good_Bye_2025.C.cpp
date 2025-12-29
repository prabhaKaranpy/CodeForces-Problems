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
        int count = 0; 
        for(int &it : arr){
            if(it < 0){
                count ++; 
            } 
        } 
        if(count == 0 || count == n){
            int sum = 0; 
            if(count == 0){
                for(int &it : arr){
                    sum += it; 
                } 
                sum -= arr[n-1]; 
                cout<<sum<<endl; 
            } 
            else{
                for(int &it : arr){
                    sum -= it; 
                } 
                sum += arr[0]; 
                cout<<sum<<endl;  
            } 
            continue; 
        } 
        int index = -1; 
        for(int i = 0; i < n; i++){
            if(arr[i] >= 0){
                index = i; break; 
            }
        } 
        int first = -1; 
        for(int i= 0; i < n; i++){
            if(arr[i] < 0){
                first = i; break; 
            }
        } 
        vector<int> pref(n); pref[0] = arr[0]; 
        for(int i = 1; i < index; i++){
            if(arr[i] < 0){
                if(i == first && first < index) pref[i] = arr[i] + pref[i-1]; 
                else pref[i] = (-1LL * arr[i]) + pref[i-1]; 
            }
            else pref[i] = arr[i] + pref[i-1]; 
        } 
        for(int i = index; i < n; i++){
            if(i == 0) continue; 
            pref[i] = (abs(arr[i])) + pref[i-1]; 
        } 
        vector<int> suf(n); suf[n-1] = (-1LL) * arr[n-1]; 
        for(int i = n-2; i >= 0; i--){
            suf[i] = (-1LL * arr[i]) + suf[i+1]; 
        } 
        int maxi = -1e18; 
        for(int i = 1; i < (n-1); i++){
            int temp = pref[i-1] + suf[i+1]; 
            maxi = max(maxi, temp); 
        } 
        maxi = max(maxi, (suf[1])); 
        maxi = max(maxi, pref[n-2]); 
        cout<<maxi<<endl; 
    }
}

