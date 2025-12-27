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
        int i = (1<<n)-1; 
        int end = i; 
        unordered_set<int> temp; 
        while(i != 1){ 
            temp.insert(i); 
            cout<<i<<" "; 
            for(int j = i; j <= end; j+=2){
                // if(!(j&1)) continue; 
                if((j&i) != i) continue; 
                if(temp.find(j) == temp.end()){
                    cout<<j<<" "; 
                    temp.insert(j); 
                } 
            }
            i >>= 1; 
        } 
        cout<<i<<" "; 
        temp.insert(i); 
        for(int i= 5; i <= end; i+=2){
            if(temp.find(i) == temp.end()){
                cout<<i<<" "; 
                // temp.insert(j); 
            } 
        } 
        for(int i = 0; i <= end; i+=2){
            cout<<i<<" "; 
        } 
        // cout<<endl; 
        // for(auto &it : temp) cout<<it<<" "; 
        // cout<<endl; 
        cout<<endl; 
    }
} 