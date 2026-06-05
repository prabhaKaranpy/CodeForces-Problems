#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, x1, x2, k; cin>>n>>x1>>x2>>k; 
        if(n == 2 || n == 3){
            cout<<1<<endl; continue; 
        }
        int mini = abs(x1-x2); 
        mini = min(mini, (n-mini)); 
        cout<<mini+k<<endl; 
    }
}