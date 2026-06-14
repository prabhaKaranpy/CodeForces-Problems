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
    int T; cin>>T; 
    while(T--){
        int n, k; cin>>n>>k; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        sort(arr.begin(), arr.end()); 
        if(n == 1){
            cout<<"NO"<<endl; 
            continue; 
        }
        map<int, int> mp; for(int &it : arr) mp[it] ++; 
        int first = -1, second = -1; 
        for(int i = n-1; i > 0; i--){
            if((arr[i] - arr[i-1] <= k) && (arr[i] != arr[i-1])){
                first = i-1, second = i; 
                break; 
            }
        }
        if(arr[0] == arr[n-1]){
            if(n &1) cout<<"NO"<<endl; 
            else cout<<"YES"<<endl; 
            continue; 
        }
        if(second == -1 && first == -1){
            int found  =0; 
            for(auto &it : mp){
                if(!(it.second &1)){
                    found = 1; 
                    cout<<"YES"<<endl; 
                    break; 
                }
            }
            if(!found) cout<<"NO"<<endl; 
            continue; 
        }
        for(int i = second; i < n; i++){
            if((i == n-1) && (arr[i] == arr[second])){
                second = i; break; 
            }
            if(arr[i] != arr[second]){
                second = i-1; break; 
            }
        } 
        cout<<"YES"<<endl; 
    }
}