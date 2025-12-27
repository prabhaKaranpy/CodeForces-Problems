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
        int found = 0; 
        for(int i = 1; i < n; i++){
            if(s[i] != s[i-1]){
                found = 1; 
                break; 
            }
        } 
        if(!found){
            cout<<-1<<endl; 
        } 
        else{
            int mini = n; 
            vector<int> arr(n); 
            for(int i = 0; i < n; i++){
                if(s[i] == 'a') arr[i] = 1; 
                else arr[i] = -1; 
            } 
            vector<int> pref(arr); 
            for(int i = 1; i < n; i++){
                pref[i] += pref[i-1]; 
            } 
            int ans = pref[n-1]; 
            if(ans == 0){
                cout<<0<<endl; 
            } 
            else{
                map<int, int> mp; 
                mp[0] = -1; 
                for(int i = 0; i < n; i++){
                    mp[pref[i]] = i; 
                    int temp = pref[i] - ans; 
                    if(mp.count(temp)){
                        int length = i-mp[temp]; 
                        mini = min(mini, length); 
                    } 
                } 
                if(mini == n) mini = -1; 
                cout<<mini<<endl; 
            }
           
        }
    }
}