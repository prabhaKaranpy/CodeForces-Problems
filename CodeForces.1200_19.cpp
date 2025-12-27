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
        int n; char ch; cin>>n>>ch; 
        string s; cin>>s; 
        int summ = count(s.begin(), s.end(), ch); 
        if(summ == n){
            cout<<0<<endl; 
            continue; 
        } 
        if(s[n-1] == ch){
            cout<<1<<endl; 
            cout<<n<<endl; 
            continue; 
        } 
        if(s[n-2] == ch){
            cout<<1<<endl; 
            cout<<n-1<<endl; 
            continue; 
        } 
        int found = 0; 
        for(int i = 1; i <= n; i++){
            int count = 0; 
            for(int j = i; j <= n; j+=i){
                if(s[j-1] == ch) count ++; 
                else break; 
            } 
            if(count == (n/i)){
                cout<<1<<endl; 
                cout<<i<<endl; 
                found = 1; 
                break; 
            }
        } 
        if(found) continue; 
        cout<<2<<endl; 
        cout<<n<<" "; 
        cout<<n-1<<endl; 
    }
}