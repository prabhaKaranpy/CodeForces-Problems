#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define prabha ios_base::sync_with_stdio(false); cin.tie(nullptr)
constexpr ll mod = 998244353;
signed main(void){
    prabha;
    int n; cin>>n; 
    vector<string> arr; 
    string temp; 
    while(getline(cin, temp)){
        arr.pb(temp); 
    }
    // for(int i = 0; i < n; i++){
    //     string temp; 
    //     getline(cin, temp); 
    //     arr.pb(temp); 
    // } 
    int s, d; 
    s = arr[arr.size()-1][0]-48; 
    d = arr[arr.size()-1][2]-48; 
    arr.pop_back(); 
    // for(auto &it : arr) cout<<it<<endl; 
    // cout<<"S : "<<s<<" "<<"D : "<<d<<endl; 
    unordered_map<int, vector<pair<int, int>>> mp; 
    vector<unordered_set<int>> sets; 
    unordered_set<int> stt;
    for(auto &it : arr){
        if(it == "break"){
            sets.pb(stt); 
            stt.clear(); 
        } 
        else{
            vector<int> temp; 
            string f = ""; 
            for(auto &e : it){
                if(e != ' '){
                    f.pb(e); 
                    // stt.insert(e-48); 
                    // temp.pb(e-48); 
                }
                else{
                    stt.insert(stoi(f)); 
                    temp.pb(stoi(f)); 
                    f.clear(); 
                }
            } 
            if(f.size() > 0){
                stt.insert(stoi(f)); 
                temp.pb(stoi(f)); 
                f.clear(); 
            }
            int size = temp.size(); 
            if(size > 1){
                for(int i = 1; i < size; i++){
                    mp[temp[0]].pb({temp[i], 1}); 
                    mp[temp[i]].pb({temp[0], 0}); 
                } 
            } 
        } 
    } 
    stt.clear(); 
    // for(auto &it : mp){
    //     cout<<it.first<<" : "; 
    //     for(auto &e : it.second){
    //         cout<<e.first<<" "<<e.second<<" ; "; 
    //     }
    //     cout<<endl; 
    // }
    // cout<<endl; 
    queue<pair<pair<int, int>, vector<int>>> qu; 
    qu.push({{s, 0}, {s}}); 
    int mini = 0; 
    vector<int> path; 
    unordered_map<int, int> visited; 
    visited[s] = 1; 
    while(!qu.empty()){
        int cur = qu.front().first.first; 
        int w = qu.front().first.second; 
        vector<int> t = qu.front().second; qu.pop(); 
        if(cur == d){
            mini = w; 
            path = t; 
            break; 
        } 
        for(auto &it : mp[cur]){
            vector<int>t1(t); t1.pb(it.first); 
            if(visited[it.first] == 0){
                qu.push({{it.first, w+it.second}, {t1}}); 
                visited[it.first] = 1; 
            }
        }
    } 
    // while(!qu.empty()){
    //     qu.pop(); 
    // }
    // for(int &it : path) cout<<it<<" "; 
    // cout<<endl; 
    int tot = 0; 
    for(int &it : path){
        int count = 0; 
        for(auto &s : sets){
            if(s.find(it) != s.end()){
                count ++; 
            }
        } 
        tot = max(tot, count); 
    }
    mini += tot; 
    mini -=1; 
    cout<<mini; 
    arr.clear(); 
    sets.clear(); 
    mp.clear(); 
    visited.clear(); 
}