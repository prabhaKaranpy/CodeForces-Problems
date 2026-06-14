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
        int n; cin>>n; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        sort(arr.rbegin(), arr.rend()); 
        if(n == 2){cout<<arr[0]<<" "<<arr[1]<<endl; continue; }
        int one = arr[0], two = arr[1]; 
        int found = 0; 
        for(int i = 2; i < n; i++){
            if(one % two != arr[i]){
                found = 1; 
                cout<<-1<<endl; 
                break; 
            }
            one = two; two = arr[i]; 
        }
        if(!found){
            cout<<arr[0]<<" "<<arr[1]<<endl; 
        }
    }
}