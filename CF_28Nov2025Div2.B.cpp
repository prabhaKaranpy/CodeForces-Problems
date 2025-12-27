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
        int n; cin>>n; vector<int> b(n); for(int &it : b) cin>>it; 
        sort(b.begin(), b.end()); 
        int summ = accumulate(b.begin(), b.end(), 0LL); 
        int l = 0; 
        int index = -1; 
        for(int i = 0; i < n; i++){
            if(b[i] != 0){
                l = i; 
                index = i; 
                break; 
            }
        } 
        l = n-l;  
        if(summ > n){
            int maxi = 1; 
            int extra = summ-n; 
            // cout<<"Extra : "<<extra<<endl; 
            for(int i = n-2; i >= index; i--){
                if(extra > 0){
                    maxi ++; 
                    extra --; 
                    // cout<<"Maxi : "<<maxi<<endl; 
                }
            } 
            cout<<maxi<<endl; 
        } 
        else if(summ == n){
            cout<<1<<endl; 
        }
    }
}