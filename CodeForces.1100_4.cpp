#include<bits/stdc++.h>
#define ll long long 
#define input for(auto &it : arr) cin>>it;
#define FastIO std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std; 
int odd(int x){
    return (x & 1); 
}
int kadane(vector<int> &arr){
    int n = arr.size(); 
    int cur = arr[0]; 
    int maxi = arr[0]; 
    for(int i = 1; i < n; i++){
        cur += arr[i]; 
        if(arr[i] > cur) cur = arr[i]; 
        maxi = max(maxi, cur); 
    } 
    return maxi; 
}
signed main(void){ 
    FastIO; 
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); input;
        int maxi = -1e9; // as per the constraints 
        // for(int i = 0; i < n-1; i++){
        //     if(odd(arr[i]) != odd(arr[i+1])){

        //     }
        // } 
        vector<vector<int>> subArrays; 
        int i = 1; 
        int game = arr[0] & 1; 
        vector<int> temp; temp.push_back(arr[0]); 
        while(i < n){
            if((arr[i]&1) != game){
                game ^= 1; 
                temp.push_back(arr[i]); 
                i ++; 
            } 
            else{
                subArrays.push_back(temp); 
                temp.clear(); 
                temp.push_back(arr[i]); 
                i ++; 
            } 
        } 
        // if(!temp.empty()){       // always temp is not empty(), i.e, temp.size() > 0 for all time as well as possible! 
            subArrays.push_back(temp); 
        // } 
        
        // implement kadane's algorithm to find Maximum Subarray Sum for an given array as well as possible! 
        // int maxi = -1e3; 
        for(vector<int> &it : subArrays){
            maxi = max(maxi, kadane(it)); 
        } 
        cout<<maxi<<endl;  
    }
}


