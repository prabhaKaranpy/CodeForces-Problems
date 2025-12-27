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
        if(arr[0] == 1 || arr[n-1] == n){
            cout<<"YES"<<endl; 
            if(arr[0] == 1){
                for(int i = 2; i <= n; i++){
                    cout<<1<<" "<<i<<endl; 
                }
            } 
            else if(arr[n-1] == n){
                for(int i = 1; i <= n-1; i++){
                    cout<<i<<" "<<n<<endl; 
                }
            }
            continue; 
        } 
        if(arr[0] == n || arr[n-1] == 1){
            cout<<"NO"<<endl; continue; 
        }
        vector<int> pref(n); 
        pref[0] = arr[0]; 
        for(int i = 1; i < n; i++){
            pref[i] = min(arr[i], pref[i-1]); 
        } 
        vector<int> temp(arr);  
        for(int i = n-2; i >= 0; i--){
            if(temp[i] < temp[i+1]) temp[i] = temp[i+1]; 
        } 
        int found= 0; 
        for(int i = n-2; i >= 0; i--){
            if(temp[i] > temp[i+1]){
                if(pref[i-1] < temp[i+1]){
                    continue; 
                } 
                else{
                    found = 1; 
                    cout<<"NO"<<endl; 
                    break; 
                } 
            } 
        } 
        if(!found){
            cout<<"YES"<<endl; 
            int prev = temp[n-1]; 
            for(int i = n-2; i >= 0; i--){
                if(temp[i] == temp[i+1]){
                    cout<<prev<<" "<<arr[i]<<endl; 
                } 
                else if(temp[i] > temp[i+1]){
                    cout<<pref[i-1]<<" "<<prev<<endl; // or cout<<pref[i-1]<<" "<<temp[i+1]<<endl; 
                    prev = arr[i]; // or prev = temp[i]; 
                }
            }
        } 
    }
}

