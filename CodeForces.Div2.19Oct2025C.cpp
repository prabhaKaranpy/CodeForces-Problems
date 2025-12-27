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
        vector<int> arr(n), b(n); 
        for(int &it : arr) cin>>it; 
        for(int &it : b) cin>>it; 
        int count = 0; 
        for(int i = 0; i < n; i++){
            if(!(arr[i] & 1)){
                count ++; 
            } 
        } 
        int ans = 2; 
        if(count == 1){
            ans = 1; 
        } 
        if(count > 1){
            ans = 0; 
        } 
        if(ans == 0){
            cout<<0<<endl; 
            continue; 
        }
        map<int, int> mp; 
        for(int i = 0; i < n; i++){
            int temp = arr[i]; 
            if(temp > 1){
                set<int> stt; 
                while((temp % 2) == 0) {
                    stt.insert(2);
                    temp /= 2;
                }
                for(int i = 3; (i * i) <= temp; i+=2) {
                    while ((temp % i) == 0) {
                        stt.insert(i);
                        temp /= i;
                    }
                }
                if(temp > 2) stt.insert(temp);
                for(auto &it : stt){
                    mp[it] ++; 
                } 
            }
        }
        int found = 0; 
        for(auto &it : mp){
            if(it.second > 1){
                // cout<<it.first<<endl; 
                cout<<0<<endl; 
                found = 1; 
                break; 
            } 
        } 
        if(!found){
            if(ans == 1) cout<<ans<<endl; 
            else{
                map<int, int> mpp; 
                for(int i = 0; i < n; i++){
                    int temp = arr[i]; 
                    
                    temp += 1; 
                    set<int> stt; 
                    while((temp % 2) == 0) {
                        stt.insert(2);
                        temp /= 2;
                    }
                    for(int i = 3; (i * i) <= temp; i+=2) {
                        while ((temp % i) == 0) {
                            stt.insert(i);
                            temp /= i;
                        }
                    }
                    if(temp > 2) stt.insert(temp);
                    for(auto &it : stt){
                        mpp[it] ++; 
                    } 
                } 
                int f = 0; 
                // for(auto &it : mpp){
                //     cout<<it.first <<" : "<<it.second<<endl; 
                // }
                for(auto &it : mp){
                    if(it.first > 1){
                        if(mpp[it.first]){
                            f = 1; 
                            cout<<1<<endl; 
                            break; 
                        }
                        if(f==1) break; 
                    }
                    if(f == 1) break; 
                }
                if(!f){
                    cout<<2<<endl; 
                }
            }
        }
    }
} 
