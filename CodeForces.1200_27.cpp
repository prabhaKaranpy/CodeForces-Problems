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
        string a, b; cin>>a>>b; 
        vector<int> pref(n); 
        int equals = 0; 
        for(int i = 0; i < n; i++){
            if(a[i] == '1') equals ++; 
            else equals --; 
            pref[i] = equals; 
        }  
        string aReverse = a; for(char &ch : aReverse){ ch = (ch == '1') ? '0' : '1'; } 
        int game = 1; 
        int found = 0; 
        for(int i = n-1; i >= 0; i--){
            if(((game == 1) ? a[i] : aReverse[i]) != b[i]){
                if(!pref[i]){ 
                    game ^= 1; 
                } 
                else{
                    found = 1; 
                    cout<<"NO"<<endl; 
                    break; 
                } 
            } 
        } 
        if(!found) cout<<"YES"<<endl; 
    }
} 