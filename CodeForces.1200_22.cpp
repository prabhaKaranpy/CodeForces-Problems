#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define int long long
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int n, k, x; cin>>n>>k>>x; 
    vector<int> arr(n); for(int &it : arr) cin>>it; 
    sort(arr.begin(), arr.end()); 
    if(n == 1) cout<<1<<endl; 
    else{ 
        // int noOfStableGroups = 1; 
        // for(int i = 1; i < n; i++){
        //     if(arr[i]-arr[i-1] <= x){
        //         continue; 
        //     } 
        //     else{
        //         int difference = (arr[i] - arr[i-1]); 
        //         int div = difference / x; 
        //         if(difference % x){
        //             div += 1LL; 
        //         } 
        //         div -= 1LL; 
        //         if(k >= div){
        //             k -= div; 
        //         } 
        //         else{
        //             noOfStableGroups ++; 
        //         } 
        //     } 
        // } 
        // cout<<noOfStableGroups<<endl; 
        vector<int> gaps; 
        for(int i = 1; i < n; i++){
            if(arr[i] - arr[i-1] > x){
                gaps.pb(arr[i]-arr[i-1]); 
            } 
        } 
        int noOfStableGroups = 1; 
        int size = gaps.size(); 
        sort(gaps.begin(), gaps.end()); 
        for(int i = 0; i < size; i++){
            int div = gaps[i] / x; 
            if(gaps[i] % x){
                div += 1LL; 
            } 
            div -= 1LL; 
            if(k >= div){
                k -= div; 
            } 
            else{
                noOfStableGroups += (size - i); 
                break; 
            } 
        } 
        cout<<noOfStableGroups<<endl; 
    }

}