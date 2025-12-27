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
        int n, k; cin>>n>>k; 
        string s; cin>>s; 
        if(n == 1){
            cout<<'-'<<endl; 
            continue; 
        }
        int c = 0; 
        for(char &ch : s){
            if(ch == '2') c++; 
        } 
        if(n == k){
            for(int i = 0; i < n; i++){
                cout<<'-'; 
            } cout<<endl; 
            continue; 
        }
        if(c == n){
            for(int i = 0; i < n; i++){
                cout<<'-'; 
            } cout<<endl; 
            continue; 
        }
        vector<char> ans(n); 
        for(char &it : ans) it = '+'; 
        int first = -1, second = -1; 
        int left = 0, right = n-1; 
        int ul = left, ur = right; 
        for(int i = 0; i < k; i++){
            if(s[i] == '0'){
                if(ans[left] == '?'){
                    int index = first+1; 
                    if(index < n){
                        ans[index] = '?'; 
                        ans[left] = '-'; 
                        left ++; 
                        first = index; 
                        ul = first +1; 
                    }
                }
                else{
                    ans[left] = '-'; 
                    left ++; 
                    ul = left; 
                }
                
            } 
            else if(s[i] == '1'){
                if(ans[right] == '?'){
                    int index = second -1; 
                    if(index >= 0){
                        ans[index] = '?'; 
                        ans[right] = '-'; 
                        right --; 
                        second = index; 
                        ur = second-1; 
                    }
                }
                else{
                    ans[right] = '-'; 
                    right --; 
                    ur = right; 
                }
            }
            else{
                ans[ul] = '?'; 
                first = ul; 
                ul ++; 
                ans[ur] = '?'; 
                second = ur; 
                ur --; 
            }
        } 
        int count = 0; 
        for(auto &it : ans){
            if(it == '?') count ++; 
        } 
        if(count == 1){
            for(auto &it : ans){
                if(it == '?') {it = '-'; break; }
            }
        }
        for(auto &it : ans) cout<<it; 
        cout<<endl; 
        // int n; cin>>n; 
        // int ans = n%3; 
        // cout<<min(ans, n-ans)<<endl; 
    }
}