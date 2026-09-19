#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353; 
int f(int n){
    return ((n * (n+1)) / 2LL); 
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, m; cin>>n>>m; 
        vector<vector<int>> arr; 
        set<vector<int>> stt; 
        for(int i = 0; i < m; i++){
            vector<int> temp(2); cin>>temp[0]>>temp[1]; 
            sort(temp.begin(), temp.end()); 
            stt.insert(temp); 
        } 
        if(m == 0){
            cout<<((n * (n+1LL)) / 2LL)<<endl; continue; 
        } 
        for(auto &it : stt) arr.pb(it); 
        sort(arr.begin(), arr.end()); 
        int size = arr.size(); 
        vector<int> A; // first elements... 
        vector<int> B; // second elements... 
        vector<int> suf(size); // storing minimum value from behind... 
        for(auto &it : arr){
            A.pb(it[0]); B.pb(it[1]); 
        } 
        suf[size-1] = B[size-1]; 
        for(int i= size-2; i >= 0; i--){
            suf[i] = min(suf[i+1], B[i]); 
        } 

        // vector<int> temp; 
        // set<int> st; for(auto &it : arr) st.insert(it[1]); 
        // for(auto &it : st) temp.pb(it); 
        // sort(temp.begin(), temp.end()); 
        int count = 0; 
        for(int i = 1; i <= n; i++){
            auto lb = lower_bound(A.begin(), A.end(), i); 
            if(lb != A.end()){ 
                int index = lb - A.begin(); 
                int value = suf[index]; 
                // int value = *lb; 
                int distance = value -i; 
                count += distance; 
            } 
            else if(lb == A.end()){ 
                int distance = n - i +1; 
                count += distance; 
            }
        } 
        cout<<count<<endl; 

        // vector<vector<int>> merged; 
        // merged.pb(arr[0]); 
        // for(int i= 1; i < m; i++){
        //     int start = arr[i][0], end = arr[i][1]; 
        //     if(merged.back()[1] >= start){
        //         merged.back()[1] = max(merged.back()[1], end); 
        //     } 
        //     else if(merged.back()[1] < start){
        //         merged.pb(arr[i]); 
        //     } 
        // } 
        // for(auto &it : merged){
        //     cout<<it[0]<<" : "<<it[1]<<endl; 
        // }
        // int size = merged.size(); 
        // int curEnd = merged[0][1]; 
        // int count = 0LL; 
        // for(int i = 1; i < size; i++){
        //     int curStart = merged[i][0]; 
        //     int distance = curStart - curEnd; 
        //     count += f(distance); 
        //     curEnd = merged[i][1]; 
        // } 
        // // begining...
        // count += f(merged[0][0] - 1); 
        // // atTheEnd... 
        // count += f(n -merged[size-1][1]); 
        // // now total segments count will be the final answer...  
        // cout<<count<<endl; 
    }
}