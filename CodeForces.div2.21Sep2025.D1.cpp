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
        ll l, r; cin>>l>>r; 
        vector<int> hash(r+1); 
        vector<int> ans(r+1); 
        for(ll i = r; i >= 0LL; i--){
            int count = 0; 
            ll copy = i; 
            while(copy){
                count ++; 
                copy >>= 1LL; 
            } 
            copy = i; 
            ll summ = 0LL; 
            for(int j = 0; j < count; j++){
                if(!(copy & (1LL << j))){       // it's not a set bit...  
                    summ += (1LL << j); 
                } 
            } 
            if(summ <= r && (!hash[i])){
                ans[i] = summ; ans[summ] = i; 
                hash[i] = 1; hash[summ] = 1; 
            } 
            else if(summ > r && (!hash[i])){
                ans[i] = i; 
            } 
        } 
        ll total = 0LL; 
        for(int i = 0; i <= r; i++){
            if(ans[i] != i) total += (ans[i] + i); 
            else total += (i); 
        } 
        cout<<total<<endl; 
        for(int &it : ans) cout<<it<<" "; 
        cout<<endl; 
    }
}