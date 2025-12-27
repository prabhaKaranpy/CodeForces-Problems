#include<bits/stdc++.h>
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<int> arr(n); 
        for(int &it : arr) cin>>it; 
        sort(arr.rbegin(), arr.rend()); 
        for(int &it : arr) cout<<it<<" "; 
        cout<<endl; 
    }
}
