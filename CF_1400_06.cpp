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
        // int n; cin>>n; 
        // vector<int> arr(n); for(int &it : arr) cin>>it; 
        // int q; cin>>q; 
        // // vector<int> pref(n); pref[0] = arr[0]; 
        // // vector<int> copy(arr); reverse(copy.begin(), copy.end()); 
        // vector<int> limit(n); 
        // int prev = 0; 
        // int start = 0; 
        // for(int i = 1; i < n; i++){
        //     if(arr[prev] < arr[i]){
        //         for(int j = start; j <= prev; j++) limit[j] = prev; 
        //         start = i; 
        //     }
        //     prev ++; 
        // }
        // for(int j = start; j < n; j++) limit[j] = n-1; 
        // // for(auto &it : limit) cout<<it<<" "; 
        // // cout<<endl; 
        // // vector<int> temp(n); 
        // while(q--){
        //     int l, t; cin>>l>>t; 
        //     if(t > arr[l-1]) {cout<<-1<<" "; continue; }
        //     auto ub = upper_bound(arr.begin()+l-1, arr.begin()+limit[l-1]+1, t, greater<int>()); 
        //     int index = ub - arr.begin();    
        //     index -= 1; 
        //     cout<<(index+1)<<" "; 
        // } 
        // cout<<endl; 

        int n; cin>>n; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        int q; cin>>q; 
        // PER BIT - PREFIX (new concept) thought by Prady :)        
        // it is used in order to count the no. of '1's and '0's in the particular range (l,r); 
        vector<vector<int>> pref(n, vector<int> (33)); 
        for(int j = 0; j < 33; j++){
            pref[0][j] = !!(arr[0] & (1LL << j)); 
        }
        for(int i = 1; i < n; i++){
            for(int j = 0; j < 33; j++){
                pref[i][j] = pref[i-1][j] + (!!(arr[i] & (1LL << j))); 
            } 
        } 
        // for(auto &it : pref){
        //     for(auto &e : it) cout<<e<<" "; 
        //     cout<<endl; cout<<endl; 
        // } 
        // cout<<endl; 
        while(q--){
            int left, t; cin>>left>>t; 
            int found = 0; 
            int l = left-1, r = n-1; 
            int right = -1; 
            // binary search, because there exists a monotonicity in the '&' operation ... 
            while(l <= r){
                int mid = (l+r) >> 1LL; 
                int andValue = 0; 
                int total = (mid-(left-1)+1); 
                for(int j = 0; j < 33; j++){
                    int count = pref[mid][j] - ((left-1-1) >= 0 ? pref[left-1-1][j] : 0); 
                    if(count == total) andValue += (1LL << j); 
                } 
                // cout<<"Mid : "<<mid<<endl; 
                // cout<<"Total : "<<total<<endl; 
                // cout<<"andValue  : "<<andValue<<endl; 
                if(andValue < t){
                    r = mid-1; 
                }
                else if(andValue > t){
                    l = mid+1; 
                    right = mid; 
                    found = 1; 
                }
                else if(andValue == t){
                    l = mid+1; 
                    right = mid; 
                    found = 1; 
                    // cout<<"Right : "<<right<<endl; 
                } 
            } 
            if(!found) cout<<-1<<" "; 
            else cout<<(right+1)<<" "; 
        }
        cout<<endl; 
    }
}