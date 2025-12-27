#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
bool condition(int i, int j, int &n){
    return (i >= 0 && i < n && j >= 0 && j < n); 
}
signed main(void){
    prabha;
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<vector<int>> arr(n, vector<int>(n)); 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                char ch; cin>>ch; 
                if(ch == '.') arr[i][j] = 1; 
            } 
        } 
        // for(auto &it : arr){
        //     for(int &e : it) cout<<e<<" "; 
        //     cout<<endl; 
        // }
        int blackCount = 0; 
        for(auto &it : arr){
            for(int &e : it){
                if(!e) blackCount ++; 
            } 
        } 
        if(!blackCount){
            cout<<"YES"<<endl; continue; 
        } 
        int x = -1, y = -1; 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(!arr[i][j]){
                    x = i; y = j; break; 
                } 
            } 
            if(x != -1 && y != -1) break; 
        } 
        // cout<<"I : "<<x<<" "<<"J : "<<y<<endl; 
        // leading diagonal...
        int i = x, j = y; 
        int blacks = 0; 
        int mainLeadingDiagonalBlacks; 
        while(i < n && j < n){
            if(condition(i, j, n) && arr[i][j] == 0){
                blacks ++; 
            } 
            i ++; j++;  
        } 
        i = x-1; j = y-1; 
        while(i >= 0 && j >= 0){
            if(condition(i, j, n) && arr[i][j] == 0) blacks ++; 
            i --; j --; 
        } 
        mainLeadingDiagonalBlacks = blacks; 
        i = x-1; j = y; 
        while(i < n && j < n){
            if(condition(i, j, n) && arr[i][j] == 0){
                blacks ++; 
            } 
            i ++; j++;  
        } 
        i = x-2; j = y-1; 
        while(i >= 0 && j >= 0){
            if(condition(i, j, n) && arr[i][j] == 0) blacks ++; 
            i --; j --; 
        } 
        if(blacks == blackCount){
            cout<<"YES"<<endl; continue; 
        }
        i = x+1; j = y; 
        blacks = mainLeadingDiagonalBlacks; 
        while(i < n && j < n){
            if(condition(i, j, n) && arr[i][j] == 0){
                blacks ++; 
            } 
            i ++; j++;  
        } 
        i = x; j = y-1; 
        while(i >= 0 && j >= 0){
            if(condition(i, j, n) && arr[i][j] == 0) blacks ++; 
            i --; j --; 
        } 
        if(blacks == blackCount){
            cout<<"YES"<<endl; continue; 
        } 

        // opposite leading diagonal...
        blacks = 0; mainLeadingDiagonalBlacks = 0; 
        i = x; j = y; 
        while(i >= 0 && j < n){
            if(condition(i, j, n) && arr[i][j] == 0) blacks ++; 
            i --; j ++; 
        } 
        i = x+1; j = y-1; 
        while(i < n && j >= 0){
            if(condition(i, j, n) && arr[i][j] == 0) blacks ++; 
            i ++; j --; 
        } 
        mainLeadingDiagonalBlacks = blacks; 
        i = x-1; j = y; 
        while(i >= 0 && j < n){
            if(condition(i, j, n) && arr[i][j] == 0) blacks ++; 
            i --; j ++; 
        } 
        i = x; j = y-1; 
        while(i < n && j >= 0){
            if(condition(i, j, n) && arr[i][j] == 0) blacks ++; 
            i ++; j --; 
        } 
        if(blacks == blackCount){
            cout<<"YES"<<endl; continue; 
        } 
        blacks = mainLeadingDiagonalBlacks; 
        i = x+1; j = y; 
        while(i >= 0 && j < n){
            if(condition(i, j, n) && arr[i][j] == 0) blacks ++; 
            i --; j ++; 
        } 
        i = x+2; j = y-1; 
        while(i < n && j >= 0){
            if(condition(i, j, n) && arr[i][j] == 0) blacks ++; 
            i ++; j --; 
        } 
        if(blacks == blackCount){
            cout<<"YES"<<endl; continue; 
        } 
        
        
        // box...
        if(blackCount == 4){
            if(y+1 < n && x-1 >= 0 && !arr[x][y+1] && !arr[x-1][y] && !arr[x-1][y+1]){
                cout<<"YES"<<endl; 
                continue; 
            } 
            else if(y-1 >= 0 && x-1 >= 0 && !arr[x][y-1] && !arr[x-1][y] && !arr[x-1][y-1]){
                cout<<"YES"<<endl; 
                continue; 
            } 
            else if(y+1 < n && x+1 < n && !arr[x][y+1] && !arr[x+1][y] && !arr[x+1][y+1]){
                cout<<"YES"<<endl; 
                continue; 
            } 
            else if(y-1 >= 0 && x+1 < n && !arr[x][y-1] && !arr[x+1][y] && !arr[x+1][y-1]){
                cout<<"YES"<<endl; 
                continue; 
            } 
        }
        cout<<"NO"<<endl; 
    }
}



// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// #define pb push_back
// #define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
// constexpr ll mod = 998244353; 
// bool f(vector<vector<int>> &a){
//     int n = a.size(); 
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             if(j-1 >= 0 && j+1 < n){
//                 if(a[i][j] == 0 && a[i][j-1] == 0 && a[i][j+1] == 0){
//                     return true; 
//                 } 
//             }
//             if(i-1 >= 0 && i+1 < n){
//                 if(a[i][j] == 0 && a[i-1][j] == 0 && a[i+1][j] == 0){
//                     return true; 
//                 } 
//             }
//         } 
//     } 
//     return false; 
// }
// signed main(void){
//     prabha;
//     int T; cin>>T; 
//     while(T--){
//         int n; cin>>n; 
//         vector<vector<char>> grid; 
//         for(int i = 0; i < n; i++){
//             vector<char> temp; 
//             for(int j = 0; j < n; j++){
//                 char ch; cin>>ch; 
//                 temp.pb(ch); 
//             } 
//             grid.pb(temp);
//         } 
//         vector<vector<int>> arr(n, vector<int>(n)); 
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < n; j++){
//                 if(grid[i][j] == '.') arr[i][j] = 1; 
//             }
//         } 
//         int black = 0; 
//         for(auto &it : arr){
//             for(int &e : it){
//                 if(e == 0){
//                     black ++; 
//                 } 
//             }
//         } 
//         // for(auto &it : arr){
//         //     for(int &e : it){
//         //         cout<<e<<" "; 
//         //     } cout<<endl; 
//         // } 
//         // cout<<"Black : "<<black<<endl; 
//         int x = -1, y = -1; 
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < n; j++){
//                 if(condition(i, j, n) && arr[i][j] == 0){
//                     x = i; y = j; 
//                     break; 
//                 } 
//             } 
//             if(x != -1 && y != -1) break; 
//         } 
//         if(x == -1 && y == -1){
//             cout<<"YES"<<endl; 
//             continue; 
//         } 
//         // cout<<x<<" "<<y<<endl; 
//         vector<vector<int>> a = arr; 
//         if(x+1 < n && y+1 < n){
//             a[x+1][y] = 0; a[x+1][y+1] = 0; a[x][y+1] = 0; 
//             int count = 0; 
//             for(auto &it : a){
//                 for(int &e : it){
//                     if(e == 0) count ++; 
//                 } 
//             } 
//             if(count == 4){
//                 cout<<"YES"<<endl; 
//                 continue; 
//             } 
//             // a[x+1][y] = arr[x+1][y]; a[x+1][y+1] = arr[x+1][y+1]; a[x][y+1] = arr[x][y+1];
//             a = arr; 
//         } 
//         if(x+1 < n && y-1 >= 0){
//             a[x+1][y] = 0; a[x+1][y-1] = 0; a[x][y-1] = 0; 
//             int count = 0; 
//             for(auto &it : a){
//                 for(int &e : it){
//                     if(e == 0) count ++; 
//                 } 
//             } 
//             if(count == 4){
//                 cout<<"YES"<<endl; 
//                 continue; 
//             } 
//             // a[x+1][y] = arr[x+1][y]; a[x+1][y-1] = arr[x+1][y-1]; a[x][y-1] = arr[x][y-1]; 
//             a = arr; 
//         } 
    
//         int white = 0; 
//         int total = 1; 

//         int i = x, j = y; 
//         int game = 1; 
//         while(i < n && j < n){
//             if(game){
//                 if(j+1 < n){
//                     i = i; 
//                     j = j+1; 
//                     if(a[i][j] == 1) white ++; 
//                     a[i][j] = 0; 
//                     total ++; 
//                     game ^= 1; 
//                 }
//                 else break; 
//             } 
//             else{
//                 if(i+1 < n){
//                     i = i+1; j = j; 
//                     if(a[i][j] == 1) white ++; 
//                     a[i][j] = 0; 
//                     total ++; 
//                     game ^= 1; 
//                 }
//                 else break; 
//             }
//         } 
//         if(!f(a)){
//             // for(int i = 0; i < n; i++){
//             //     for(int j = 0; j < n; j++){
//             //         if(arr[i][j] == 1 && a[i][j] == 0){
//             //             white ++; 
//             //         }
//             //         if(a[i][j] == 0) total ++; 
//             //     }
//             // }
//             if((total-white) == black){
//                 cout<<"YES"<<endl;
//                 continue; 
//             }
//         } 
//         a = arr; 
//         i = x, j = y; 
//         white = 0; total = 1; 
//         game = 0; 
//         while(i < n && j < n){
//             if(game){
//                 if(j+1 < n){
//                     i = i; 
//                     j = j+1; 
//                     if(a[i][j] == 1) white ++; 
//                     a[i][j] = 0; 
//                     total ++; 
//                     game ^= 1; 
//                 }
//                 else break; 
//             } 
//             else{
//                 if(i+1 < n){
//                     i = i+1; j = j; 
//                     if(a[i][j] == 1) white ++; 
//                     a[i][j] = 0; 
//                     total ++; 
//                     game ^= 1; 
//                 }
//                 else break; 
//             }
//         } 
//         // for(auto &it : a){
//         //     for(int &e : it){
//         //         cout<<e<<" "; 
//         //     } cout<<endl; 
//         // } 
//         if(!f(a)){
            
//             // for(int i = 0; i < n; i++){
//             //     for(int j = 0; j < n; j++){
//             //         if(arr[i][j] == 1 && a[i][j] == 0){
//             //             white ++; 
//             //         }
//             //         if(a[i][j] == 0) total ++; 
//             //     }
//             // }
//             if((total-white) == black){
//                 cout<<"YES"<<endl;
//                 continue; 
//             }
//         } 

//         a = arr; 
//         i = x, j = y; 
//         white = 0; total = 1; 
//         game = 0; 
//         while(i < n && j >= 0){
//             if(game){
//                 if(j-1 >= 0){
//                     i = i; 
//                     j = j-1; 
//                     if(a[i][j] == 1) white ++; 
//                     a[i][j] = 0; 
//                     total ++; 
//                     game ^= 1; 
//                 }
//                 else break; 
//             } 
//             else{
//                 if(i+1 < n){
//                     i = i+1; j = j; 
//                     if(a[i][j] == 1) white ++; 
//                     a[i][j] = 0; 
//                     total ++; 
//                     game ^= 1; 
//                 }
//                 else break; 
//             }
//         } 
//         if(!f(a)){
//             // int white = 0; 
//             // int total = 0; 
//             // for(int i = 0; i < n; i++){
//             //     for(int j = 0; j < n; j++){
//             //         if(arr[i][j] == 1 && a[i][j] == 0){
//             //             white ++; 
//             //         }
//             //         if(a[i][j] == 0) total ++; 
//             //     }
//             // }
//             if((total-white) == black){
//                 cout<<"YES"<<endl;
//                 continue; 
//             }
//         } 

//         a = arr; 
//         i = x, j = y; 
//         white = 0; total = 1; 
//         game = 1; 
//         while(i < n && j >= 0){
//             if(game){
//                 if(j-1 >= 0){
//                     i = i; 
//                     j = j-1; 
//                     if(a[i][j] == 1) white ++; 
//                     a[i][j] = 0; 
//                     total ++; 
//                     game ^= 1; 
//                 }
//                 else break; 
//             } 
//             else{
//                 if(i+1 < n){
//                     i = i+1; j = j; 
//                     if(a[i][j] == 1) white ++; 
//                     a[i][j] = 0; 
//                     total ++; 
//                     game ^= 1; 
//                 }
//                 else break; 
//             }
//         } 
//         if(!f(a)){
//             // int white = 0; 
//             // int total = 0; 
//             // for(int i = 0; i < n; i++){
//             //     for(int j = 0; j < n; j++){
//             //         if(arr[i][j] == 1 && a[i][j] == 0){
//             //             white ++; 
//             //         }
//             //         if(a[i][j] == 0) total ++; 
//             //     }
//             // }
//             if((total-white) == black){
//                 cout<<"YES"<<endl;
//                 continue; 
//             }
//         } 
//         cout<<"NO"<<endl; 
//     }
// }
