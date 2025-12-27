#include<bits/stdc++.h>     // Correct Answer, but TLE on TEST CASE : #6 on CodeForces. 
#define ll long long 
using namespace std; 
struct Comp{
    bool operator()(const pair<int, int> &a, const pair<int, int> &b) const{
        if(a.first == b.first) return a.second > b.second; 
        return a.first < b.first; 
    }
}; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n, k; cin>>n>>k; 
        priority_queue<pair<int, int>, vector<pair<int, int>>, Comp> pq;
        for(int i = 0; i < n; i++){
            int temp; cin>>temp; 
            pq.push({temp, i}); 
        } 
        queue<int> qu; 
        while(!pq.empty()){
            auto [x, i] = pq.top(); 
            pq.pop(); 
            x = x - k; 
            if(x <= 0){
                qu.push(i); 
            } 
            else{
                pq.push({x, i}); 
            }  
        } 
        while(!qu.empty()){
            cout<<qu.front()+1<<" "; 
            qu.pop(); 
        } 
        cout<<endl; 
    }
} 