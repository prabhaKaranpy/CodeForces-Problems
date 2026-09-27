#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define endl "\n"
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353; 
int left(int l, int &n, vector<int> &hash){ 
    while(l < n){
        if(hash[l]) l ++; 
        else break; 
    } 
    return l; 
}
int right(int r, int &n, vector<int> &hash){ 
    while(r >= 0){ 
        if(hash[r]) r--; 
        else break; 
    } 
    return r; 
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n, k; cin>>n>>k; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        int l = k-1, r = n-k; 
        vector<int> hash(n); 
        int maxi = 0; 
        while(l < n && r >= 0){
            if(l == r){
                if(!hash[l]){
                    maxi += arr[l]; 
                    hash[l] = 1; 
                    l = left(l, n, hash); r = right(r, n, hash); 
                }
            }
            else if(arr[l] > arr[r]){
                maxi += arr[l]; hash[l] = 1; 
                l = left(l+1, n, hash); 
                if(r < l) r = right(r-1, n, hash); 
            }
            else if(arr[r] > arr[l]){
                maxi += arr[r]; hash[r] = 1; 
                r = right(r-1, n, hash); 
                if(r < l) l = left(l+1, n, hash); 
            } 
            else if(arr[l] == arr[r]){
                int tl = left(l+1, n, hash), tr = right(r-1, n, hash); 
                int pl = tl, pr = tr; int found =0 ; 
                if(tl == n || tr == -1) found = 1; 
                while(arr[tl] == arr[tr]){
                    tl = left(tl+1, n, hash); tr = right(tr-1, n, hash); 
                    if((tl == pl && tr == pr) || (tl == n || tr == -1)){
                        found = 1; break; 
                    }
                    pl = tl; pr = tr; 
                } 
                if(found){
                    while(l < n){
                        if(!hash[l]) maxi += arr[l]; l ++; 
                    } 
                    break; 
                }
                else{
                    if(arr[tl] > arr[tr]){
                        while(l <= tl){
                            maxi += arr[l]; hash[l] = 1; 
                            l = left(l+1, n, hash); 
                            if(r < l) r = right(r-1, n, hash); 
                        }
                    }
                    else if(arr[tr] > arr[tl]){
                        while(r >= tr){
                            maxi += arr[r]; hash[r] = 1; 
                            r = right(r-1, n, hash); 
                            if(r < l) l = left(l+1, n, hash); 
                        } 
                    } 
                } 
            }
            // cout<<"L : "<<l<<"  R : "<<r<<endl; 
        } 
        cout<<maxi<<endl; 
    }
}