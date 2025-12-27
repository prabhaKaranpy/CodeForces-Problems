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
        vector<int> a(n); for(int &it : a) cin>>it; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        int i = 1; 
        int maxi = 0; 
        int ansL = 0, ansR = 0; 
        int l = 0, r = 0; 
        while(i < n){
            if(arr[i] < arr[r]){
                if((r-l+1) > maxi){
                    int found = 0; 
                    for(int z = l; z <= r; z++){
                        if(arr[z] != a[z]){
                            found = 1; 
                            break; 
                        }
                    } 
                    if(found){
                        ansL = l; ansR = r; 
                        maxi = r-l+1;
                    }
                     
                }
                l = i; r = i; 
                i ++; 
            } 
            else{
                r ++; 
                i ++; 
            } 
        } 
        if((r-l+1) > maxi){
            int found = 0; 
            for(int z = l; z <= r; z++){
                if(arr[z] != a[z]){
                    found = 1; break; 
                } 
            } 
            if(found){
                ansL = l; ansR = r; 
                maxi = (r-l+1); 
            }
        }
        cout<<ansL+1<<" "<<ansR+1<<endl; 
    }
} 