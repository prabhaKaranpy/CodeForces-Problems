#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define int long long
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, m; cin>>n>>m; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        map<int, int> mp; 
        set<int> stt; 
        for(int &it : arr){
            mp[(it%m)] ++; 
        } 
        int groups = 0; 
        int temp = 0; 
        for(auto &it : mp){
            if(it.first == 0){
                groups ++; 
            } 
            else if((!(m&1)) && (it.first == (m/2LL))){
                groups ++; 
            } 
            else{
                if(stt.find(it.first) == stt.end()){ 
                    int one = it.second; 
                    int two = mp[m-it.first]; 
                    if(one == 0 || two == 0) groups += (max(one, two)); 
                    else if(abs(one-two) > 1){
                        groups += (abs(one-two)); 
                    }
                    else groups ++; 
                    stt.insert(it.first); 
                    stt.insert(m-it.first); 
                }
            }
            // else if(mp[m-it.first] > 0){
            //     temp ++; 
            //     if(abs(it.second - mp[m-it.first]) > 1LL){
            //         temp += (abs(it.second-mp[m-it.first]) -1); 
            //     }
            // } 
            // else{
            //     groups += (it.second); 
            // } 
        } 
        // groups += (temp/2LL); 
        cout<<groups<<endl; 
    }
}
