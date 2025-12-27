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
        int n; cin>>n;
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        vector<int> temp; 
        for(int i= 0; i < n; i++){
            if(arr[i] < i+1) temp.push_back(i+1); 
        } 
        int size = temp.size(); 
        int count = 0; 
        for(int i= 0; i < size; i++){
            int target = arr[temp[i]-1]; 
            auto lb = lower_bound(temp.begin(), temp.end(), target); 
            if(lb == temp.end()){
                count += (size); 
            } 
            else{
                int index = lb - temp.begin(); 
                count += (index); 
            } 
        }  
        cout<<count<<endl; 
    }
}