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
        int mini = 1e9; 
        int found = 0; 
        if(n == 1){
            cout<<0<<endl; continue; 
        } 
        for(int i = 1; i < n; i++){
            if(s[i] != s[i-1]){
                found = 1; break; 
            } 
        } 
        if(!found){
            cout<<0<<endl; continue; 
        } 
        set<char> stt(s.begin(), s.end()); 
        for(int i = 0; i < 26; i++){
            char ch = (char)(97+i); 
            if(stt.find(ch) != stt.end()){
                int f = 0; 
                int l = 0, r = n-1; 
                int count = 0; 
                while(l < r){
                    if(s[l] == s[r]){
                        l ++; r --; 
                    } 
                    else if(s[l] == ch || s[r] == ch){
                        if(s[l] == ch){
                            l ++; 
                        } 
                        else r --; 
                        count ++; 
                    } 
                    else{
                        f = 1; 
                        break; 
                    }
                } 
                if(!f){
                    mini = min(mini, count); 
                }
            } 
        } 
        if(mini == 1e9) cout<<-1<<endl; 
        else cout<<mini<<endl; 
    }
}
