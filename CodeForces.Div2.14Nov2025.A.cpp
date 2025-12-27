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
        int n, a; cin>>n>>a; 
        vector<int> arr(n); for(int &It : arr) cin>>It; 
        sort(arr.begin(), arr.end()); 
        int found = 0; 
        for(int &it : arr){
            if(it == a){
                found = 1; 
                break; 
            } 
        } 
        if(found){
            int first, second; 
            for(int i = 0; i < n; i++){
                if(arr[i] == a) second = i; 
            } 
            for(int i = n-1; i >= 0; i--){
                if(arr[i] == a) first = i; 
            } 
            int maxi = max(first, (n-1)-second); 
            if(maxi == 0){
                cout<<1<<endl; 
                continue; 
            }
            if(maxi == first){
                cout<<arr[first-1]<<endl; 
                continue; 
            } 
            else{
                cout<<arr[second+1]<<endl; 
            }
        } 
        else{
            auto lb = lower_bound(arr.begin(), arr.end(), a); 
            if(lb == arr.end()){
                cout<<arr[n-1]<<endl; 
                continue; 
            }
            int index = lb-arr.begin(); 
            if(index > (n-index)){
                if(index-1 < 0) cout<<arr[0]<<endl; 
                else cout<<arr[index-1]<<endl; 
            } 
            else cout<<arr[index]<<endl; 
        }

    }
}