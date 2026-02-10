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
    string s; cin>>s; 
    int n= s.size(); 
    vector<int> pref; 
    vector<int> suf; 
    int count = 0, v = 0; 
    for(int i = 0; i < n; i++){
        if(s[i] == 'o'){
            if(v > 1){
                
                if((int)(pref.size() == 0)) pref.pb(v-1); 
                else{
                    int back = pref.back(); 
                    pref.pb((v-1) + back); 
                }
            } 
            else{
                
                if((int)(pref.size() ==0)) pref.pb(0); 
                else{
                    int back = pref.back(); 
                    pref.pb(back); 
                }
            }
            v = 0; 
        } 
        else{
            v ++; 
        } 
    } 
    v = 0; 
    for(int i = n-1; i >= 0; i--){
        if(s[i] == 'o'){
            if(v > 1){
                if((int)(suf.size() == 0)) suf.pb(v-1); 
                else{
                    int back = suf.back(); 
                    suf.pb((v-1) + back); 
                }
            }
            else{
                
                if((int)(suf.size() ==0)) suf.pb(0); 
                else{
                    int back = suf.back(); 
                    suf.pb(back); 
                }
            }
            v = 0; 
        } 
        else v ++; 
    } 
    reverse(suf.begin(), suf.end()); 
    int size = pref.size(); 
    for(int i= 0; i < size; i++){
        count += (pref[i] * suf[i]); 
    } 
    cout<<count<<endl; 
}