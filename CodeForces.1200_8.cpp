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
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        if(n <= 3){
            cout<<-1<<endl; 
            continue; 
        } 
        int mini = 1, maxi = n; 
        int left = 0, right = n-1; 
        int found = 0; 
        while(left < right){ 
            if(arr[left] != maxi && (arr[left] != mini) && (arr[right] != maxi) && (arr[right] != mini)){
                cout<<left+1<<" "<<right+1<<endl; 
                found = 1;
                break; 
            }
            if(arr[left] == mini){
                mini ++; 
                left ++; 
            } 
            else if(arr[left] == maxi){
                maxi --; 
                left ++; 
            } 
            if(arr[right] == mini){
                mini ++; 
                right --; 
            } 
            else if(arr[right] == maxi){
                right --; 
                maxi --; 
            } 
            if(maxi < mini) break; 
        } 
        if(!found){
            cout<<-1<<endl; 
        }
    }
}