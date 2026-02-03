#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353; 
void f(int &n, vector<int> &primeFactors){
    int c = n; 
    while(!(c % 2)){
        primeFactors.pb(2); 
        c /= 2; 
    } 
    for(int i = 3; (i * i) <= c; i += 2){
        while(!(c %i)){
            primeFactors.pb(i); 
            c /= i; 
        } 
    } 
    if(c > 1){
        primeFactors.pb(c); 
    } 
    return; 
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> primeFactors; 
        f(n, primeFactors); 
        int size = primeFactors.size(); 
        if(size == 1){
            cout<<1<<" "<<(primeFactors[0]-1)<<endl; continue; 
        } 
        else{
            int first =primeFactors[0], second = 1; 
            for(int i= 1; i < size; i++) second *= primeFactors[i]; 
            int ans1 = second, ans2 = (first-1) * second; 
            cout<<ans1<<" "<<ans2<<endl; 
        }
    }
}