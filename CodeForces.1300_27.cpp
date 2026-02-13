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
    // int T; cin>>T; 
    // while(T--){
        int n, h; cin>>n>>h; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        int count = 1; 
        int maxi = 1; 
        vector<int> temp(arr); sort(temp.begin(), temp.end()); 
        for(int i = 0; i < n; i++){
            int cur = arr[i]; 
            int curCount = i+1; 
            vector<int> t; for(int j = 0; j <= i; j++) t.pb(arr[j]); 
            sort(t.begin(), t.end()); 
            int height = 0; int size = t.size(); 
            int index = -1; 
            for(int j = size-1; j >= 0; j-=2){
                if(height + (t[j]) <= h){
                    height += t[j]; 
                } 
                else{
                    index = j; 
                    break; 
                }
            } 
            if(index == -1) count = size; 
            else{
                count = (size-(index+1)); 
            } 
            maxi = max(maxi, count); 
        }
        cout<<maxi<<endl; 
    // }
}