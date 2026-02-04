#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353; 
void f(int n, vector<int> &primes){
    int c = n; 
    while(!(c % 2)){
        primes.pb(2); 
        c /= 2; 
    } 
    for(int i = 3; (i * i) <= c; i++){
        if(!(c % i)){
            primes.pb(i); 
            c /= i; 
        } 
    } 
    if(c > 1) primes.pb(c); 
    return; 
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, k; cin>>n>>k; 
        if(k >= n){
            cout<<1<<endl; continue; 
        } 
        // vector<int> primes; 
        // f(n, primes); 
        // set<int> stt(primes.begin(), primes.end()); 
        // int size = primes.size(); 
        // if(size == 1){
        //     cout<<n<<endl; // because we need to buy the '1'th package upto 'n' no. of times...  
        //     continue; 
        // } 
        int mini = 1e10; 
        for(int i = 1; ((i * i) <= n && i <= k); i++){
            if(!(n % i)){
                int temp = (n / i); 
                int temp2 = (n / temp); 
                mini = min(mini, (temp)); 
                if(temp <= k) mini = min(mini, temp2); 
            } 
        } 
        cout<<mini<<endl; 
        // int mini = 1e15; 
        // for(auto &it : stt){
        //     if(it <= k){
        //         int noOfpackagesToBuyInTypeI = n / it; 
        //         mini = min(mini, (noOfpackagesToBuyInTypeI)); 
        //     } 
        // } 
        // if(mini > 1e10) mini = n; 
        // cout<<mini<<endl; 
    }
}