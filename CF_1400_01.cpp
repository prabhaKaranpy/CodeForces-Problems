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
        int n, m; cin>>n>>m; 
        vector<int> arr(n); for(int &it : arr) cin>>it; 
        // map<int, int> mp; 
        vector<int> zeros; 
        int totalDigits = 0; 
        for(int &it : arr){
            int temp = 0; 
            int foundLastZero = 0; 
            int copy = it; 
            int digits = 0; 
            while(copy){
                int a = copy %10; 
                if(a == 0 && foundLastZero == 0) temp ++; 
                else{
                    foundLastZero = 1; 
                }
                copy /= 10; 
                digits ++; 
            } 
            if(temp != 0) zeros.pb(temp); 
            totalDigits += digits; 
        } 
        sort(zeros.rbegin(), zeros.rend()); 
        int size = zeros.size(); 
        for(int i = 0; i < size; i+=2){
            totalDigits -= zeros[i]; 
        } 
        if(totalDigits < (m+1)) cout<<"Anna"<<endl; 
        else cout<<"Sasha"<<endl; 
        // vector<pair<int, int>> lose; 
        // for(int &it : arr){
        //     lose.pb({it, })
        // }

    }
}