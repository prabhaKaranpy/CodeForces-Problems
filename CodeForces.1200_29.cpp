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
        int n, k; cin>>n>>k; 
        if(!(n&1)){
            if(k % n) cout<<(k % n)<<endl; 
            else cout<<n<<endl; 
        } 
        else{
            int floor = (n/2); 
            int temp = k-1; 
            int count = temp / floor; 
            int m = k + count; 
            if(m % n) cout<<(m % n)<<endl; 
            else cout<<n<<endl; 
        }
    }
}     