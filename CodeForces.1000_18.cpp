#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        ll w, h; cin>>w>>h; 
        int k1; cin>>k1; 
        ll first, last; 
        ll maxi = 1; 
        for(int i = 0; i < k1; i++){
            int temp; cin>>temp; 
            if(i == 0) first = temp; 
            if(i == k1-1) last = temp; 
        } 
        ll base = (last-first); 
        maxi = max(maxi, (base*h)); 
        int k2; cin>>k2; 
        for(int i = 0; i < k2; i++){
            int temp; cin>>temp; 
            if(i == 0) first = temp; 
            if(i == k2-1) last = temp; 
        } 
        base = (last - first); 
        maxi = max(maxi, (base * h)); 
        int k3; cin>>k3; 
        for(int i = 0; i < k3; i++){ 
            int temp; cin>>temp; 
            if(i == 0) first = temp; 
            if(i == k3-1) last = temp; 
        } 
        base = (last - first); 
        maxi = max(maxi, (base * w)); 
        int k4; cin>>k4; 
        for(int i = 0; i < k4; i++){ 
            int temp; cin>>temp; 
            if(i == 0) first = temp; 
            if(i == k4-1) last = temp; 
        } 
        base = (last - first); 
        maxi = max(maxi, (base * w)); 
        cout<<maxi<<endl; 
    }
}