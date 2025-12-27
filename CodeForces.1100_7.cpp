#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
using namespace std; 
signed main(void){
    int T; cin>>T; 
    while(T--){
        int n, x; cin>>n>>x; 
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        ll l = 0; 
        ll r = 2e9; 
        int found = 0; 
        ll height = 1LL; 
        while(l <= r){
            ll h = (l + r) / 2LL; 
            ll water = 0; 
            for(int i = 0; i < n; i++){
                if(arr[i] > h){
                    continue; 
                } 
                else{
                    water += (h - arr[i]); 
                } 
            } 
            if(water == x){
                found = 1; 
                height = h; 
                break; 
            }
            else if(water > x){
                r = h-1; 
            } 
            else{
                l = h+1; 
            } 
        } 
        if(found){
            cout<<height<<endl; 
        }
        else cout<<l-1<<endl; 
    }
}