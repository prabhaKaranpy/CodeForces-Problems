#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define int long long 
#define aj "Ajisai" 
#define mai "Mai" 
#define ti "Tie" 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
int f(int i, int &n, vector<int> &a, vector<int> &b){
    if(i == n) return 0; 
    int atake = a[i] + f(i+1, n, a, b); 
    int anotTake = b[i] + f(i+1, n, a, b); 
    int btake = b[i] + f(i+1, n, a, b);
    int bnotTake = a[i] + f(i+1, n, a, b); 
    return (min(atake, anotTake) - max(btake, bnotTake)); 
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> a(n), b(n); for(int &it : a) cin>>it; for(int &it : b) cin>>it; 
        int ans = f(0, n, a, b); 
        if(ans == 0) cout<<ti<<endl; 
        else if(ans < 0) cout<<mai<<endl; 
        else cout<<aj<<endl; 
    }
}