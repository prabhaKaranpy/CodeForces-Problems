#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        sort(arr.rbegin(), arr.rend()); 
        ll count = 0LL; 
        for(int i = 0; i < n; i++){
            if(!(i&1)){
                count += (ll)(arr[i]); 
            } 
        } 
        cout<<count<<endl; 
    }
}