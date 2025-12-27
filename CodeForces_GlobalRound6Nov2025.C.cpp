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
        vector<int> b(m); for(int &it : b) cin>>it; 
        vector<int> c(m); for(int &it : c) cin>>it; 
        int count = 0; 
        sort(arr.begin(), arr.end()); 
        vector<pair<int, int>> A; 
        for(int i = 0; i < m; i++){
            A.pb({b[i], c[i]}); 
        } 
        sort(A.begin(), A.end()); 
        for(int i = 0; i < m; i++){
            b[i] = A[i].first; 
            c[i] = A[i].second; 
        } 

        int pw = arr[n-1]; 
        auto ub = upper_bound(b.begin(), b.end(), pw); 
        int index; 
        if(ub == b.end()){
            index = m-1; 
        } 
        else{
            index = ub-b.begin(); index -= 1; 
        } 
        if(index < 0){
            cout<<0<<endl; 
            continue; 
        }
        int maxi = pw; 
        for(int i = index; i >= 0; i--){
            maxi = max(maxi, c[i]); 
        } 
        auto ubb = upper_bound(b.begin(), b.end(), maxi); 
        if(ubb == b.end()){
            index = m-1; 
        } 
        else{
            index = ubb - b.begin(); index -= 1; 
        } 
        if(index < 0){
            cout<<0<<endl; 
            continue; 
        }
        int prev = maxi; 
        for(int i = index; i >= 0; i--){
            maxi = max(maxi, c[i]); 
        } 
        int prevIndex = index; 
        while(maxi >= prev){
            auto ubb = upper_bound(b.begin(), b.end(), maxi); 
            if(ubb == b.end()){
                index = m-1; 
            } 
            else{
                index = ubb - b.begin(); index -= 1; 
            } 
            if(index == prevIndex) break; 
            prev = maxi; 
            for(int i = index; i > prevIndex; i--){
                maxi = max(maxi, c[i]); 
            } 
            prevIndex = index; 
        } 
        vector<int> ans; 
        for(int i = index; i >= 0; i--){
            if(c[i]) count ++; 
            else{
                ans.pb(b[i]); 
            } 
        } 
        int size = ans.size(); 
        if(size == 0){
            cout<<count<<endl; 
            continue; 
        }
        reverse(ans.begin(), ans.end()); 
        if(size > 0){
            ans.pop_back(); 
            count ++; 
            size -= 1; 
        }
        int j = size-1; 
        int i = n-2; 
        while(i >= 0 && j >= 0){
            if(arr[i] >= ans[j]){
                count ++; 
                i --; 
                j --; 
            } 
            else{
                while(j >= 0 && (arr[i] < ans[j])){
                    j --; 
                } 
            }
        } 
        cout<<count<<endl; 
    }
}