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
        int count = 0, maxi = 0; 
        vector<int> hash(n); 
        for(int i = 0; i < n; i++){
            if(s[i] == '1') hash[i] = 1; 
        } 
        int zeros = 0; 
        for(auto &it : hash){
            if(!it) zeros ++; 
        } 
        vector<int> temp(hash); 
        for(auto &it : hash){
            temp.pb(it); 
        } 
        int size = 2 * n; 
        int index = -1; 
        for(int i = 0; i < size; i++){
            if(temp[i]){
                index = i; 
            } 
            if(i >= n){
                if(!temp[i]){
                    maxi = max(maxi, (i - index)); 
                }
            }
        }
        cout<<maxi<<endl; 
    }
}