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
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        vector<int> indexes; 
        // map<int, int> mp; 
        for(int i = 0; i < n-1; i++){
            if(arr[i] != arr[i+1]) indexes.pb(i); 
            // mp[i] = 1; 
        } 
        int q; cin>>q; 
        while(q--){
            int left, right; cin>>left>>right; 
            auto lowerBound = lower_bound(indexes.begin(), indexes.end(), left-1); 
            // if(lowerBound == indexes.end()) cout<<"haha"<<endl; 
            // auto lb = *lowerBound; 
            // cout<<"LB : "<<lb<<endl; 
            if(lowerBound == indexes.end()) cout<<-1<<" "<<-1<<endl; 
            else{
                int lb = *lowerBound; 
                if((lb+1 <= right-1)){
                    cout<<lb+1<<" "<<lb+2<<endl; 
                }
                else{
                    cout<<-1<<" "<<-1<<endl; 
                }
            }
            
            // auto ub = next(lb); 
            // if(ub != indexes.end()){
            //     int l = *lb; int r = *ub; 
            // }
        }
        cout<<endl; 
    }
}