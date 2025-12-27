#include<bits/stdc++.h>
using namespace std;
int main(void){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        vector<int> newArr(n);
        for(int &it : newArr) cin>>it;
        if(n == 1){
            cout<<1<<endl;
        }
        else{
            vector<int> arr;
            arr.push_back(newArr[0]);
            for(int i = 1; i < n; i++){
                if(newArr[i] == newArr[i-1]){
                    continue;
                }
                else arr.push_back(newArr[i]);
            }
            int m = arr.size();
            if(m == 1) cout<<1<<endl;
            else{
                int i = 1;
                int ans = 0;
                while(i < m){
                    int len = 1;
                    while((i < m) && (arr[i]-arr[i-1] == 1)){
                        len ++;
                        i++;
                    }
                    ans = ans + ((len+1)/2) ; // ceil division...
                    i ++;
                    if(i == m) ans ++;
                    // if(len == 1) ans++;
                }
                cout<<ans<<endl;
            }
        }

    }
}
