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
        int n; cin>>n; 
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        // int found = 0; 
        vector<pair<int, pair<int, int>>> a; 
        if(arr[n-2] > arr[n-1]){
            cout<<-1<<endl; 
        } 
        else if((arr[n-2] < 0) && (arr[n-1] < 0)){
            int found = 0; 
            for(int i = n-3; i >= 0; i--){
                if((arr[i] <= arr[i+1]) && (arr[i] < 0)){
                    continue; 
                } 
                else{
                    cout<<-1<<endl; 
                    found = 1; 
                    break; 
                }
            }
            if(!found) cout<<0<<endl; 
        }
        else{
            for(int i = n-3; i >= 0; i--){
                a.pb({i+1, {n-1, n}}); 
                arr[i] = arr[n-2]-arr[n-1]; 
                // if(arr[i] <= arr[i+1]){
                //     // arr[i] = arr[n-2]-arr[n-1]; 
                //     continue; 
                // } 
                // else{
                //     if(arr[n-2]-arr[n-1] <= arr[i+1]){
                //         a.pb({i+1, {n-1, n}}); 
                //         arr[i] = arr[n-2]-arr[n-1]; 
                //     } 
                //     else{
                //         found = 1; 
                //         cout<<-1<<endl; 
                //         break; 
                //     } 
                // } 
            } 
            // for(int &it : arr) cout<<it<<" "; 
            // cout<<endl; 
            cout<<a.size()<<endl; 
            for(auto &it : a){
                cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl; 
            } 
        } 
    } 
} 