#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        ll n, k, b, s; cin>>n>>k>>b>>s; 
        if((s/k) < b) cout<<-1<<endl; 
        else if(((b*k) + (n * (k-1))) < s) cout<<-1<<endl; 
        else{
            vector<ll> arr(n); 
            arr[0] = (b*k); 
            s -= (b*k); 
            for(int i = 0; i < n; i++){
                ll limit = (k-1LL); 
                if(s > 0){
                    arr[i] += (min(limit, s)); 
                    s -= limit; 
                }
                else{
                    break; 
                }
            } 
            for(auto &it : arr) cout<<it<<" "; 
            cout<<endl; 
        }
    }
}