#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
// #define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    // prabha;
    int n; cin>>n; 
    vector<vector<int>> arr(n, vector<int>(n)); 
    vector<pair<int, int>> s; 
    set<pair<int, int>> stt; 
    for(int i = 0; i < n; i++){
        int r = 0; 
        string temp; cin>>temp; 
        int size = temp.size(); 
        
        for(int j = 0; j < size; j +=2){
            int l = temp[j]-48; 
            int w = (temp[j+1] == 'G') ? 1 : -1; 
            if(temp[j+1] == 'S'){
                for(int k = r; k < (r+l); k++){
                    s.pb({i, k}); 
                }
            }
            if(temp[j+1] == 'D'){
                for(int k = r; k < (r+l); k++){
                    stt.insert({i, k}); 
                }
            }
            if(temp[j+1] == 'D'){
                w = 1; 
            }
            for(int k = r; k < (r+l); k++){
                if(k == r) arr[i][k] = w; 
                else arr[i][k] = 0; 
            } 
            r += l;
        }
    } 
    int ans = 1e8; 
    for(auto &it : s){
        auto &[x, y] = it; 
        int mini = 0; 
        vector<vector<int>> visited(n, vector<int>(n)); 
        queue<pair<int, pair<int, int>>> qu; 
        qu.push({0, {x, y}}); 
        while(!qu.empty()){
            int x = qu.front().second.first, y = qu.front().second.second; 
            int w = qu.front().first; qu.pop(); 
            if(stt.find({x, y}) != stt.end()){
                mini = w; 
                break; 
            }
            if(x-1 >= 0 && (arr[x-1][y] != -1) && (!visited[x-1][y])){
                qu.push({w+arr[x-1][y], {x-1, y}}); 
                visited[x-1][y] = 1; 
            }
            if(x+1 < n && (arr[x+1][y] != -1) && (!visited[x+1][y])){
                qu.push({w+arr[x+1][y], {x+1, y}}); 
                visited[x+1][y] = 1; 
            } 
            if(y-1 >= 0 && (arr[x][y-1] != -1) && (!visited[x][y-1])){
                qu.push({w+arr[x][y-1], {x, y-1}}); 
                visited[x][y-1] = 1; 
            } 
            if(y+1 < n && ((arr[x][y+1] != -1) && (!visited[x][y+1]))){
                qu.push({w+arr[x][y+1], {x, y+1}}); 
                visited[x][y+1] = 1; 
            } 
        } 
        ans = min(ans, mini); 
    } 
    cout<<ans; 
    // stt.clear(); 
    // for(auto &it : s){
    //     cout<<it.first<<" "<<it.second; 
    // } 
    // cout<<endl; 
    // for(auto &it : stt){
    //     cout<<it.first<<" "<<it.second; 
    // } cout<<endl; 
    // for(auto &it : arr){
    //     for(int &e : it) cout<<e<<" "; 
    //     cout<<endl; 
    // }
}