#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define int long long 
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
int f(int n){
    return (((n * (n+1LL))/2LL)); 
}
void solve(){
    int k, x; cin>>k>>x; 
    int triangle = f(k) + f(k-1); 
    if(triangle <= x){
        cout<<((2*k)-1)<<endl;
        return; 
    }
    int l = 1, r = (2*k)-1; 
    while(l <= r){
        int mid = (l+r) >> 1LL; 
        // cout<<"mid : "<<mid<<endl; 
        // int total = f(mid);              // big blunder! 
        // if(mid > k){
        //     total += (f(k-1) - f(((2*k)-1) - mid)); 
        // } 
        int total = 0; 
        if(mid <= k){
            total += f(mid); 
        } 
        else{
            total += f(k) + f(k-1) - f(((2*k)-1) - mid); 
        }
        if(total == x){
            cout<<mid<<endl; 
            return; 
        }
        else if(total < x){
            if(total >= triangle){
                cout<<((2*k)-1)<<endl; 
                return; 
            }
            l = mid+1; 
        } 
        else{
            int temp = 0;  
            // if(mid > k){
            //     temp += (f(k-1) - f(((2*k)-1) - (mid-1))); 
            // }
            // else temp -= mid; 
            if(mid <= k){
                temp = f(mid) - mid; 
            } 
            else{
                temp += f(k) + f(k-1) - f(((2*k)-1) - (mid-1)); 
            }
            // cout<<"Temp : "<<temp<<endl; 
            if(temp < x){
                // cout<<"Hola"<<endl; 
                cout<<mid<<endl; 
                return; 
            }
            // ans = mid; 
            r = mid-1; 
        }
    }
    // cout<<"hello moto"<<endl; 
    // cout<<"L : "<<l<<endl; 
    // cout<<ans<<endl; 
    return; 
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){        // here i'm using solve function to use return for breaking the test case...
        solve();   
    }
}