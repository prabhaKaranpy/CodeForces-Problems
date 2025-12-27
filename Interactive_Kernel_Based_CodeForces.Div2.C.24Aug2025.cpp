#include<bits/stdc++.h>
#define ll long long 
using namespace std; 
int main(void){
    int T; cin>>T; 
    while(T--){
        int n; cin>>n; 
        vector<pair<int, int>> arr; 
        for(int i = 1; i <= n; i++){
            int temp; 
            cout<<"? "<<i<<" "<<n<<" "; 
            for(int j = 1; j <= n; j++){
                cout<<j<<" "; 
            }
            cout<<endl; 
            cin>>temp; 
            arr.push_back({temp, i}); 
            cout.flush();  
        }
        sort(arr.begin(), arr.end()); 
        reverse(arr.begin(), arr.end()); 
        int ans = arr[0].first; 
        unordered_map<int, vector<int>> mp; 
        for(auto &it : arr){
            mp[it.first].push_back(it.second); 
        } 
        int level = arr[0].first; 
        int connection = arr[0].second;  
        vector<int> vertices; vertices.push_back(connection); 
        while(1){
            int check = level-1; 
            if(check == 0) break; 
            for(int &port : mp[check]){
                int temp; 
                cout<<"? "<<connection<<" "<<2<<" "<<connection<<" "<<port<<endl; 
                cin>>temp; 
                // arr.push_back({temp, i}); 
                if(temp == 2){
                    vertices.push_back(port); 
                    connection = port; 
                    level -= 1; 
                    cout.flush(); 
                    break; 
                }
                cout.flush();  
            } 
        }
        cout<<"! "; 
        cout<<ans<<" "; 
        for(int &it : vertices) cout<<it<<" "; 
        cout<<endl; 
        // cout.flush(); 
    }
}