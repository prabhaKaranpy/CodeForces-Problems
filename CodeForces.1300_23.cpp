#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353; 
void f(int &n, vector<int> &primes){
    int c = n; 
    while(!(c % 2)){
        primes.pb(2); c /= 2; 
    } 
    for(int i = 3; (i * i) <= n; i+=2){
        while(!(c % i)){
            primes.pb(i); c /= i; 
        } 
    } 
    if(c > 1) primes.pb(c); 
    return; 
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> primes; 
        f(n, primes); 
        set<int> stt(primes.begin(), primes.end()); 
        int size = (int)(stt.size()); 
        int psize = primes.size(); 
        if(size >= 3){
            int count = 0; 
            int a, b; 
            for(auto &it : stt){
                if(count == 2) break; 
                if(!count){
                    a = it; 
                } 
                if(count){
                    b = it; 
                } 
                count ++; 
            } 
            int ab = a * b; 
            int c = n / ab; 
            cout<<"YES"<<endl; 
            cout<<a<<" "<<b<<" "<<c<<endl; 
        } 
        else{
            if(size == 1){
                if(psize >= 6){
                    int p = primes[0]; 
                    cout<<"YES"<<endl; 
                    cout<<p<<" "<<(p*p)<<" "<<(n / (p * p * p))<<endl; 
                } 
                else cout<<"NO"<<endl; 
            } 
            else if(size == 2){
                if(psize >= 4){
                    cout<<"YES"<<endl; 
                    vector<int> ans; 
                    for(auto &it : stt){
                        ans.pb(it); 
                    } 
                    int ab = ans[0] * ans[1]; 
                    int c = n / ab; 
                    cout<<ans[0]<<" "<<ans[1]<<" "<<c<<endl; 
                } 
                else cout<<"NO"<<endl; 
            }
        }
    }
}