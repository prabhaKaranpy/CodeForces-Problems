#include<bits/stdc++.h>
using namespace std;
int main(void){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        vector<long long> arr(n);
        for(auto &it : arr) cin>>it;
        vector<long long> revArr(arr);
        reverse(revArr.begin(), revArr.end());
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            mp[arr[i]] ++;
        }
        int j = 0;
        cout<<arr[j]<<" ";
        long long temp = 0;
        for(int i = 0; i < n-1; i++){
            temp += revArr[i];
            mp[revArr[i]] --;
            if(mp[arr[j]] >= 1){
                cout<<temp+arr[j]<<" ";
            }
            else{
                j++;
                while(mp[arr[j]] <= 0){
                    j++;
                }
                cout<<temp+arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
