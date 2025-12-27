#include<bits/stdc++.h>
using namespace std;
int main(void){
    int T; cin>>T;
    while(T--){
        /*
        int n; cin>>n;
        string s; cin>>s;
        map<char, int> mp;
        mp[s[0]] ++;
        mp[s[n-1]] ++;
        int found = 0;
        for(int i = 1; i < n-1; i++){
            if(mp[s[i]]){
                cout<<"YES"<<endl;
                found = 1;
                break;
            }
            mp[s[i]] ++;
        }
        if(!found){
            cout<<"NO"<<endl;
        }
        */
        int n, m; cin>>n>>m;
        vector<vector<int>> arr(n, vector<int>(m));
        int maxi = 0;
        for(auto &it : arr){
            for(int &e : it){
                cin>>e;
                maxi = max(maxi, e);
            }
        }
        int total = 0;
        for(auto &it : arr){
            for(int &e : it){
                if(e == maxi) total ++;
            }
        }
        vector<int> row(n);
        vector<int> col(m);
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = 0; j < m; j++){
                if(arr[i][j] == maxi){
                    count ++;
                }
            }
            row[i] = count;
        }
        for(int j = 0; j < m; j++){
            int count = 0;
            for(int i = 0; i < n; i++){
                if(arr[i][j] == maxi){
                    count ++;
                }
            }
            col[j] = count;
        }
        int ans = maxi;
        // cout<<"Total : "<<total<<endl;
        // for(int &it : row) cout<<it<<"  ";
        // cout<<endl;
        // for(int &it : col) cout<<it<<"  ";
        // cout<<endl;
        int found = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int temp = row[i], temp2 = col[j];
                if(arr[i][j] == maxi) temp -= 1;
                if(total - (temp + temp2) <= 0){
                    cout<<ans-1<<endl;
                    ans --;
                    found = 1;
                    break;
                }
            }
            if(found == 1) break;
        }
        if(!found) cout<<ans<<endl;
    }
}
