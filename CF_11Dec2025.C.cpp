#include<bits/stdc++.h>        // how I debugged and found the answer means, I found that the last two values will repeat...
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
        vector<int> arr(n); for(int &It : arr) cin>>It; 
        int sum = 0LL; 
        vector<int> odd, even; 
        for(int &It : arr){
            if(It &1) odd.pb(It); 
            else even.pb(It); 
        } 
        if(n == 1){
            if(arr[0]&1) cout<<arr[0]<<endl; 
            else cout<<0<<endl; 
            continue; 
        }
        sort(even.begin(), even.end(), greater<int>()); 
        sort(odd.begin(), odd.end(), greater<int>()); 
        if((int)odd.size() == 0){
            for(int i = 0; i < n; i++) cout<<0<<" "; 
            cout<<endl; 
            continue; 
        } 
        int oddSize = odd.size(), evenSize = even.size(); 
        if(oddSize&1){
            if(evenSize == 0){
                for(int i = 0; i< n; i++){
                    if(i &1){
                        cout<<0<<" "; 
                    } 
                    else cout<<odd[0]<<" "; 
                } 
                cout<<endl; 
            }
            else{
                vector<int> temp; 
                sum += odd[0]; 
                temp.pb(sum); 
                for(int i= 0;i < evenSize; i++){
                    sum += even[i]; temp.pb(sum); 
                } 
                int k = 1; 
                int size = temp.size(); 
                vector<int> v = {temp[size-2], temp[size-1]}; 
                int i = 0; 
                for(auto &it : temp){
                    cout<<it<<" "; 
                    k ++; 
                } 
                while(k <= n){
                    cout<<v[i%2]<<" "; 
                    i ++; k ++; 
                } 
                // if(!(evenSize&1)){
                //     vector<int> t = temp; 
                //     temp.clear(); 
                //     for(int j = 1; j < (size); j++) temp.pb(t[j]); 
                //     size = temp.size(); 
                //     cout<<t[0]<<" "; 
                //     k ++; 
                // }
                // while(k <= n){
                //     cout<<temp[(i%size)]<<" "; 
                //     i ++; k ++; 
                // }
                cout<<endl; 
            }
        } 
        else{
            if(evenSize == 0){
                for(int i = 0; i< n; i++){
                    if(i &1){
                        cout<<0<<" "; 
                    } 
                    else cout<<odd[0]<<" "; 
                } 
                cout<<endl; 
            } 
            else{
                vector<int> temp; 
                sum += odd[0]; 
                temp.pb(sum); 
                for(int i= 0;i < evenSize; i++){
                    sum += even[i]; temp.pb(sum); 
                } 
                int k = 1; 
                int size = temp.size(); 
                vector<int> v = {temp[size-2], temp[size-1]}; 
                int i = 0; 
                for(auto &it : temp){
                    cout<<it<<" "; 
                    k ++; 
                } 
                while(k <= n){
                    if(k == n){
                        cout<<0; 
                        break; 
                    }
                    cout<<v[i%2]<<" "; 
                    i ++; k ++; 
                } 
                // int k = 1; 
                // int size = temp.size(); 
                // int i = 0; 
                // if(!(evenSize&1)){
                //     vector<int> t = temp; 
                //     temp.clear(); 
                //     for(int j = 1; j < (size); j++) temp.pb(t[j]); 
                //     size = temp.size(); 
                //     cout<<t[0]<<" "; 
                //     k ++; 
                // }
                // while(k <= n){
                //     if(k == n){
                //         cout<<0; 
                //         break; 
                //     }
                //     cout<<temp[(i%size)]<<" "; 
                //     i ++; k ++; 
                // }
                cout<<endl; 
            }
        }
        // sum += odd[0]; 
        // int k = 1; 
        // if((int)odd.size() &1){
        //     if((int)even.size() == 0){
        //         for(int i = 0; i< n; i++){
        //             if(i &1){
        //                 cout<<0<<" "; 
        //             } 
        //             else cout<<sum<<" "; 
        //         } 
        //         cout<<endl; 
        //     } 
        //     else{
        //         cout<<sum<<" "; 
        //         k ++; 
        //         vector<int> temp; 
        //         int size = even.size(); 
        //         for(int i = 0; i < size; i++){
        //             sum += (even[i]); 
        //             k ++; 
        //             temp.pb(sum); 
        //             cout<<sum<<" "; 
        //         } 
        //         while(k <= n){
        //             int i = 0; 
        //             while(k <= n){
        //                 cout<<temp[i%(int)(temp.size())]<<" "; i++; k ++; 
        //             }
        //         } 
        //         cout<<endl; 
        //     }
        // }
        // else{
        //     if((int)even.size() == 0){
        //         for(int i = 0; i< n; i++){
        //             if(i &1){
        //                 cout<<0<<" "; 
        //             } 
        //             else cout<<sum<<" "; 
        //         } 
        //         cout<<endl; 
        //     } 
        //     else{
        //         cout<<sum<<" "; 
        //         k ++; 
        //         vector<int> temp; 
        //         int size = even.size(); 
        //         for(int i = 0; i < size; i++){
        //             sum += (even[i]); 
        //             k ++; 
        //             temp.pb(sum); 
        //             cout<<sum<<" "; 
        //         } 
        //         while(k <= n){
        //             int i = 0; 
        //             while(k <= n){
        //                 if(k == n){
        //                     cout<<0; 
        //                     k ++; 
        //                     break; 
        //                 }
        //                 cout<<temp[i%(int)(temp.size())]<<" "; i++; k ++; 
        //             } 
        //         } 
        //         cout<<endl; 
        //     }
        // }
    }
}