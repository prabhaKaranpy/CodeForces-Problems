#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
int check(int mid, vector<pair<int, int>> &arr, int &n){
    int startx = 0, starty = 0; 
    for(int i = 0; i < n; i++){
        int ix = arr[i].first, iy = arr[i].second; 
        startx -= mid; starty += mid; 
        startx = max(ix, startx); 
        starty = min(iy, starty); 
        if(starty < ix || startx > iy){
            return 0; 
        }
        // if(i < n-1){
        // //     // int jx = arr[i+1].first, jy = arr[i+1].second; 
        //     if(ix > startx){
        //         // if(jx >= iy){
        //         //     start = min(start+mid, iy); 
        //         // }
        //         // else if(jy < ix){
        //         //     start = min(ix, start+mid); 
        //         // }
        //         startx = min(startx+mid, ix); 
        //         starty = min(iy, starty+mid); 
        //     }
        //     else if(iy < startx){
        //         startx = max(ix, startx-mid); 
        //         starty = max(iy, starty-mid); 
        //     }
        //     else{
        //         // between 
        //         startx -= mid; starty += mid; 
        //         startx = max(ix, startx); 
        //         starty = min(iy, starty); 
        //     }
            // if(starty < ix || startx > iy){
            //     return 0; 
            // }
        // }
        // else{

        // }
    }
    return 1; 
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<pair<int, int>> arr(n); 
        for(auto &it : arr){
            cin>>it.first>>it.second; 
        }
        int l = 0, r = 1e9; 
        while(l <= r){
            int mid = (l+r) >> 1LL; 
            int ans = check(mid, arr, n); 
            if(ans){
                r = mid-1; 
            }
            else{
                l = mid+1; 
            }
        }
        cout<<l<<endl; 
    }
}