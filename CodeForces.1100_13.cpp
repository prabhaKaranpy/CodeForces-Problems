#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353; 
int gcd(int a, int b){
    if(b == 0) return a; 
    return gcd(b, (a%b)); 
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n;             // MATH DERIVATION, NUMBER THEORY, MODULAR ARITHMETIC, GCD STUFF...  
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        int ans = 0; 
        for(int i = 0; i <= (n&1 ? (n/2) : (n/2)-1); i++){
            ans = gcd(ans, abs(arr[i] - arr[n-1-i])); 
        } 
        cout<<ans<<endl; 
    }
}
