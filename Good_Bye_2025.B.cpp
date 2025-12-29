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
        string s; cin>>s;
        int n = s.size(); 
        int count = 0; 
        if(s[0] == 'u') count ++; 
        if(s[n-1] == 'u') count ++; 
        int i = 1; 
        while(i < (n-1)){
            if(s[i] == 'u'){
                int j = i; 
                int c = 0; 
                while(j < (n-1)){
                    if(s[j] == 'u'){
                        c ++; 
                        j ++; 
                    } 
                    else{
                        break; 
                    }
                } 
                count += (c/2); 
                i = j+1; 
            } 
            else i ++; 
        } 
        cout<<count<<endl; 
    }
}