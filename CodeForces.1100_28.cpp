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
        int count = 0; 
        int prev = arr[0]; 
        for(int i = 0; i < n; i++){
            if(arr[i] == prev) count ++; 
        } 
        if(count == n){
            cout<<0<<endl; 
        } 
        else{
            int maxi = 0; 
            int copy = n; 
            while(copy){
                maxi += 1; 
                copy /= 2; 
            } 
            if(n > (1 << maxi)) maxi += 1; 
            int ans = 0; 
            int temp = arr[n-1]; 
            int i = n-2; 
            int length = 1; 
            while(i >= 0){
                if(arr[i] != temp){
                    ans ++; 
                    i = n-1-(2*length); 
                    length *= 2; 
                } 
                else{
                    i --; 
                    length ++; 
                } 
            } 
            cout<<min(maxi, ans)<<endl; 
        }
    }
}