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
        int n; cin>>n; 
        if(n == 10){
            cout<<-1<<endl; 
            continue; 
        }
        int b = n / 12; 
        int a = n % 12; 
        if(a == 10){
            a = 22; 
            b = (b-1) * 12; 
        }
        else{
            b = b * 12; 
        }
        cout<<a<<" "<<b<<endl; 
    }
}