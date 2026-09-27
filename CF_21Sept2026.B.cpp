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
        int a, b, c; cin>>a>>b>>c; 
        if(a >= b){
            a += c; 
            cout<<(a-b)<<endl; 
        } 
        else{
            int maxi = b-a; 
            maxi = max(maxi, abs((a+c)-b)); 
            cout<<maxi<<endl; 
        }
    }
}