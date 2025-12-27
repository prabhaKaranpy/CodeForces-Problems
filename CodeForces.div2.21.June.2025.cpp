/*
#include<bits/stdc++.h>
using namespace std;
int main(void){
    int T; cin>>T;
    while(T--){
        int a, b, c, x, y, z;
        cin>>a>>b>>c>>x>>y>>z;
        int found = 0;
        int maxi = 0;
        maxi = max(max(a, b), max(max(c, x), max(y,z)));
        vector<pair<int,int>> arr = {{a, b}, {c, x}, {y, z}};
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        int temp = abs(arr[0].first - arr[0].second);
        int maxx = max(arr[0].first, arr[0].second);
        int ans = maxx*temp;
        int one = arr[1].first * arr[1].second;
        int two = arr[2].first * arr[2]. second;
        if((one + two == ans) && ((one < maxx && two < maxx) || ((one%maxx == 0) && (two % maxx == 0)))){
            cout<<"YES"<<endl;
            found = 1;
        }
        else{
            vector<pair<int,int>> ar = {{b, a}, {x, c}, {z, y}};
            sort(ar.begin(), ar.end());
            reverse(ar.begin(), ar.end());
            int temp = abs(ar[0].first - ar[0].second);
            int maxx = max(ar[0].first, ar[0].second);
            int ans = maxx*temp;
            int one = ar[1].first * ar[1].second;
            int two = ar[2].first * ar[2]. second;
            if(one + two == ans && (one%maxx == 0) && (two % maxx == 0)){
                cout<<"YES"<<endl;
                found = 1;
            }
            if(!found){
                cout<<"NO"<<endl;
            }
        }


    }
}
*/
