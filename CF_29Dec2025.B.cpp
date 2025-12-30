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
        vector<int> arr(2); 
        cin>>arr[0]>>arr[1]; 
        vector<int> copy(arr); 
        int turn = 0; 
        int want = 1; 
        int first = 0; 
        while(1){
            if(arr[turn] < want){
                break; 
            } 
            arr[turn] -= want; 
            first ++; 
            want <<= 1; 
            turn ^= 1; 
        } 
        int second = 0; 
        want = 1; 
        turn = 1; 
        while(1){
            if(copy[turn] < want){
                break; 
            } 
            copy[turn] -= want; 
            second ++; 
            want <<= 1; 
            turn ^= 1; 
        } 
        cout<<max(first, second)<<endl; 
    }
}