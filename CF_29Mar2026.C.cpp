#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
// #define map unordered_map
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
vector<int> f(int n){
    vector<int> temp; 
    while((n%2) == 0){
        temp.pb(2); n /= 2; 
    } 
    for(int i = 3; (i * i) <= n; i+=2){
        while((n % i) == 0){
            temp.pb(i); n /= i; 
        }
    } 
    if(n > 2){
        temp.pb(n); 
    } 
    return temp; 
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n), b(n); for(int &it : arr) cin>>it; for(int &it : b) cin>>it; 
        // vector<unordered_map<int, int>> p; 
        // for(auto &it : arr){
        //     vector<int> temp = f(it); 
        //     unordered_map<int, int> mp; for(auto &it : temp) mp[it] ++; 
        //     p.pb(mp); 
        // } 
        int count = 0; 
        for(int i = 0; i < n; i++){
            if(arr[i] == 1) continue; 
            if(i == 0){
                // vector<int> temp = f(arr[i]); 
                // unordered_map<int, int> mp; for(auto &it : temp) mp[it] ++; 
                // unordered_map<int, int> t = mp; mp.clear(); temp.clear(); 
                // temp = f(arr[i+1]); 
                // for(auto &it : temp) mp[it] ++; 
                // unordered_map<int, int> s = mp; 
                // int found = 0; 
                // for(auto &it : t){
                //     if(it.second > s[it.first]){
                //         found = 1; 
                //         break;  
                //     }
                // } 
                // if(found) count ++;  
                int g = __gcd(arr[0], arr[1]); 
                if(g != arr[0]) count ++; 
            } 
            else if(i == n-1){
                // unordered_map<int, int> t = p[n-1]; unordered_map<int, int> s = p[n-2]; 
                // vector<int> temp = f(arr[i]); 
                // unordered_map<int, int> mp; for(auto &it : temp) mp[it] ++; 
                // unordered_map<int, int> t = mp; mp.clear(); temp.clear(); 
                // temp = f(arr[i-1]); 
                // for(auto &it : temp) mp[it] ++; 
                // unordered_map<int, int> s = mp; 
                // int found = 0; 
                // for(auto &it : t){
                //     if(it.second > s[it.first]){
                //         found = 1; 
                //         break;  
                //     }
                // } 
                // if(found) count ++;  
                int g = __gcd(arr[n-1], arr[n-2]); 
                if(g != arr[n-1]) count ++; 
            } 
            else{
                // unordered_map<int, int> t = p[i-1]; unordered_map<int, int> s = p[i+1]; 
                // vector<int> temp = f(arr[i-1]); 
                // unordered_map<int, int> mp; for(auto &it : temp) mp[it] ++; 
                // unordered_map<int, int> t = mp; mp.clear(); temp.clear(); 
                // temp = f(arr[i+1]); 
                // for(auto &it : temp) mp[it] ++; 
                // unordered_map<int, int> s = mp; 

                // unordered_map<int, int> total; 
                // for(auto &it : t){
                //     total[it.first] = max(it.second, s[it.first]); 
                // } 
                // for(auto &it : s){
                //     total[it.first] =max(it.second, t[it.first]); 
                // } 
                // // unordered_map<int, int> cur = p[i]; 

                // temp = f(arr[i]); 
                // unordered_map<int, int> cur; for(auto &it : temp) cur[it] ++; 

                // int found = 0; 
                // for(auto &it : cur){
                //     if(it.second > total[it.first]){
                //         found = 1; 
                //         break;  
                //     }
                // } 
                // if(found) count ++;  
                int l = lcm(arr[i-1], arr[i+1]); 
                int g = __gcd(arr[i], l); 
                if(g != arr[i]) count ++; 
            } 
        } 
        cout<<count<<endl; 
    }
}