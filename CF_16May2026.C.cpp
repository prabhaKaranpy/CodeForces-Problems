// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// #define pb push_back
// #define endl "\n"
// #define int long long 
// #define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
// constexpr ll mod = 998244353;
// void f(int i, int &a, int s, int &digits, vector<int> &arr, int &mini){
//     if(i > (digits+1)) return; 
//     // if(s.size() > 0){
//     //     int temp = stoll(s); 
//     //     mini = min(mini, abs(a-temp)); 
//     // }
    
//     // s.append(to_string(arr[0])); 
//     if(s == 0){
//         if(arr[0] == 0) mini = min(mini, abs(a-s)); 
//     }
//     else mini = min(mini, abs(a-s)); 
//     s *= 10; s += arr[0]; 
//     f(i+1, a, s, digits, arr, mini); 
//     // s.pop_back(); 
//     if(s > 0) s /= 10; 
//     // s.append(to_string(arr[1])); 
//     s *= 10; s += arr[1]; 
//     f(i+1, a, s, digits, arr, mini); 
//     return; 
// }
// signed main(void){
//     prabha;
//     int T; cin>>T; 
//     while(T--){
//         int a, n; cin>>a>>n; 
//         vector<int> arr(2); for(int &it : arr) cin>>it; 
//         int s = 0; 
//         int digits = 0; 
//         int copy = a; 
//         while(copy){
//             digits ++; copy /= 10; 
//         } 
//         if(a == 0) digits = 1; 
//         int mini = 1e17; 
//         f(0, a, s, digits, arr, mini); 
//         cout<<mini<<endl; 
//     }
// }



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
        int a, m; cin>>a>>m; 
        vector<int> arr(2); for(int &it : arr) cin>>it; 
        int mini; 
        string s = to_string(a); 
        int n = s.size(); 
        int t = 0; 
        for(int i = 1; i <= (n+1); i++){
            t *= 10; t += arr[0]; 
        } 
        mini = abs(a-t); 
        t = 0; 
        for(int i = 1; i <= (n+1); i++){
            t *= 10; t += arr[1]; 
        } 
        mini = min(mini, abs(a-t)); 
        t = 0; 
        if(n > 1){for(int i = 1; i <= (n-1); i++){
            t *= 10; t += arr[1]; 
        } 
        mini = min(mini, abs(a-t)); }
        t = 0; 
        int found = 0; 
        for(int i = 0; i < n; i++){
            int digit = s[i] - '0'; 
            if(digit > arr[1]){
                // found = 1; 
                for(int j = i; j < n; j++){ 
                    t *= 10; t += arr[1]; 
                }
                break; 
            }
            else if(digit < arr[0]){
                // found = 1; 
                for(int j = i; j < n; j++){
                    t *= 10; t += arr[0]; 
                } 
                break; 
            }
            else if(digit == arr[0]){
                t *= 10; t += arr[0]; 
            } 
            else if(digit == arr[1]){
                t *= 10; t += arr[1]; 
            } 
            else if(arr[0] < digit && digit < arr[1]){
                found = 1; 
                int x= t; x *= 10; x += arr[0]; int y = t; y *= 10; y += arr[1]; 
                for(int j = i+1; j < n; j++){ 
                    x *= 10; x += arr[1]; 
                } 
                for(int j = i+1; j < n; j++){ 
                    y *= 10; y += arr[0]; 
                } 
                mini = min({mini, abs(a-x), abs(a-y)}); 
                break; 
            }
        }
        if(found == 0) mini = min(mini, abs(a-t)); 
        cout<<mini<<endl; 
    }
}