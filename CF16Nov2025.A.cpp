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
        int n; cin>>n; 
        string s; cin>>s; 
        char ch = s[n-1]; 
        int mini = n-1; 
        for(int i = n-2; i >= 0; i--){
            if(s[i] == ch) mini --; 
        } 
        cout<<mini<<endl; 
    }
}