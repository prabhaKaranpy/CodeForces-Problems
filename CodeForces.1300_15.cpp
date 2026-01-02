#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define int long long 
#define endl "\n" 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<vector<int>> arr; 
        for(int i = 0; i < n;i++){
            int k; cin>>k; 
            vector<int> temp(k); for(int &it : temp) cin>>it; 
            arr.pb(temp); 
        } 
        vector<vector<int>> intervals; 
        for(auto &it : arr){
            int size = it.size(); 
            int start = it[0]+1LL; 
            int cur = start; 
            for(int i = 0; i < size; i++){
                if(cur > it[i]){
                    cur ++; continue; 
                }
                else{
                    int difference = it[i]+1 - cur; 
                    start += difference; 
                    cur = it[i]+1+1; 
                } 
            } 
            intervals.pb({start, (cur)}); 
        } 
        sort(intervals.begin(), intervals.end()); 
        vector<vector<int>> mergedIntervals; 
        mergedIntervals.pb(intervals[0]); 
        int size = intervals.size(); 
        for(int i = 1; i < size; i++){
            int start = intervals[i][0], end = intervals[i][1]; 
            if(start <= mergedIntervals.back()[1]){
                // mergedIntervals.back()[1] = max(mergedIntervals.back()[1], end); 
                // "KEY" - below line
                mergedIntervals.back()[1] = mergedIntervals.back()[0] + (mergedIntervals.back()[1]-mergedIntervals.back()[0] + end-start); 
            } 
            else{
                mergedIntervals.pb({start, end}); 
            } 
        } 
        size = mergedIntervals.size(); 
        if(size == 1){
            cout<<mergedIntervals[0][0]<<endl; continue; 
        } 
        int ans = mergedIntervals[0][0]; 
        for(int i = 1; i < size; i++){
            ans += (mergedIntervals[i][0] - mergedIntervals[i-1][1]); 
        } 
        cout<<ans<<endl; 
        // int maxi = -1e18; 
        // vector<int> maxiIndex(n, -1); 
        // for(auto &it : arr){
        //     for(int &e : it){
        //         maxi = max(maxi, e); 
        //     } 
        // } 
        // for(int i = 0; i <n; i++){
        //     int size = arr[i].size(); 
        //     int found = 0; 
        //     for(int j = 0; j < size; j++){
        //         if(arr[i][j] == maxi){
        //             maxiIndex[i] = j; 
        //             found = 1; 
        //             break; 
        //         } 
        //     } 
        // } 
        // int reduce = 0LL; 
        // int ans = maxi+1LL; 
        // int maximumDistanceCave = 0; 
        // for(int i= 0; i < n;i++){
        //     if(maxiIndex[i] == -1){
        //         reduce += (int)(arr[i].size()); 
        //     } 
        //     else{
        //         maximumDistanceCave = max(maximumDistanceCave, maxiIndex[i]); 
        //     } 
        // } 
        // ans -= (reduce + maximumDistanceCave); 
        // cout<<ans<<endl; 
        

        // 8 3 4 5 12 13 11 14 12 -> 10 -> 18
        // 5 8 2 9 10 3           -> 9  -> 14
        // 5 5 15 11 4 5          -> 15 -> 20
        // 2 14 2                 -> 15 -> 17
        // 4 13 1 8 5             -> 14
        // 1 14                   -> 15
        // 7 5 12 1 10 13 5 11    -> 12 
        // 6 8 9 16 7 3 6         -> 15
        // 8 10 2 1 1 12 11 1 11  -> 11                   [10, 9, 15, 15, 14, 15, 12, 15, 11]; 
        // sorted : [7-9, 10-18, 11-19, 12-19, 14-18, 15-21, 15, 15, 15] "The problem reshaped as Merge Intervals Problem now!" 
    }
}
